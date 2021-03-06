// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PositionUpdate.proto

#include "PositionUpdate.pb.h"

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
constexpr PositionUpdate::PositionUpdate(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : callsign_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , origin_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , destination_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , latitude_(0)
  , longitude_(0)
  , altitude_(0)
  , heading_(0)
  , pitch_(0)
  , bank_(0)
  , ground_speed_(0)
  , transponder_code_(0)
  , transponder_mode_c_(false){}
struct PositionUpdateDefaultTypeInternal {
  constexpr PositionUpdateDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~PositionUpdateDefaultTypeInternal() {}
  union {
    PositionUpdate _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PositionUpdateDefaultTypeInternal _PositionUpdate_default_instance_;
}  // namespace xpilot
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_PositionUpdate_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_PositionUpdate_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_PositionUpdate_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_PositionUpdate_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::xpilot::PositionUpdate, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::xpilot::PositionUpdate, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::xpilot::PositionUpdate, callsign_),
  PROTOBUF_FIELD_OFFSET(::xpilot::PositionUpdate, latitude_),
  PROTOBUF_FIELD_OFFSET(::xpilot::PositionUpdate, longitude_),
  PROTOBUF_FIELD_OFFSET(::xpilot::PositionUpdate, altitude_),
  PROTOBUF_FIELD_OFFSET(::xpilot::PositionUpdate, heading_),
  PROTOBUF_FIELD_OFFSET(::xpilot::PositionUpdate, pitch_),
  PROTOBUF_FIELD_OFFSET(::xpilot::PositionUpdate, bank_),
  PROTOBUF_FIELD_OFFSET(::xpilot::PositionUpdate, ground_speed_),
  PROTOBUF_FIELD_OFFSET(::xpilot::PositionUpdate, transponder_code_),
  PROTOBUF_FIELD_OFFSET(::xpilot::PositionUpdate, transponder_mode_c_),
  PROTOBUF_FIELD_OFFSET(::xpilot::PositionUpdate, origin_),
  PROTOBUF_FIELD_OFFSET(::xpilot::PositionUpdate, destination_),
  0,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  1,
  2,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 17, sizeof(::xpilot::PositionUpdate)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::xpilot::_PositionUpdate_default_instance_),
};

const char descriptor_table_protodef_PositionUpdate_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024PositionUpdate.proto\022\006xpilot\"\340\003\n\016Posit"
  "ionUpdate\022\025\n\010callsign\030\001 \001(\tH\000\210\001\001\022\025\n\010lati"
  "tude\030\002 \001(\001H\001\210\001\001\022\026\n\tlongitude\030\003 \001(\001H\002\210\001\001\022"
  "\025\n\010altitude\030\004 \001(\001H\003\210\001\001\022\024\n\007heading\030\005 \001(\001H"
  "\004\210\001\001\022\022\n\005pitch\030\006 \001(\001H\005\210\001\001\022\021\n\004bank\030\007 \001(\001H\006"
  "\210\001\001\022\031\n\014ground_speed\030\010 \001(\001H\007\210\001\001\022\035\n\020transp"
  "onder_code\030\t \001(\005H\010\210\001\001\022\037\n\022transponder_mod"
  "e_c\030\n \001(\010H\t\210\001\001\022\023\n\006origin\030\013 \001(\tH\n\210\001\001\022\030\n\013d"
  "estination\030\014 \001(\tH\013\210\001\001B\013\n\t_callsignB\013\n\t_l"
  "atitudeB\014\n\n_longitudeB\013\n\t_altitudeB\n\n\010_h"
  "eadingB\010\n\006_pitchB\007\n\005_bankB\017\n\r_ground_spe"
  "edB\023\n\021_transponder_codeB\025\n\023_transponder_"
  "mode_cB\t\n\007_originB\016\n\014_destinationB\031\252\002\026Va"
  "tsim.Xpilot.Protobufb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_PositionUpdate_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PositionUpdate_2eproto = {
  false, false, 548, descriptor_table_protodef_PositionUpdate_2eproto, "PositionUpdate.proto", 
  &descriptor_table_PositionUpdate_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_PositionUpdate_2eproto::offsets,
  file_level_metadata_PositionUpdate_2eproto, file_level_enum_descriptors_PositionUpdate_2eproto, file_level_service_descriptors_PositionUpdate_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_PositionUpdate_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_PositionUpdate_2eproto);
  return descriptor_table_PositionUpdate_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_PositionUpdate_2eproto(&descriptor_table_PositionUpdate_2eproto);
namespace xpilot {

// ===================================================================

class PositionUpdate::_Internal {
 public:
  using HasBits = decltype(std::declval<PositionUpdate>()._has_bits_);
  static void set_has_callsign(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_latitude(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_longitude(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_altitude(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_heading(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_pitch(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_bank(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static void set_has_ground_speed(HasBits* has_bits) {
    (*has_bits)[0] |= 512u;
  }
  static void set_has_transponder_code(HasBits* has_bits) {
    (*has_bits)[0] |= 1024u;
  }
  static void set_has_transponder_mode_c(HasBits* has_bits) {
    (*has_bits)[0] |= 2048u;
  }
  static void set_has_origin(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_destination(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

PositionUpdate::PositionUpdate(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:xpilot.PositionUpdate)
}
PositionUpdate::PositionUpdate(const PositionUpdate& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  callsign_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_callsign()) {
    callsign_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_callsign(), 
      GetArena());
  }
  origin_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_origin()) {
    origin_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_origin(), 
      GetArena());
  }
  destination_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_destination()) {
    destination_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_destination(), 
      GetArena());
  }
  ::memcpy(&latitude_, &from.latitude_,
    static_cast<size_t>(reinterpret_cast<char*>(&transponder_mode_c_) -
    reinterpret_cast<char*>(&latitude_)) + sizeof(transponder_mode_c_));
  // @@protoc_insertion_point(copy_constructor:xpilot.PositionUpdate)
}

void PositionUpdate::SharedCtor() {
callsign_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
origin_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
destination_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&latitude_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&transponder_mode_c_) -
    reinterpret_cast<char*>(&latitude_)) + sizeof(transponder_mode_c_));
}

PositionUpdate::~PositionUpdate() {
  // @@protoc_insertion_point(destructor:xpilot.PositionUpdate)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void PositionUpdate::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  callsign_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  origin_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  destination_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void PositionUpdate::ArenaDtor(void* object) {
  PositionUpdate* _this = reinterpret_cast< PositionUpdate* >(object);
  (void)_this;
}
void PositionUpdate::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void PositionUpdate::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void PositionUpdate::Clear() {
// @@protoc_insertion_point(message_clear_start:xpilot.PositionUpdate)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      callsign_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      origin_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      destination_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x000000f8u) {
    ::memset(&latitude_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&pitch_) -
        reinterpret_cast<char*>(&latitude_)) + sizeof(pitch_));
  }
  if (cached_has_bits & 0x00000f00u) {
    ::memset(&bank_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&transponder_mode_c_) -
        reinterpret_cast<char*>(&bank_)) + sizeof(transponder_mode_c_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PositionUpdate::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "xpilot.PositionUpdate.callsign"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // double latitude = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          _Internal::set_has_latitude(&has_bits);
          latitude_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double longitude = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          _Internal::set_has_longitude(&has_bits);
          longitude_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double altitude = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 33)) {
          _Internal::set_has_altitude(&has_bits);
          altitude_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double heading = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41)) {
          _Internal::set_has_heading(&has_bits);
          heading_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double pitch = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 49)) {
          _Internal::set_has_pitch(&has_bits);
          pitch_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double bank = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 57)) {
          _Internal::set_has_bank(&has_bits);
          bank_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double ground_speed = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 65)) {
          _Internal::set_has_ground_speed(&has_bits);
          ground_speed_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // int32 transponder_code = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 72)) {
          _Internal::set_has_transponder_code(&has_bits);
          transponder_code_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool transponder_mode_c = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 80)) {
          _Internal::set_has_transponder_mode_c(&has_bits);
          transponder_mode_c_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string origin = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 90)) {
          auto str = _internal_mutable_origin();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "xpilot.PositionUpdate.origin"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string destination = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 98)) {
          auto str = _internal_mutable_destination();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "xpilot.PositionUpdate.destination"));
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

::PROTOBUF_NAMESPACE_ID::uint8* PositionUpdate::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xpilot.PositionUpdate)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string callsign = 1;
  if (_internal_has_callsign()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_callsign().data(), static_cast<int>(this->_internal_callsign().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "xpilot.PositionUpdate.callsign");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_callsign(), target);
  }

  // double latitude = 2;
  if (_internal_has_latitude()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_latitude(), target);
  }

  // double longitude = 3;
  if (_internal_has_longitude()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_longitude(), target);
  }

  // double altitude = 4;
  if (_internal_has_altitude()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->_internal_altitude(), target);
  }

  // double heading = 5;
  if (_internal_has_heading()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->_internal_heading(), target);
  }

  // double pitch = 6;
  if (_internal_has_pitch()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(6, this->_internal_pitch(), target);
  }

  // double bank = 7;
  if (_internal_has_bank()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(7, this->_internal_bank(), target);
  }

  // double ground_speed = 8;
  if (_internal_has_ground_speed()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(8, this->_internal_ground_speed(), target);
  }

  // int32 transponder_code = 9;
  if (_internal_has_transponder_code()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(9, this->_internal_transponder_code(), target);
  }

  // bool transponder_mode_c = 10;
  if (_internal_has_transponder_mode_c()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(10, this->_internal_transponder_mode_c(), target);
  }

  // string origin = 11;
  if (_internal_has_origin()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_origin().data(), static_cast<int>(this->_internal_origin().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "xpilot.PositionUpdate.origin");
    target = stream->WriteStringMaybeAliased(
        11, this->_internal_origin(), target);
  }

  // string destination = 12;
  if (_internal_has_destination()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_destination().data(), static_cast<int>(this->_internal_destination().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "xpilot.PositionUpdate.destination");
    target = stream->WriteStringMaybeAliased(
        12, this->_internal_destination(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xpilot.PositionUpdate)
  return target;
}

size_t PositionUpdate::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xpilot.PositionUpdate)
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

    // string origin = 11;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_origin());
    }

    // string destination = 12;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_destination());
    }

    // double latitude = 2;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 8;
    }

    // double longitude = 3;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 8;
    }

    // double altitude = 4;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 8;
    }

    // double heading = 5;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 + 8;
    }

    // double pitch = 6;
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 + 8;
    }

  }
  if (cached_has_bits & 0x00000f00u) {
    // double bank = 7;
    if (cached_has_bits & 0x00000100u) {
      total_size += 1 + 8;
    }

    // double ground_speed = 8;
    if (cached_has_bits & 0x00000200u) {
      total_size += 1 + 8;
    }

    // int32 transponder_code = 9;
    if (cached_has_bits & 0x00000400u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_transponder_code());
    }

    // bool transponder_mode_c = 10;
    if (cached_has_bits & 0x00000800u) {
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

void PositionUpdate::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:xpilot.PositionUpdate)
  GOOGLE_DCHECK_NE(&from, this);
  const PositionUpdate* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PositionUpdate>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:xpilot.PositionUpdate)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:xpilot.PositionUpdate)
    MergeFrom(*source);
  }
}

void PositionUpdate::MergeFrom(const PositionUpdate& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:xpilot.PositionUpdate)
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
      _internal_set_origin(from._internal_origin());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_set_destination(from._internal_destination());
    }
    if (cached_has_bits & 0x00000008u) {
      latitude_ = from.latitude_;
    }
    if (cached_has_bits & 0x00000010u) {
      longitude_ = from.longitude_;
    }
    if (cached_has_bits & 0x00000020u) {
      altitude_ = from.altitude_;
    }
    if (cached_has_bits & 0x00000040u) {
      heading_ = from.heading_;
    }
    if (cached_has_bits & 0x00000080u) {
      pitch_ = from.pitch_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00000f00u) {
    if (cached_has_bits & 0x00000100u) {
      bank_ = from.bank_;
    }
    if (cached_has_bits & 0x00000200u) {
      ground_speed_ = from.ground_speed_;
    }
    if (cached_has_bits & 0x00000400u) {
      transponder_code_ = from.transponder_code_;
    }
    if (cached_has_bits & 0x00000800u) {
      transponder_mode_c_ = from.transponder_mode_c_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void PositionUpdate::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:xpilot.PositionUpdate)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PositionUpdate::CopyFrom(const PositionUpdate& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xpilot.PositionUpdate)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PositionUpdate::IsInitialized() const {
  return true;
}

void PositionUpdate::InternalSwap(PositionUpdate* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  callsign_.Swap(&other->callsign_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  origin_.Swap(&other->origin_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  destination_.Swap(&other->destination_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(PositionUpdate, transponder_mode_c_)
      + sizeof(PositionUpdate::transponder_mode_c_)
      - PROTOBUF_FIELD_OFFSET(PositionUpdate, latitude_)>(
          reinterpret_cast<char*>(&latitude_),
          reinterpret_cast<char*>(&other->latitude_));
}

::PROTOBUF_NAMESPACE_ID::Metadata PositionUpdate::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace xpilot
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::xpilot::PositionUpdate* Arena::CreateMaybeMessage< ::xpilot::PositionUpdate >(Arena* arena) {
  return Arena::CreateMessageInternal< ::xpilot::PositionUpdate >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
