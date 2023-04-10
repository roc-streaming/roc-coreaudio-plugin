// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: device_manager_protocol.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_device_5fmanager_5fprotocol_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_device_5fmanager_5fprotocol_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_bases.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_device_5fmanager_5fprotocol_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_device_5fmanager_5fprotocol_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_device_5fmanager_5fprotocol_2eproto;
namespace rcp {
namespace proto {
class AddDeviceArgs;
struct AddDeviceArgsDefaultTypeInternal;
extern AddDeviceArgsDefaultTypeInternal _AddDeviceArgs_default_instance_;
class DeleteDeviceArgs;
struct DeleteDeviceArgsDefaultTypeInternal;
extern DeleteDeviceArgsDefaultTypeInternal _DeleteDeviceArgs_default_instance_;
class Info;
struct InfoDefaultTypeInternal;
extern InfoDefaultTypeInternal _Info_default_instance_;
class LogMessage;
struct LogMessageDefaultTypeInternal;
extern LogMessageDefaultTypeInternal _LogMessage_default_instance_;
class None;
struct NoneDefaultTypeInternal;
extern NoneDefaultTypeInternal _None_default_instance_;
}  // namespace proto
}  // namespace rcp
PROTOBUF_NAMESPACE_OPEN
template<> ::rcp::proto::AddDeviceArgs* Arena::CreateMaybeMessage<::rcp::proto::AddDeviceArgs>(Arena*);
template<> ::rcp::proto::DeleteDeviceArgs* Arena::CreateMaybeMessage<::rcp::proto::DeleteDeviceArgs>(Arena*);
template<> ::rcp::proto::Info* Arena::CreateMaybeMessage<::rcp::proto::Info>(Arena*);
template<> ::rcp::proto::LogMessage* Arena::CreateMaybeMessage<::rcp::proto::LogMessage>(Arena*);
template<> ::rcp::proto::None* Arena::CreateMaybeMessage<::rcp::proto::None>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace rcp {
namespace proto {

// ===================================================================

class None final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:rcp.proto.None) */ {
 public:
  inline None() : None(nullptr) {}
  explicit PROTOBUF_CONSTEXPR None(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  None(const None& from);
  None(None&& from) noexcept
    : None() {
    *this = ::std::move(from);
  }

  inline None& operator=(const None& from) {
    CopyFrom(from);
    return *this;
  }
  inline None& operator=(None&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const None& default_instance() {
    return *internal_default_instance();
  }
  static inline const None* internal_default_instance() {
    return reinterpret_cast<const None*>(
               &_None_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(None& a, None& b) {
    a.Swap(&b);
  }
  inline void Swap(None* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(None* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  None* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<None>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const None& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const None& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "rcp.proto.None";
  }
  protected:
  explicit None(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:rcp.proto.None)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_device_5fmanager_5fprotocol_2eproto;
};
// -------------------------------------------------------------------

class Info final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:rcp.proto.Info) */ {
 public:
  inline Info() : Info(nullptr) {}
  ~Info() override;
  explicit PROTOBUF_CONSTEXPR Info(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Info(const Info& from);
  Info(Info&& from) noexcept
    : Info() {
    *this = ::std::move(from);
  }

  inline Info& operator=(const Info& from) {
    CopyFrom(from);
    return *this;
  }
  inline Info& operator=(Info&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Info& default_instance() {
    return *internal_default_instance();
  }
  static inline const Info* internal_default_instance() {
    return reinterpret_cast<const Info*>(
               &_Info_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Info& a, Info& b) {
    a.Swap(&b);
  }
  inline void Swap(Info* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Info* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Info* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Info>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Info& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Info& from) {
    Info::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Info* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "rcp.proto.Info";
  }
  protected:
  explicit Info(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kVersionFieldNumber = 1,
    kCommitFieldNumber = 2,
  };
  // string version = 1;
  void clear_version();
  const std::string& version() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_version(ArgT0&& arg0, ArgT... args);
  std::string* mutable_version();
  PROTOBUF_NODISCARD std::string* release_version();
  void set_allocated_version(std::string* version);
  private:
  const std::string& _internal_version() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_version(const std::string& value);
  std::string* _internal_mutable_version();
  public:

  // string commit = 2;
  void clear_commit();
  const std::string& commit() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_commit(ArgT0&& arg0, ArgT... args);
  std::string* mutable_commit();
  PROTOBUF_NODISCARD std::string* release_commit();
  void set_allocated_commit(std::string* commit);
  private:
  const std::string& _internal_commit() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_commit(const std::string& value);
  std::string* _internal_mutable_commit();
  public:

  // @@protoc_insertion_point(class_scope:rcp.proto.Info)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr version_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr commit_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_device_5fmanager_5fprotocol_2eproto;
};
// -------------------------------------------------------------------

class LogMessage final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:rcp.proto.LogMessage) */ {
 public:
  inline LogMessage() : LogMessage(nullptr) {}
  ~LogMessage() override;
  explicit PROTOBUF_CONSTEXPR LogMessage(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  LogMessage(const LogMessage& from);
  LogMessage(LogMessage&& from) noexcept
    : LogMessage() {
    *this = ::std::move(from);
  }

  inline LogMessage& operator=(const LogMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline LogMessage& operator=(LogMessage&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const LogMessage& default_instance() {
    return *internal_default_instance();
  }
  static inline const LogMessage* internal_default_instance() {
    return reinterpret_cast<const LogMessage*>(
               &_LogMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(LogMessage& a, LogMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(LogMessage* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(LogMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  LogMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<LogMessage>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const LogMessage& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const LogMessage& from) {
    LogMessage::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LogMessage* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "rcp.proto.LogMessage";
  }
  protected:
  explicit LogMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTextFieldNumber = 1,
  };
  // string text = 1;
  void clear_text();
  const std::string& text() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_text(ArgT0&& arg0, ArgT... args);
  std::string* mutable_text();
  PROTOBUF_NODISCARD std::string* release_text();
  void set_allocated_text(std::string* text);
  private:
  const std::string& _internal_text() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_text(const std::string& value);
  std::string* _internal_mutable_text();
  public:

  // @@protoc_insertion_point(class_scope:rcp.proto.LogMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr text_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_device_5fmanager_5fprotocol_2eproto;
};
// -------------------------------------------------------------------

class AddDeviceArgs final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:rcp.proto.AddDeviceArgs) */ {
 public:
  inline AddDeviceArgs() : AddDeviceArgs(nullptr) {}
  explicit PROTOBUF_CONSTEXPR AddDeviceArgs(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AddDeviceArgs(const AddDeviceArgs& from);
  AddDeviceArgs(AddDeviceArgs&& from) noexcept
    : AddDeviceArgs() {
    *this = ::std::move(from);
  }

  inline AddDeviceArgs& operator=(const AddDeviceArgs& from) {
    CopyFrom(from);
    return *this;
  }
  inline AddDeviceArgs& operator=(AddDeviceArgs&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const AddDeviceArgs& default_instance() {
    return *internal_default_instance();
  }
  static inline const AddDeviceArgs* internal_default_instance() {
    return reinterpret_cast<const AddDeviceArgs*>(
               &_AddDeviceArgs_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(AddDeviceArgs& a, AddDeviceArgs& b) {
    a.Swap(&b);
  }
  inline void Swap(AddDeviceArgs* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AddDeviceArgs* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AddDeviceArgs* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AddDeviceArgs>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const AddDeviceArgs& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const AddDeviceArgs& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "rcp.proto.AddDeviceArgs";
  }
  protected:
  explicit AddDeviceArgs(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:rcp.proto.AddDeviceArgs)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_device_5fmanager_5fprotocol_2eproto;
};
// -------------------------------------------------------------------

class DeleteDeviceArgs final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:rcp.proto.DeleteDeviceArgs) */ {
 public:
  inline DeleteDeviceArgs() : DeleteDeviceArgs(nullptr) {}
  explicit PROTOBUF_CONSTEXPR DeleteDeviceArgs(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  DeleteDeviceArgs(const DeleteDeviceArgs& from);
  DeleteDeviceArgs(DeleteDeviceArgs&& from) noexcept
    : DeleteDeviceArgs() {
    *this = ::std::move(from);
  }

  inline DeleteDeviceArgs& operator=(const DeleteDeviceArgs& from) {
    CopyFrom(from);
    return *this;
  }
  inline DeleteDeviceArgs& operator=(DeleteDeviceArgs&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const DeleteDeviceArgs& default_instance() {
    return *internal_default_instance();
  }
  static inline const DeleteDeviceArgs* internal_default_instance() {
    return reinterpret_cast<const DeleteDeviceArgs*>(
               &_DeleteDeviceArgs_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    4;

  friend void swap(DeleteDeviceArgs& a, DeleteDeviceArgs& b) {
    a.Swap(&b);
  }
  inline void Swap(DeleteDeviceArgs* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(DeleteDeviceArgs* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  DeleteDeviceArgs* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<DeleteDeviceArgs>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const DeleteDeviceArgs& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const DeleteDeviceArgs& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "rcp.proto.DeleteDeviceArgs";
  }
  protected:
  explicit DeleteDeviceArgs(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:rcp.proto.DeleteDeviceArgs)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_device_5fmanager_5fprotocol_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// None

// -------------------------------------------------------------------

// Info

// string version = 1;
inline void Info::clear_version() {
  _impl_.version_.ClearToEmpty();
}
inline const std::string& Info::version() const {
  // @@protoc_insertion_point(field_get:rcp.proto.Info.version)
  return _internal_version();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Info::set_version(ArgT0&& arg0, ArgT... args) {
 
 _impl_.version_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:rcp.proto.Info.version)
}
inline std::string* Info::mutable_version() {
  std::string* _s = _internal_mutable_version();
  // @@protoc_insertion_point(field_mutable:rcp.proto.Info.version)
  return _s;
}
inline const std::string& Info::_internal_version() const {
  return _impl_.version_.Get();
}
inline void Info::_internal_set_version(const std::string& value) {
  
  _impl_.version_.Set(value, GetArenaForAllocation());
}
inline std::string* Info::_internal_mutable_version() {
  
  return _impl_.version_.Mutable(GetArenaForAllocation());
}
inline std::string* Info::release_version() {
  // @@protoc_insertion_point(field_release:rcp.proto.Info.version)
  return _impl_.version_.Release();
}
inline void Info::set_allocated_version(std::string* version) {
  if (version != nullptr) {
    
  } else {
    
  }
  _impl_.version_.SetAllocated(version, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.version_.IsDefault()) {
    _impl_.version_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:rcp.proto.Info.version)
}

// string commit = 2;
inline void Info::clear_commit() {
  _impl_.commit_.ClearToEmpty();
}
inline const std::string& Info::commit() const {
  // @@protoc_insertion_point(field_get:rcp.proto.Info.commit)
  return _internal_commit();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Info::set_commit(ArgT0&& arg0, ArgT... args) {
 
 _impl_.commit_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:rcp.proto.Info.commit)
}
inline std::string* Info::mutable_commit() {
  std::string* _s = _internal_mutable_commit();
  // @@protoc_insertion_point(field_mutable:rcp.proto.Info.commit)
  return _s;
}
inline const std::string& Info::_internal_commit() const {
  return _impl_.commit_.Get();
}
inline void Info::_internal_set_commit(const std::string& value) {
  
  _impl_.commit_.Set(value, GetArenaForAllocation());
}
inline std::string* Info::_internal_mutable_commit() {
  
  return _impl_.commit_.Mutable(GetArenaForAllocation());
}
inline std::string* Info::release_commit() {
  // @@protoc_insertion_point(field_release:rcp.proto.Info.commit)
  return _impl_.commit_.Release();
}
inline void Info::set_allocated_commit(std::string* commit) {
  if (commit != nullptr) {
    
  } else {
    
  }
  _impl_.commit_.SetAllocated(commit, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.commit_.IsDefault()) {
    _impl_.commit_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:rcp.proto.Info.commit)
}

// -------------------------------------------------------------------

// LogMessage

// string text = 1;
inline void LogMessage::clear_text() {
  _impl_.text_.ClearToEmpty();
}
inline const std::string& LogMessage::text() const {
  // @@protoc_insertion_point(field_get:rcp.proto.LogMessage.text)
  return _internal_text();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void LogMessage::set_text(ArgT0&& arg0, ArgT... args) {
 
 _impl_.text_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:rcp.proto.LogMessage.text)
}
inline std::string* LogMessage::mutable_text() {
  std::string* _s = _internal_mutable_text();
  // @@protoc_insertion_point(field_mutable:rcp.proto.LogMessage.text)
  return _s;
}
inline const std::string& LogMessage::_internal_text() const {
  return _impl_.text_.Get();
}
inline void LogMessage::_internal_set_text(const std::string& value) {
  
  _impl_.text_.Set(value, GetArenaForAllocation());
}
inline std::string* LogMessage::_internal_mutable_text() {
  
  return _impl_.text_.Mutable(GetArenaForAllocation());
}
inline std::string* LogMessage::release_text() {
  // @@protoc_insertion_point(field_release:rcp.proto.LogMessage.text)
  return _impl_.text_.Release();
}
inline void LogMessage::set_allocated_text(std::string* text) {
  if (text != nullptr) {
    
  } else {
    
  }
  _impl_.text_.SetAllocated(text, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.text_.IsDefault()) {
    _impl_.text_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:rcp.proto.LogMessage.text)
}

// -------------------------------------------------------------------

// AddDeviceArgs

// -------------------------------------------------------------------

// DeleteDeviceArgs

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace rcp

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_device_5fmanager_5fprotocol_2eproto
