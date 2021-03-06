// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ChangeModel.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ChangeModel_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ChangeModel_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_ChangeModel_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ChangeModel_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ChangeModel_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_ChangeModel_2eproto_metadata_getter(int index);
namespace xpilot {
class ChangeModel;
struct ChangeModelDefaultTypeInternal;
extern ChangeModelDefaultTypeInternal _ChangeModel_default_instance_;
}  // namespace xpilot
PROTOBUF_NAMESPACE_OPEN
template<> ::xpilot::ChangeModel* Arena::CreateMaybeMessage<::xpilot::ChangeModel>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace xpilot {

// ===================================================================

class ChangeModel PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:xpilot.ChangeModel) */ {
 public:
  inline ChangeModel() : ChangeModel(nullptr) {}
  virtual ~ChangeModel();
  explicit constexpr ChangeModel(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ChangeModel(const ChangeModel& from);
  ChangeModel(ChangeModel&& from) noexcept
    : ChangeModel() {
    *this = ::std::move(from);
  }

  inline ChangeModel& operator=(const ChangeModel& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChangeModel& operator=(ChangeModel&& from) noexcept {
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
  static const ChangeModel& default_instance() {
    return *internal_default_instance();
  }
  static inline const ChangeModel* internal_default_instance() {
    return reinterpret_cast<const ChangeModel*>(
               &_ChangeModel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ChangeModel& a, ChangeModel& b) {
    a.Swap(&b);
  }
  inline void Swap(ChangeModel* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ChangeModel* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ChangeModel* New() const final {
    return CreateMaybeMessage<ChangeModel>(nullptr);
  }

  ChangeModel* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ChangeModel>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ChangeModel& from);
  void MergeFrom(const ChangeModel& from);
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
  void InternalSwap(ChangeModel* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "xpilot.ChangeModel";
  }
  protected:
  explicit ChangeModel(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_ChangeModel_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCallsignFieldNumber = 1,
    kAirlineFieldNumber = 2,
    kEquipmentFieldNumber = 3,
  };
  // string callsign = 1;
  bool has_callsign() const;
  private:
  bool _internal_has_callsign() const;
  public:
  void clear_callsign();
  const std::string& callsign() const;
  void set_callsign(const std::string& value);
  void set_callsign(std::string&& value);
  void set_callsign(const char* value);
  void set_callsign(const char* value, size_t size);
  std::string* mutable_callsign();
  std::string* release_callsign();
  void set_allocated_callsign(std::string* callsign);
  private:
  const std::string& _internal_callsign() const;
  void _internal_set_callsign(const std::string& value);
  std::string* _internal_mutable_callsign();
  public:

  // string airline = 2;
  bool has_airline() const;
  private:
  bool _internal_has_airline() const;
  public:
  void clear_airline();
  const std::string& airline() const;
  void set_airline(const std::string& value);
  void set_airline(std::string&& value);
  void set_airline(const char* value);
  void set_airline(const char* value, size_t size);
  std::string* mutable_airline();
  std::string* release_airline();
  void set_allocated_airline(std::string* airline);
  private:
  const std::string& _internal_airline() const;
  void _internal_set_airline(const std::string& value);
  std::string* _internal_mutable_airline();
  public:

  // string equipment = 3;
  bool has_equipment() const;
  private:
  bool _internal_has_equipment() const;
  public:
  void clear_equipment();
  const std::string& equipment() const;
  void set_equipment(const std::string& value);
  void set_equipment(std::string&& value);
  void set_equipment(const char* value);
  void set_equipment(const char* value, size_t size);
  std::string* mutable_equipment();
  std::string* release_equipment();
  void set_allocated_equipment(std::string* equipment);
  private:
  const std::string& _internal_equipment() const;
  void _internal_set_equipment(const std::string& value);
  std::string* _internal_mutable_equipment();
  public:

  // @@protoc_insertion_point(class_scope:xpilot.ChangeModel)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr callsign_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr airline_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr equipment_;
  friend struct ::TableStruct_ChangeModel_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ChangeModel

// string callsign = 1;
inline bool ChangeModel::_internal_has_callsign() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ChangeModel::has_callsign() const {
  return _internal_has_callsign();
}
inline void ChangeModel::clear_callsign() {
  callsign_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ChangeModel::callsign() const {
  // @@protoc_insertion_point(field_get:xpilot.ChangeModel.callsign)
  return _internal_callsign();
}
inline void ChangeModel::set_callsign(const std::string& value) {
  _internal_set_callsign(value);
  // @@protoc_insertion_point(field_set:xpilot.ChangeModel.callsign)
}
inline std::string* ChangeModel::mutable_callsign() {
  // @@protoc_insertion_point(field_mutable:xpilot.ChangeModel.callsign)
  return _internal_mutable_callsign();
}
inline const std::string& ChangeModel::_internal_callsign() const {
  return callsign_.Get();
}
inline void ChangeModel::_internal_set_callsign(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  callsign_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void ChangeModel::set_callsign(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  callsign_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:xpilot.ChangeModel.callsign)
}
inline void ChangeModel::set_callsign(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  callsign_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:xpilot.ChangeModel.callsign)
}
inline void ChangeModel::set_callsign(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000001u;
  callsign_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:xpilot.ChangeModel.callsign)
}
inline std::string* ChangeModel::_internal_mutable_callsign() {
  _has_bits_[0] |= 0x00000001u;
  return callsign_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* ChangeModel::release_callsign() {
  // @@protoc_insertion_point(field_release:xpilot.ChangeModel.callsign)
  if (!_internal_has_callsign()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return callsign_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ChangeModel::set_allocated_callsign(std::string* callsign) {
  if (callsign != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  callsign_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), callsign,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:xpilot.ChangeModel.callsign)
}

// string airline = 2;
inline bool ChangeModel::_internal_has_airline() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool ChangeModel::has_airline() const {
  return _internal_has_airline();
}
inline void ChangeModel::clear_airline() {
  airline_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& ChangeModel::airline() const {
  // @@protoc_insertion_point(field_get:xpilot.ChangeModel.airline)
  return _internal_airline();
}
inline void ChangeModel::set_airline(const std::string& value) {
  _internal_set_airline(value);
  // @@protoc_insertion_point(field_set:xpilot.ChangeModel.airline)
}
inline std::string* ChangeModel::mutable_airline() {
  // @@protoc_insertion_point(field_mutable:xpilot.ChangeModel.airline)
  return _internal_mutable_airline();
}
inline const std::string& ChangeModel::_internal_airline() const {
  return airline_.Get();
}
inline void ChangeModel::_internal_set_airline(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  airline_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void ChangeModel::set_airline(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  airline_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:xpilot.ChangeModel.airline)
}
inline void ChangeModel::set_airline(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  airline_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:xpilot.ChangeModel.airline)
}
inline void ChangeModel::set_airline(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000002u;
  airline_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:xpilot.ChangeModel.airline)
}
inline std::string* ChangeModel::_internal_mutable_airline() {
  _has_bits_[0] |= 0x00000002u;
  return airline_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* ChangeModel::release_airline() {
  // @@protoc_insertion_point(field_release:xpilot.ChangeModel.airline)
  if (!_internal_has_airline()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return airline_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ChangeModel::set_allocated_airline(std::string* airline) {
  if (airline != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  airline_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), airline,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:xpilot.ChangeModel.airline)
}

// string equipment = 3;
inline bool ChangeModel::_internal_has_equipment() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool ChangeModel::has_equipment() const {
  return _internal_has_equipment();
}
inline void ChangeModel::clear_equipment() {
  equipment_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& ChangeModel::equipment() const {
  // @@protoc_insertion_point(field_get:xpilot.ChangeModel.equipment)
  return _internal_equipment();
}
inline void ChangeModel::set_equipment(const std::string& value) {
  _internal_set_equipment(value);
  // @@protoc_insertion_point(field_set:xpilot.ChangeModel.equipment)
}
inline std::string* ChangeModel::mutable_equipment() {
  // @@protoc_insertion_point(field_mutable:xpilot.ChangeModel.equipment)
  return _internal_mutable_equipment();
}
inline const std::string& ChangeModel::_internal_equipment() const {
  return equipment_.Get();
}
inline void ChangeModel::_internal_set_equipment(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  equipment_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void ChangeModel::set_equipment(std::string&& value) {
  _has_bits_[0] |= 0x00000004u;
  equipment_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:xpilot.ChangeModel.equipment)
}
inline void ChangeModel::set_equipment(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000004u;
  equipment_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:xpilot.ChangeModel.equipment)
}
inline void ChangeModel::set_equipment(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000004u;
  equipment_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:xpilot.ChangeModel.equipment)
}
inline std::string* ChangeModel::_internal_mutable_equipment() {
  _has_bits_[0] |= 0x00000004u;
  return equipment_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* ChangeModel::release_equipment() {
  // @@protoc_insertion_point(field_release:xpilot.ChangeModel.equipment)
  if (!_internal_has_equipment()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return equipment_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ChangeModel::set_allocated_equipment(std::string* equipment) {
  if (equipment != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  equipment_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), equipment,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:xpilot.ChangeModel.equipment)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace xpilot

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ChangeModel_2eproto
