// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CSLValidate.proto

#include "CSLValidate.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace xpilot {
constexpr CslValidate::CslValidate(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : valid_(false){}
struct CslValidateDefaultTypeInternal {
  constexpr CslValidateDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~CslValidateDefaultTypeInternal() {}
  union {
    CslValidate _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT CslValidateDefaultTypeInternal _CslValidate_default_instance_;
}  // namespace xpilot
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_CSLValidate_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_CSLValidate_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_CSLValidate_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_CSLValidate_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::xpilot::CslValidate, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::xpilot::CslValidate, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::xpilot::CslValidate, valid_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::xpilot::CslValidate)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::xpilot::_CslValidate_default_instance_),
};

const char descriptor_table_protodef_CSLValidate_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021CSLValidate.proto\022\006xpilot\"+\n\013CslValida"
  "te\022\022\n\005valid\030\001 \001(\010H\000\210\001\001B\010\n\006_validB\031\252\002\026Vat"
  "sim.Xpilot.Protobufb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_CSLValidate_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CSLValidate_2eproto = {
  false, false, 107, descriptor_table_protodef_CSLValidate_2eproto, "CSLValidate.proto", 
  &descriptor_table_CSLValidate_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_CSLValidate_2eproto::offsets,
  file_level_metadata_CSLValidate_2eproto, file_level_enum_descriptors_CSLValidate_2eproto, file_level_service_descriptors_CSLValidate_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_CSLValidate_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_CSLValidate_2eproto);
  return descriptor_table_CSLValidate_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_CSLValidate_2eproto(&descriptor_table_CSLValidate_2eproto);
namespace xpilot {

// ===================================================================

class CslValidate::_Internal {
 public:
  using HasBits = decltype(std::declval<CslValidate>()._has_bits_);
  static void set_has_valid(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

CslValidate::CslValidate(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:xpilot.CslValidate)
}
CslValidate::CslValidate(const CslValidate& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  valid_ = from.valid_;
  // @@protoc_insertion_point(copy_constructor:xpilot.CslValidate)
}

void CslValidate::SharedCtor() {
valid_ = false;
}

CslValidate::~CslValidate() {
  // @@protoc_insertion_point(destructor:xpilot.CslValidate)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void CslValidate::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void CslValidate::ArenaDtor(void* object) {
  CslValidate* _this = reinterpret_cast< CslValidate* >(object);
  (void)_this;
}
void CslValidate::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CslValidate::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void CslValidate::Clear() {
// @@protoc_insertion_point(message_clear_start:xpilot.CslValidate)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  valid_ = false;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CslValidate::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bool valid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_valid(&has_bits);
          valid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* CslValidate::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xpilot.CslValidate)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool valid = 1;
  if (_internal_has_valid()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_valid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xpilot.CslValidate)
  return target;
}

size_t CslValidate::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xpilot.CslValidate)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bool valid = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CslValidate::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:xpilot.CslValidate)
  GOOGLE_DCHECK_NE(&from, this);
  const CslValidate* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CslValidate>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:xpilot.CslValidate)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:xpilot.CslValidate)
    MergeFrom(*source);
  }
}

void CslValidate::MergeFrom(const CslValidate& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:xpilot.CslValidate)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_valid()) {
    _internal_set_valid(from._internal_valid());
  }
}

void CslValidate::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:xpilot.CslValidate)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CslValidate::CopyFrom(const CslValidate& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xpilot.CslValidate)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CslValidate::IsInitialized() const {
  return true;
}

void CslValidate::InternalSwap(CslValidate* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(valid_, other->valid_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CslValidate::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace xpilot
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::xpilot::CslValidate* Arena::CreateMaybeMessage< ::xpilot::CslValidate >(Arena* arena) {
  return Arena::CreateMessageInternal< ::xpilot::CslValidate >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
