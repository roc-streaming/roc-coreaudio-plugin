/*
 * Copyright (c) Roc Streaming authors
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#include "device.hpp"
#include "build_info.hpp"

#include <fmt/core.h>
#include <spdlog/spdlog.h>

#include <algorithm>
#include <cassert>
#include <stdexcept>

namespace rocvad {

namespace {

UInt32 compute_channel_count(const DeviceInfo& info)
{
    switch (info.device_encoding.channel_layout) {
    case ROC_CHANNEL_LAYOUT_MONO:
        return 1;

    case ROC_CHANNEL_LAYOUT_STEREO:
        return 2;

    default:
        throw std::runtime_error("selected channel_layout not supported by device");
    }
}

aspl::DeviceParameters make_device_params(const DeviceInfo& info)
{
    aspl::DeviceParameters device_params;

    device_params.Name = info.name;
    device_params.Manufacturer = BuildInfo::driver_manufacturer;
    device_params.DeviceUID = info.uid;
    device_params.ModelUID = BuildInfo::driver_bundle_id;

    device_params.CanBeDefault = true;
    device_params.CanBeDefaultForSystemSounds = true;

    device_params.EnableMixing = true;
    device_params.EnableRealtimeTracing = false;

    device_params.SampleRate = info.device_encoding.sample_rate;
    device_params.ChannelCount = compute_channel_count(info);

    spdlog::debug(
        "device parameters: Name=\"{}\" Manufacturer=\"{}\""
        " DeviceUID=\"{}\" ModelUID=\"{}\""
        " CanBeDefault={} CanBeDefaultForSystemSounds={}"
        " SampleRate={} ChannelCount={}"
        " Latency={} SafetyOffset={} ZeroTimeStampPeriod={}",
        device_params.Name,
        device_params.Manufacturer,
        device_params.DeviceUID,
        device_params.ModelUID,
        device_params.CanBeDefault,
        device_params.CanBeDefaultForSystemSounds,
        device_params.SampleRate,
        device_params.ChannelCount,
        device_params.Latency,
        device_params.SafetyOffset,
        device_params.ZeroTimeStampPeriod);

    return device_params;
}

aspl::StreamParameters make_stream_params(const DeviceInfo& info)
{
    aspl::StreamParameters stream_params;

    const UInt32 num_chans = compute_channel_count(info);

    stream_params.Direction = info.type == DeviceType::Sender ? aspl::Direction::Output
                                                              : aspl::Direction::Input;

    stream_params.Format.mSampleRate = UInt32(info.device_encoding.sample_rate);
    stream_params.Format.mFormatFlags = kAudioFormatFlagIsFloat |
                                        kAudioFormatFlagsNativeEndian |
                                        kAudioFormatFlagIsPacked;
    stream_params.Format.mBitsPerChannel = sizeof(Float32) * 8;
    stream_params.Format.mChannelsPerFrame = num_chans;
    stream_params.Format.mBytesPerFrame = sizeof(Float32) * num_chans;
    stream_params.Format.mFramesPerPacket = 1;
    stream_params.Format.mBytesPerPacket = sizeof(Float32) * num_chans;

    spdlog::debug(
        "stream parameters: Direction={} StartingChannel={}"
        " SampleRate={} FormatID={} FormatFlags={}"
        " BitsPerChannel={} ChannelsPerFrame={} BytesPerFrame={}"
        " FramesPerPacket={} BytesPerPacket={}"
        " Latency={}",
        (int)stream_params.Direction,
        stream_params.StartingChannel,
        stream_params.Format.mSampleRate,
        stream_params.Format.mFormatID,
        stream_params.Format.mFormatFlags,
        stream_params.Format.mBitsPerChannel,
        stream_params.Format.mChannelsPerFrame,
        stream_params.Format.mBytesPerFrame,
        stream_params.Format.mFramesPerPacket,
        stream_params.Format.mBytesPerPacket,
        stream_params.Latency);

    return stream_params;
}

} // namespace

Device::Device(std::shared_ptr<aspl::Plugin> plugin,
    IndexAllocator& index_allocator,
    UidGenerator& uid_generator,
    const DeviceInfo& device_info)
    : index_allocator_(index_allocator)
    , uid_generator_(uid_generator)
    , plugin_(plugin)
    , info_(device_info)
{
    assert(plugin_);

    if (info_.index == 0) {
        info_.index = index_allocator_.allocate_and_acquire();
    } else {
        index_allocator_.acquire(info_.index);
    }

    if (info_.uid.empty()) {
        info_.uid = uid_generator_.generate();
    }

    if (info_.name.empty()) {
        info_.name = fmt::format("Roc Virtual Device #{}", info_.index);
    }

    spdlog::info("creating device object, index={} uid={} type={} name=\"{}\"",
        info_.index,
        info_.uid,
        info_.type,
        info_.name);

    device_ =
        std::make_shared<aspl::Device>(plugin_->GetContext(), make_device_params(info_));

    device_->AddStreamWithControlsAsync(make_stream_params(info_));

    // TODO: roc_open

    sort_endpoints_();

    for (auto& endpoint : info_.local_endpoints) {
        bind_endpoint_(endpoint);
    }

    for (auto& endpoint : info_.remote_endpoints) {
        connect_endpoint_(endpoint);
    }

    toggle(info_.enabled);
}

Device::~Device()
{
    spdlog::info("destroying device object, index={} uid={} type={} name=\"{}\"",
        info_.index,
        info_.uid,
        info_.type,
        info_.name);

    toggle(false);

    // TODO: roc_close

    if (info_.index != 0) {
        index_allocator_.release(info_.index);
    }
}

DeviceInfo Device::info()
{
    return info_;
}

void Device::toggle(bool enabled)
{
    info_.enabled = enabled;

    if (enabled) {
        if (!device_added_) {
            spdlog::debug("enabling device {}", info_.uid);

            plugin_->AddDevice(device_);
            device_added_ = true;
        } else {
            spdlog::debug("device {} is already enabled", info_.uid);
        }
    } else {
        if (device_added_) {
            spdlog::debug("disabling device {}", info_.uid);

            plugin_->RemoveDevice(device_);
            device_added_ = false;
        } else {
            spdlog::debug("device {} is already disabled", info_.uid);
        }
    }
}

DeviceEndpointInfo Device::bind(DeviceEndpointInfo endpoint_info)
{
    bind_endpoint_(endpoint_info);

    info_.local_endpoints.push_back(endpoint_info);
    sort_endpoints_();

    return endpoint_info;
}

DeviceEndpointInfo Device::connect(DeviceEndpointInfo endpoint_info)
{
    connect_endpoint_(endpoint_info);

    info_.remote_endpoints.push_back(endpoint_info);
    sort_endpoints_();

    return endpoint_info;
}

void Device::bind_endpoint_(DeviceEndpointInfo& endpoint_info)
{
    spdlog::info("binding device {} slot {} to endpoint {}",
        info_.uid,
        endpoint_info.slot,
        endpoint_info.uri);

    // TODO: roc_bind
}

void Device::connect_endpoint_(DeviceEndpointInfo& endpoint_info)
{
    spdlog::info("connecting device {} slot {} to endpoint {}",
        info_.uid,
        endpoint_info.slot,
        endpoint_info.uri);

    // TODO: roc_connect
}

void Device::sort_endpoints_()
{
    for (auto endpoints : {&info_.local_endpoints, &info_.remote_endpoints}) {
        std::sort(endpoints->begin(),
            endpoints->end(),
            [](const DeviceEndpointInfo& a, const DeviceEndpointInfo& b) {
                if (a.slot != b.slot) {
                    return a.slot < b.slot;
                } else {
                    return (int)a.interface < (int)b.interface;
                }
            });
    }
}

} // namespace rocvad
