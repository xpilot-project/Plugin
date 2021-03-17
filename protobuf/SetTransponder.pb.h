// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SetTransponder.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SetTransponder_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SetTransponder_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_SetTransponder_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SetTransponder_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SetTransponder_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_SetTransponder_2eproto_metadata_getter(int index);
namespace xpilot {
class SetTransponder;
struct SetTransponderDefaultTypeInternal;
extern SetTransponderDefaultTypeInternal _SetTransponder_default_instance_;
}  // namespace xpilot
PROTOBUF_NAMESPACE_OPEN
template<> ::xpilot::SetTransponder* Arena::CreateMaybeMessage<::xpilot::SetTransponder>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace xpilot {

// ===================================================================

class SetTransponder PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:xpilot.SetTransponder) */ {
 public:
  inline SetTransponder() : SetTransponder(nullptr) {}
  virtual ~SetTransponder();
  explicit constexpr SetTransponder(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SetTransponder(const SetTransponder& from);
  SetTransponder(SetTransponder&& from) noexcept
    : SetTransponder() {
    *this = ::std::move(from);
  }

  inline SetTransponder& operator=(const SetTransponder& from) {
    CopyFrom(from);
    return *this;
  }
  inline SetTransponder& operator=(SetTransponder&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SetTransponder& default_instance() {
    return *internal_default_instance();
  }
  static inline const SetTransponder* internal_default_instance() {
    return reinterpret_cast<const SetTransponder*>(
               &_SetTransponder_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SetTransponder& a, SetTransponder& b) {
    a.Swap(&b);
  }
  inline void Swap(SetTransponder* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SetTransponder* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SetTransponder* New() const final {
    return CreateMaybeMessage<SetTransponder>(nullptr);
  }

  SetTransponder* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SetTransponder>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SetTransponder& from);
  void MergeFrom(const SetTransponder& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SetTransponder* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "xpilot.SetTransponder";
  }
  protected:
  explicit SetTransponder(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_SetTransponder_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCodeFieldNumber = 1,
    kModeCFieldNumber = 2,
    kIdentFieldNumber = 3,
  };
  // int32 code = 1;
  bool has_code() const;
  private:
  bool _internal_has_code() const;
  public:
  void clear_code();
  ::PROTOBUF_NAMESPACE_ID::int32 code() const;
  void set_code(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_code() const;
  void _internal_set_code(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // bool mode_c = 2;
  bool has_mode_c() const;
  private:
  bool _internal_has_mode_c() const;
  public:
  void clear_mode_c();
  bool mode_c() const;
  void set_mode_c(bool value);
  private:
  bool _internal_mode_c() const;
  void _internal_set_mode_c(bool value);
  public:

  // bool ident = 3;
  bool has_ident() const;
  private:
  bool _internal_has_ident() const;
  public:
  void clear_ident();
  bool ident() const;
  void set_ident(bool value);
  private:
  bool _internal_ident() const;
  void _internal_set_ident(bool value);
  public:

  // @@protoc_insertion_point(class_scope:xpilot.SetTransponder)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 code_;
  bool mode_c_;
  bool ident_;
  friend struct ::TableStruct_SetTransponder_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SetTransponder

// int32 code = 1;
inline bool SetTransponder::_internal_has_code() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool SetTransponder::has_code() const {
  return _internal_has_code();
}
inline void SetTransponder::clear_code() {
  code_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SetTransponder::_internal_code() const {
  return code_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SetTransponder::code() const {
  // @@protoc_insertion_point(field_get:xpilot.SetTransponder.code)
  return _internal_code();
}
inline void SetTransponder::_internal_set_code(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  code_ = value;
}
inline void SetTransponder::set_code(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_code(value);
  // @@protoc_insertion_point(field_set:xpilot.SetTransponder.code)
}

// bool mode_c = 2;
inline bool SetTransponder::_internal_has_mode_c() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool SetTransponder::has_mode_c() const {
  return _internal_has_mode_c();
}
inline void SetTransponder::clear_mode_c() {
  mode_c_ = false;
  _has_bits_[0] &= ~0x00000002u;
}
inline bool SetTransponder::_internal_mode_c() const {
  return mode_c_;
}
inline bool SetTransponder::mode_c() const {
  // @@protoc_insertion_point(field_get:xpilot.SetTransponder.mode_c)
  return _internal_mode_c();
}
inline void SetTransponder::_internal_set_mode_c(bool value) {
  _has_bits_[0] |= 0x00000002u;
  mode_c_ = value;
}
inline void SetTransponder::set_mode_c(bool value) {
  _internal_set_mode_c(value);
  // @@protoc_insertion_point(field_set:xpilot.SetTransponder.mode_c)
}

// bool ident = 3;
inline bool SetTransponder::_internal_has_ident() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool SetTransponder::has_ident() const {
  return _internal_has_ident();
}
inline void SetTransponder::clear_ident() {
  ident_ = false;
  _has_bits_[0] &= ~0x00000004u;
}
inline bool SetTransponder::_internal_ident() const {
  return ident_;
}
inline bool SetTransponder::ident() const {
  // @@protoc_insertion_point(field_get:xpilot.SetTransponder.ident)
  return _internal_ident();
}
inline void SetTransponder::_internal_set_ident(bool value) {
  _has_bits_[0] |= 0x00000004u;
  ident_ = value;
}
inline void SetTransponder::set_ident(bool value) {
  _internal_set_ident(value);
  // @@protoc_insertion_point(field_set:xpilot.SetTransponder.ident)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace xpilot

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SetTransponder_2eproto