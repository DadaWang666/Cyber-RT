// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: run_mode_conf.proto

#include "run_mode_conf.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace apollo {
namespace cyber {
namespace proto {
class RunModeConfDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RunModeConf>
      _instance;
} _RunModeConf_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
namespace protobuf_run_5fmode_5fconf_2eproto {
void InitDefaultsRunModeConfImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::apollo::cyber::proto::_RunModeConf_default_instance_;
    new (ptr) ::apollo::cyber::proto::RunModeConf();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::cyber::proto::RunModeConf::InitAsDefaultInstance();
}

void InitDefaultsRunModeConf() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsRunModeConfImpl);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::cyber::proto::RunModeConf, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::cyber::proto::RunModeConf, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::cyber::proto::RunModeConf, run_mode_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::apollo::cyber::proto::RunModeConf, clock_mode_),
  0,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::apollo::cyber::proto::RunModeConf)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::apollo::cyber::proto::_RunModeConf_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "run_mode_conf.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\023run_mode_conf.proto\022\022apollo.cyber.prot"
      "o\"\211\001\n\013RunModeConf\022;\n\010run_mode\030\001 \001(\0162\033.ap"
      "ollo.cyber.proto.RunMode:\014MODE_REALITY\022="
      "\n\nclock_mode\030\002 \001(\0162\035.apollo.cyber.proto."
      "ClockMode:\nMODE_CYBER*0\n\007RunMode\022\020\n\014MODE"
      "_REALITY\020\000\022\023\n\017MODE_SIMULATION\020\001**\n\tClock"
      "Mode\022\016\n\nMODE_CYBER\020\000\022\r\n\tMODE_MOCK\020\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 275);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "run_mode_conf.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_run_5fmode_5fconf_2eproto
namespace apollo {
namespace cyber {
namespace proto {
const ::google::protobuf::EnumDescriptor* RunMode_descriptor() {
  protobuf_run_5fmode_5fconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_run_5fmode_5fconf_2eproto::file_level_enum_descriptors[0];
}
bool RunMode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ClockMode_descriptor() {
  protobuf_run_5fmode_5fconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_run_5fmode_5fconf_2eproto::file_level_enum_descriptors[1];
}
bool ClockMode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void RunModeConf::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RunModeConf::kRunModeFieldNumber;
const int RunModeConf::kClockModeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RunModeConf::RunModeConf()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_run_5fmode_5fconf_2eproto::InitDefaultsRunModeConf();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.cyber.proto.RunModeConf)
}
RunModeConf::RunModeConf(const RunModeConf& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&run_mode_, &from.run_mode_,
    static_cast<size_t>(reinterpret_cast<char*>(&clock_mode_) -
    reinterpret_cast<char*>(&run_mode_)) + sizeof(clock_mode_));
  // @@protoc_insertion_point(copy_constructor:apollo.cyber.proto.RunModeConf)
}

void RunModeConf::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&run_mode_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&clock_mode_) -
      reinterpret_cast<char*>(&run_mode_)) + sizeof(clock_mode_));
}

RunModeConf::~RunModeConf() {
  // @@protoc_insertion_point(destructor:apollo.cyber.proto.RunModeConf)
  SharedDtor();
}

void RunModeConf::SharedDtor() {
}

void RunModeConf::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RunModeConf::descriptor() {
  ::protobuf_run_5fmode_5fconf_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_run_5fmode_5fconf_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RunModeConf& RunModeConf::default_instance() {
  ::protobuf_run_5fmode_5fconf_2eproto::InitDefaultsRunModeConf();
  return *internal_default_instance();
}

RunModeConf* RunModeConf::New(::google::protobuf::Arena* arena) const {
  RunModeConf* n = new RunModeConf;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RunModeConf::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.cyber.proto.RunModeConf)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&run_mode_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&clock_mode_) -
        reinterpret_cast<char*>(&run_mode_)) + sizeof(clock_mode_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool RunModeConf::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.cyber.proto.RunModeConf)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.cyber.proto.RunMode run_mode = 1 [default = MODE_REALITY];
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::apollo::cyber::proto::RunMode_IsValid(value)) {
            set_run_mode(static_cast< ::apollo::cyber::proto::RunMode >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                1, static_cast< ::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .apollo.cyber.proto.ClockMode clock_mode = 2 [default = MODE_CYBER];
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::apollo::cyber::proto::ClockMode_IsValid(value)) {
            set_clock_mode(static_cast< ::apollo::cyber::proto::ClockMode >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                2, static_cast< ::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.cyber.proto.RunModeConf)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.cyber.proto.RunModeConf)
  return false;
#undef DO_
}

void RunModeConf::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.cyber.proto.RunModeConf)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.cyber.proto.RunMode run_mode = 1 [default = MODE_REALITY];
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->run_mode(), output);
  }

  // optional .apollo.cyber.proto.ClockMode clock_mode = 2 [default = MODE_CYBER];
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->clock_mode(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.cyber.proto.RunModeConf)
}

::google::protobuf::uint8* RunModeConf::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:apollo.cyber.proto.RunModeConf)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.cyber.proto.RunMode run_mode = 1 [default = MODE_REALITY];
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->run_mode(), target);
  }

  // optional .apollo.cyber.proto.ClockMode clock_mode = 2 [default = MODE_CYBER];
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->clock_mode(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.cyber.proto.RunModeConf)
  return target;
}

size_t RunModeConf::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.cyber.proto.RunModeConf)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 3u) {
    // optional .apollo.cyber.proto.RunMode run_mode = 1 [default = MODE_REALITY];
    if (has_run_mode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->run_mode());
    }

    // optional .apollo.cyber.proto.ClockMode clock_mode = 2 [default = MODE_CYBER];
    if (has_clock_mode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->clock_mode());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RunModeConf::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.cyber.proto.RunModeConf)
  GOOGLE_DCHECK_NE(&from, this);
  const RunModeConf* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RunModeConf>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.cyber.proto.RunModeConf)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.cyber.proto.RunModeConf)
    MergeFrom(*source);
  }
}

void RunModeConf::MergeFrom(const RunModeConf& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.cyber.proto.RunModeConf)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      run_mode_ = from.run_mode_;
    }
    if (cached_has_bits & 0x00000002u) {
      clock_mode_ = from.clock_mode_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void RunModeConf::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.cyber.proto.RunModeConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RunModeConf::CopyFrom(const RunModeConf& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.cyber.proto.RunModeConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RunModeConf::IsInitialized() const {
  return true;
}

void RunModeConf::Swap(RunModeConf* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RunModeConf::InternalSwap(RunModeConf* other) {
  using std::swap;
  swap(run_mode_, other->run_mode_);
  swap(clock_mode_, other->clock_mode_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RunModeConf::GetMetadata() const {
  protobuf_run_5fmode_5fconf_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_run_5fmode_5fconf_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace cyber
}  // namespace apollo

// @@protoc_insertion_point(global_scope)