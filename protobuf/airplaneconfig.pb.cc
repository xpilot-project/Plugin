// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AirplaneConfig.proto

#include "AirplaneConfig.pb.h"

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
constexpr AirplaneConfig_AirplaneConfigLights::AirplaneConfig_AirplaneConfigLights(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : strobe_lights_on_(false)
  , landing_lights_on_(false)
  , taxi_lights_on_(false)
  , beacon_lights_on_(false)
  , nav_lights_on_(false){}
struct AirplaneConfig_AirplaneConfigLightsDefaultTypeInternal {
  constexpr AirplaneConfig_AirplaneConfigLightsDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~AirplaneConfig_AirplaneConfigLightsDefaultTypeInternal() {}
  union {
    AirplaneConfig_AirplaneConfigLights _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT AirplaneConfig_AirplaneConfigLightsDefaultTypeInternal _AirplaneConfig_AirplaneConfigLights_default_instance_;
constexpr AirplaneConfig::AirplaneConfig(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : callsign_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , lights_(nullptr)
  , is_full_config_(false)
  , gear_down_(false)
  , engines_on_(false)
  , spoilers_deployed_(false)
  , flaps_(0)
  , reverse_thrust_(false)
  , on_ground_(false){}
struct AirplaneConfigDefaultTypeInternal {
  constexpr AirplaneConfigDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~AirplaneConfigDefaultTypeInternal() {}
  union {
    AirplaneConfig _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT AirplaneConfigDefaultTypeInternal _AirplaneConfig_default_instance_;
}  // namespace xpilot
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_AirplaneConfig_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_AirplaneConfig_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_AirplaneConfig_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_AirplaneConfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::xpilot::AirplaneConfig_AirplaneConfigLights, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::xpilot::AirplaneConfig_AirplaneConfigLights, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::xpilot::AirplaneConfig_AirplaneConfigLights, strobe_lights_on_),
  PROTOBUF_FIELD_OFFSET(::xpilot::AirplaneConfig_AirplaneConfigLights, landing_lights_on_),
  PROTOBUF_FIELD_OFFSET(::xpilot::AirplaneConfig_AirplaneConfigLights, taxi_lights_on_),
  PROTOBUF_FIELD_OFFSET(::xpilot::AirplaneConfig_AirplaneConfigLights, beacon_lights_on_),
  PROTOBUF_FIELD_OFFSET(::xpilot::AirplaneConfig_AirplaneConfigLights, nav_lights_on_),
  0,
  1,
  2,
  3,
  4,
  PROTOBUF_FIELD_OFFSET(::xpilot::AirplaneConfig, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::xpilot::AirplaneConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::xpilot::AirplaneConfig, callsign_),
  PROTOBUF_FIELD_OFFSET(::xpilot::AirplaneConfig, is_full_config_),
  PROTOBUF_FIELD_OFFSET(::xpilot::AirplaneConfig, lights_),
  PROTOBUF_FIELD_OFFSET(::xpilot::AirplaneConfig, gear_down_),
  PROTOBUF_FIELD_OFFSET(::xpilot::AirplaneConfig, flaps_),
  PROTOBUF_FIELD_OFFSET(::xpilot::AirplaneConfig, engines_on_),
  PROTOBUF_FIELD_OFFSET(::xpilot::AirplaneConfig, spoilers_deployed_),
  PROTOBUF_FIELD_OFFSET(::xpilot::AirplaneConfig, reverse_thrust_),
  PROTOBUF_FIELD_OFFSET(::xpilot::AirplaneConfig, on_ground_),
  0,
  2,
  1,
  3,
  6,
  4,
  5,
  7,
  8,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(::xpilot::AirplaneConfig_AirplaneConfigLights)},
  { 15, 29, sizeof(::xpilot::AirplaneConfig)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::xpilot::_AirplaneConfig_AirplaneConfigLights_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::xpilot::_AirplaneConfig_default_instance_),
};

const char descriptor_table_protodef_AirplaneConfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024AirplaneConfig.proto\022\006xpilot\"\276\005\n\016Airpl"
  "aneConfig\022\025\n\010callsign\030\001 \001(\tH\000\210\001\001\022\033\n\016is_f"
  "ull_config\030\002 \001(\010H\001\210\001\001\022@\n\006lights\030\003 \001(\0132+."
  "xpilot.AirplaneConfig.AirplaneConfigLigh"
  "tsH\002\210\001\001\022\026\n\tgear_down\030\004 \001(\010H\003\210\001\001\022\022\n\005flaps"
  "\030\005 \001(\002H\004\210\001\001\022\027\n\nengines_on\030\006 \001(\010H\005\210\001\001\022\036\n\021"
  "spoilers_deployed\030\007 \001(\010H\006\210\001\001\022\033\n\016reverse_"
  "thrust\030\010 \001(\010H\007\210\001\001\022\026\n\ton_ground\030\t \001(\010H\010\210\001"
  "\001\032\222\002\n\024AirplaneConfigLights\022\035\n\020strobe_lig"
  "hts_on\030\001 \001(\010H\000\210\001\001\022\036\n\021landing_lights_on\030\002"
  " \001(\010H\001\210\001\001\022\033\n\016taxi_lights_on\030\003 \001(\010H\002\210\001\001\022\035"
  "\n\020beacon_lights_on\030\004 \001(\010H\003\210\001\001\022\032\n\rnav_lig"
  "hts_on\030\005 \001(\010H\004\210\001\001B\023\n\021_strobe_lights_onB\024"
  "\n\022_landing_lights_onB\021\n\017_taxi_lights_onB"
  "\023\n\021_beacon_lights_onB\020\n\016_nav_lights_onB\013"
  "\n\t_callsignB\021\n\017_is_full_configB\t\n\007_light"
  "sB\014\n\n_gear_downB\010\n\006_flapsB\r\n\013_engines_on"
  "B\024\n\022_spoilers_deployedB\021\n\017_reverse_thrus"
  "tB\014\n\n_on_groundB\031\252\002\026Vatsim.Xpilot.Protob"
  "ufb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_AirplaneConfig_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AirplaneConfig_2eproto = {
  false, false, 770, descriptor_table_protodef_AirplaneConfig_2eproto, "AirplaneConfig.proto", 
  &descriptor_table_AirplaneConfig_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_AirplaneConfig_2eproto::offsets,
  file_level_metadata_AirplaneConfig_2eproto, file_level_enum_descriptors_AirplaneConfig_2eproto, file_level_service_descriptors_AirplaneConfig_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_AirplaneConfig_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_AirplaneConfig_2eproto);
  return descriptor_table_AirplaneConfig_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_AirplaneConfig_2eproto(&descriptor_table_AirplaneConfig_2eproto);
namespace xpilot {

// ===================================================================

class AirplaneConfig_AirplaneConfigLights::_Internal {
 public:
  using HasBits = decltype(std::declval<AirplaneConfig_AirplaneConfigLights>()._has_bits_);
  static void set_has_strobe_lights_on(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_landing_lights_on(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_taxi_lights_on(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_beacon_lights_on(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_nav_lights_on(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

AirplaneConfig_AirplaneConfigLights::AirplaneConfig_AirplaneConfigLights(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:xpilot.AirplaneConfig.AirplaneConfigLights)
}
AirplaneConfig_AirplaneConfigLights::AirplaneConfig_AirplaneConfigLights(const AirplaneConfig_AirplaneConfigLights& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&strobe_lights_on_, &from.strobe_lights_on_,
    static_cast<size_t>(reinterpret_cast<char*>(&nav_lights_on_) -
    reinterpret_cast<char*>(&strobe_lights_on_)) + sizeof(nav_lights_on_));
  // @@protoc_insertion_point(copy_constructor:xpilot.AirplaneConfig.AirplaneConfigLights)
}

void AirplaneConfig_AirplaneConfigLights::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&strobe_lights_on_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&nav_lights_on_) -
    reinterpret_cast<char*>(&strobe_lights_on_)) + sizeof(nav_lights_on_));
}

AirplaneConfig_AirplaneConfigLights::~AirplaneConfig_AirplaneConfigLights() {
  // @@protoc_insertion_point(destructor:xpilot.AirplaneConfig.AirplaneConfigLights)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void AirplaneConfig_AirplaneConfigLights::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void AirplaneConfig_AirplaneConfigLights::ArenaDtor(void* object) {
  AirplaneConfig_AirplaneConfigLights* _this = reinterpret_cast< AirplaneConfig_AirplaneConfigLights* >(object);
  (void)_this;
}
void AirplaneConfig_AirplaneConfigLights::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AirplaneConfig_AirplaneConfigLights::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void AirplaneConfig_AirplaneConfigLights::Clear() {
// @@protoc_insertion_point(message_clear_start:xpilot.AirplaneConfig.AirplaneConfigLights)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    ::memset(&strobe_lights_on_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&nav_lights_on_) -
        reinterpret_cast<char*>(&strobe_lights_on_)) + sizeof(nav_lights_on_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AirplaneConfig_AirplaneConfigLights::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bool strobe_lights_on = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_strobe_lights_on(&has_bits);
          strobe_lights_on_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool landing_lights_on = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_landing_lights_on(&has_bits);
          landing_lights_on_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool taxi_lights_on = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_taxi_lights_on(&has_bits);
          taxi_lights_on_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool beacon_lights_on = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_beacon_lights_on(&has_bits);
          beacon_lights_on_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool nav_lights_on = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          _Internal::set_has_nav_lights_on(&has_bits);
          nav_lights_on_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* AirplaneConfig_AirplaneConfigLights::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xpilot.AirplaneConfig.AirplaneConfigLights)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool strobe_lights_on = 1;
  if (_internal_has_strobe_lights_on()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_strobe_lights_on(), target);
  }

  // bool landing_lights_on = 2;
  if (_internal_has_landing_lights_on()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->_internal_landing_lights_on(), target);
  }

  // bool taxi_lights_on = 3;
  if (_internal_has_taxi_lights_on()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_taxi_lights_on(), target);
  }

  // bool beacon_lights_on = 4;
  if (_internal_has_beacon_lights_on()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(4, this->_internal_beacon_lights_on(), target);
  }

  // bool nav_lights_on = 5;
  if (_internal_has_nav_lights_on()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(5, this->_internal_nav_lights_on(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xpilot.AirplaneConfig.AirplaneConfigLights)
  return target;
}

size_t AirplaneConfig_AirplaneConfigLights::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xpilot.AirplaneConfig.AirplaneConfigLights)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // bool strobe_lights_on = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 1;
    }

    // bool landing_lights_on = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 1;
    }

    // bool taxi_lights_on = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 1;
    }

    // bool beacon_lights_on = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 1;
    }

    // bool nav_lights_on = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 1;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AirplaneConfig_AirplaneConfigLights::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:xpilot.AirplaneConfig.AirplaneConfigLights)
  GOOGLE_DCHECK_NE(&from, this);
  const AirplaneConfig_AirplaneConfigLights* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<AirplaneConfig_AirplaneConfigLights>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:xpilot.AirplaneConfig.AirplaneConfigLights)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:xpilot.AirplaneConfig.AirplaneConfigLights)
    MergeFrom(*source);
  }
}

void AirplaneConfig_AirplaneConfigLights::MergeFrom(const AirplaneConfig_AirplaneConfigLights& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:xpilot.AirplaneConfig.AirplaneConfigLights)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      strobe_lights_on_ = from.strobe_lights_on_;
    }
    if (cached_has_bits & 0x00000002u) {
      landing_lights_on_ = from.landing_lights_on_;
    }
    if (cached_has_bits & 0x00000004u) {
      taxi_lights_on_ = from.taxi_lights_on_;
    }
    if (cached_has_bits & 0x00000008u) {
      beacon_lights_on_ = from.beacon_lights_on_;
    }
    if (cached_has_bits & 0x00000010u) {
      nav_lights_on_ = from.nav_lights_on_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void AirplaneConfig_AirplaneConfigLights::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:xpilot.AirplaneConfig.AirplaneConfigLights)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AirplaneConfig_AirplaneConfigLights::CopyFrom(const AirplaneConfig_AirplaneConfigLights& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xpilot.AirplaneConfig.AirplaneConfigLights)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AirplaneConfig_AirplaneConfigLights::IsInitialized() const {
  return true;
}

void AirplaneConfig_AirplaneConfigLights::InternalSwap(AirplaneConfig_AirplaneConfigLights* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(AirplaneConfig_AirplaneConfigLights, nav_lights_on_)
      + sizeof(AirplaneConfig_AirplaneConfigLights::nav_lights_on_)
      - PROTOBUF_FIELD_OFFSET(AirplaneConfig_AirplaneConfigLights, strobe_lights_on_)>(
          reinterpret_cast<char*>(&strobe_lights_on_),
          reinterpret_cast<char*>(&other->strobe_lights_on_));
}

::PROTOBUF_NAMESPACE_ID::Metadata AirplaneConfig_AirplaneConfigLights::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class AirplaneConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<AirplaneConfig>()._has_bits_);
  static void set_has_callsign(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_is_full_config(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::xpilot::AirplaneConfig_AirplaneConfigLights& lights(const AirplaneConfig* msg);
  static void set_has_lights(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_gear_down(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_flaps(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_engines_on(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_spoilers_deployed(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_reverse_thrust(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_on_ground(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
};

const ::xpilot::AirplaneConfig_AirplaneConfigLights&
AirplaneConfig::_Internal::lights(const AirplaneConfig* msg) {
  return *msg->lights_;
}
AirplaneConfig::AirplaneConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:xpilot.AirplaneConfig)
}
AirplaneConfig::AirplaneConfig(const AirplaneConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  callsign_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_callsign()) {
    callsign_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_callsign(), 
      GetArena());
  }
  if (from._internal_has_lights()) {
    lights_ = new ::xpilot::AirplaneConfig_AirplaneConfigLights(*from.lights_);
  } else {
    lights_ = nullptr;
  }
  ::memcpy(&is_full_config_, &from.is_full_config_,
    static_cast<size_t>(reinterpret_cast<char*>(&on_ground_) -
    reinterpret_cast<char*>(&is_full_config_)) + sizeof(on_ground_));
  // @@protoc_insertion_point(copy_constructor:xpilot.AirplaneConfig)
}

void AirplaneConfig::SharedCtor() {
callsign_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&lights_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&on_ground_) -
    reinterpret_cast<char*>(&lights_)) + sizeof(on_ground_));
}

AirplaneConfig::~AirplaneConfig() {
  // @@protoc_insertion_point(destructor:xpilot.AirplaneConfig)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void AirplaneConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  callsign_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete lights_;
}

void AirplaneConfig::ArenaDtor(void* object) {
  AirplaneConfig* _this = reinterpret_cast< AirplaneConfig* >(object);
  (void)_this;
}
void AirplaneConfig::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AirplaneConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void AirplaneConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:xpilot.AirplaneConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      callsign_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      if (GetArena() == nullptr && lights_ != nullptr) {
        delete lights_;
      }
      lights_ = nullptr;
    }
  }
  if (cached_has_bits & 0x000000fcu) {
    ::memset(&is_full_config_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&reverse_thrust_) -
        reinterpret_cast<char*>(&is_full_config_)) + sizeof(reverse_thrust_));
  }
  on_ground_ = false;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AirplaneConfig::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string callsign = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_callsign();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "xpilot.AirplaneConfig.callsign"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool is_full_config = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_is_full_config(&has_bits);
          is_full_config_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .xpilot.AirplaneConfig.AirplaneConfigLights lights = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_lights(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool gear_down = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_gear_down(&has_bits);
          gear_down_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // float flaps = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 45)) {
          _Internal::set_has_flaps(&has_bits);
          flaps_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // bool engines_on = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          _Internal::set_has_engines_on(&has_bits);
          engines_on_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool spoilers_deployed = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          _Internal::set_has_spoilers_deployed(&has_bits);
          spoilers_deployed_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool reverse_thrust = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          _Internal::set_has_reverse_thrust(&has_bits);
          reverse_thrust_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool on_ground = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 72)) {
          _Internal::set_has_on_ground(&has_bits);
          on_ground_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* AirplaneConfig::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xpilot.AirplaneConfig)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string callsign = 1;
  if (_internal_has_callsign()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_callsign().data(), static_cast<int>(this->_internal_callsign().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "xpilot.AirplaneConfig.callsign");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_callsign(), target);
  }

  // bool is_full_config = 2;
  if (_internal_has_is_full_config()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->_internal_is_full_config(), target);
  }

  // .xpilot.AirplaneConfig.AirplaneConfigLights lights = 3;
  if (_internal_has_lights()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::lights(this), target, stream);
  }

  // bool gear_down = 4;
  if (_internal_has_gear_down()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(4, this->_internal_gear_down(), target);
  }

  // float flaps = 5;
  if (_internal_has_flaps()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(5, this->_internal_flaps(), target);
  }

  // bool engines_on = 6;
  if (_internal_has_engines_on()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(6, this->_internal_engines_on(), target);
  }

  // bool spoilers_deployed = 7;
  if (_internal_has_spoilers_deployed()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(7, this->_internal_spoilers_deployed(), target);
  }

  // bool reverse_thrust = 8;
  if (_internal_has_reverse_thrust()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(8, this->_internal_reverse_thrust(), target);
  }

  // bool on_ground = 9;
  if (_internal_has_on_ground()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(9, this->_internal_on_ground(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xpilot.AirplaneConfig)
  return target;
}

size_t AirplaneConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xpilot.AirplaneConfig)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // string callsign = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_callsign());
    }

    // .xpilot.AirplaneConfig.AirplaneConfigLights lights = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *lights_);
    }

    // bool is_full_config = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 1;
    }

    // bool gear_down = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 1;
    }

    // bool engines_on = 6;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 1;
    }

    // bool spoilers_deployed = 7;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 1;
    }

    // float flaps = 5;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 + 4;
    }

    // bool reverse_thrust = 8;
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 + 1;
    }

  }
  // bool on_ground = 9;
  if (cached_has_bits & 0x00000100u) {
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

void AirplaneConfig::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:xpilot.AirplaneConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const AirplaneConfig* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<AirplaneConfig>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:xpilot.AirplaneConfig)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:xpilot.AirplaneConfig)
    MergeFrom(*source);
  }
}

void AirplaneConfig::MergeFrom(const AirplaneConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:xpilot.AirplaneConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_callsign(from._internal_callsign());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_lights()->::xpilot::AirplaneConfig_AirplaneConfigLights::MergeFrom(from._internal_lights());
    }
    if (cached_has_bits & 0x00000004u) {
      is_full_config_ = from.is_full_config_;
    }
    if (cached_has_bits & 0x00000008u) {
      gear_down_ = from.gear_down_;
    }
    if (cached_has_bits & 0x00000010u) {
      engines_on_ = from.engines_on_;
    }
    if (cached_has_bits & 0x00000020u) {
      spoilers_deployed_ = from.spoilers_deployed_;
    }
    if (cached_has_bits & 0x00000040u) {
      flaps_ = from.flaps_;
    }
    if (cached_has_bits & 0x00000080u) {
      reverse_thrust_ = from.reverse_thrust_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00000100u) {
    _internal_set_on_ground(from._internal_on_ground());
  }
}

void AirplaneConfig::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:xpilot.AirplaneConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AirplaneConfig::CopyFrom(const AirplaneConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xpilot.AirplaneConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AirplaneConfig::IsInitialized() const {
  return true;
}

void AirplaneConfig::InternalSwap(AirplaneConfig* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  callsign_.Swap(&other->callsign_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(AirplaneConfig, on_ground_)
      + sizeof(AirplaneConfig::on_ground_)
      - PROTOBUF_FIELD_OFFSET(AirplaneConfig, lights_)>(
          reinterpret_cast<char*>(&lights_),
          reinterpret_cast<char*>(&other->lights_));
}

::PROTOBUF_NAMESPACE_ID::Metadata AirplaneConfig::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace xpilot
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::xpilot::AirplaneConfig_AirplaneConfigLights* Arena::CreateMaybeMessage< ::xpilot::AirplaneConfig_AirplaneConfigLights >(Arena* arena) {
  return Arena::CreateMessageInternal< ::xpilot::AirplaneConfig_AirplaneConfigLights >(arena);
}
template<> PROTOBUF_NOINLINE ::xpilot::AirplaneConfig* Arena::CreateMaybeMessage< ::xpilot::AirplaneConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::xpilot::AirplaneConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
