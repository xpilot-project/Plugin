// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RequestXplaneData.proto

#include "RequestXplaneData.pb.h"

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
constexpr RequestXplaneData::RequestXplaneData(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct RequestXplaneDataDefaultTypeInternal {
  constexpr RequestXplaneDataDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~RequestXplaneDataDefaultTypeInternal() {}
  union {
    RequestXplaneData _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT RequestXplaneDataDefaultTypeInternal _RequestXplaneData_default_instance_;
}  // namespace xpilot
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_RequestXplaneData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_RequestXplaneData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_RequestXplaneData_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_RequestXplaneData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::xpilot::RequestXplaneData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::xpilot::RequestXplaneData)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::xpilot::_RequestXplaneData_default_instance_),
};

const char descriptor_table_protodef_RequestXplaneData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027RequestXplaneData.proto\022\006xpilot\"\023\n\021Req"
  "uestXplaneDataB\031\252\002\026Vatsim.Xpilot.Protobu"
  "fb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_RequestXplaneData_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_RequestXplaneData_2eproto = {
  false, false, 89, descriptor_table_protodef_RequestXplaneData_2eproto, "RequestXplaneData.proto", 
  &descriptor_table_RequestXplaneData_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_RequestXplaneData_2eproto::offsets,
  file_level_metadata_RequestXplaneData_2eproto, file_level_enum_descriptors_RequestXplaneData_2eproto, file_level_service_descriptors_RequestXplaneData_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_RequestXplaneData_2eproto_getter() {
  return &descriptor_table_RequestXplaneData_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_RequestXplaneData_2eproto(&descriptor_table_RequestXplaneData_2eproto);
namespace xpilot {

// ===================================================================

class RequestXplaneData::_Internal {
 public:
};

RequestXplaneData::RequestXplaneData(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:xpilot.RequestXplaneData)
}
RequestXplaneData::RequestXplaneData(const RequestXplaneData& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:xpilot.RequestXplaneData)
}

void RequestXplaneData::SharedCtor() {
}

RequestXplaneData::~RequestXplaneData() {
  // @@protoc_insertion_point(destructor:xpilot.RequestXplaneData)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void RequestXplaneData::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void RequestXplaneData::ArenaDtor(void* object) {
  RequestXplaneData* _this = reinterpret_cast< RequestXplaneData* >(object);
  (void)_this;
}
void RequestXplaneData::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void RequestXplaneData::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void RequestXplaneData::Clear() {
// @@protoc_insertion_point(message_clear_start:xpilot.RequestXplaneData)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RequestXplaneData::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* RequestXplaneData::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xpilot.RequestXplaneData)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xpilot.RequestXplaneData)
  return target;
}

size_t RequestXplaneData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xpilot.RequestXplaneData)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RequestXplaneData::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:xpilot.RequestXplaneData)
  GOOGLE_DCHECK_NE(&from, this);
  const RequestXplaneData* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<RequestXplaneData>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:xpilot.RequestXplaneData)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:xpilot.RequestXplaneData)
    MergeFrom(*source);
  }
}

void RequestXplaneData::MergeFrom(const RequestXplaneData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:xpilot.RequestXplaneData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void RequestXplaneData::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:xpilot.RequestXplaneData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RequestXplaneData::CopyFrom(const RequestXplaneData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xpilot.RequestXplaneData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RequestXplaneData::IsInitialized() const {
  return true;
}

void RequestXplaneData::InternalSwap(RequestXplaneData* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata RequestXplaneData::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_RequestXplaneData_2eproto_getter, &descriptor_table_RequestXplaneData_2eproto_once,
      file_level_metadata_RequestXplaneData_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace xpilot
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::xpilot::RequestXplaneData* Arena::CreateMaybeMessage< ::xpilot::RequestXplaneData >(Arena* arena) {
  return Arena::CreateMessageInternal< ::xpilot::RequestXplaneData >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
