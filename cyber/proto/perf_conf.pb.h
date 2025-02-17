// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perf_conf.proto

#ifndef PROTOBUF_perf_5fconf_2eproto__INCLUDED
#define PROTOBUF_perf_5fconf_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_perf_5fconf_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsPerfConfImpl();
void InitDefaultsPerfConf();
inline void InitDefaults() {
  InitDefaultsPerfConf();
}
}  // namespace protobuf_perf_5fconf_2eproto
namespace apollo {
namespace cyber {
namespace proto {
class PerfConf;
class PerfConfDefaultTypeInternal;
extern PerfConfDefaultTypeInternal _PerfConf_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
namespace apollo {
namespace cyber {
namespace proto {

enum PerfType {
  SCHED = 1,
  TRANSPORT = 2,
  DATA_CACHE = 3,
  ALL = 4
};
bool PerfType_IsValid(int value);
const PerfType PerfType_MIN = SCHED;
const PerfType PerfType_MAX = ALL;
const int PerfType_ARRAYSIZE = PerfType_MAX + 1;

const ::google::protobuf::EnumDescriptor* PerfType_descriptor();
inline const ::std::string& PerfType_Name(PerfType value) {
  return ::google::protobuf::internal::NameOfEnum(
    PerfType_descriptor(), value);
}
inline bool PerfType_Parse(
    const ::std::string& name, PerfType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<PerfType>(
    PerfType_descriptor(), name, value);
}
// ===================================================================

class PerfConf : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.proto.PerfConf) */ {
 public:
  PerfConf();
  virtual ~PerfConf();

  PerfConf(const PerfConf& from);

  inline PerfConf& operator=(const PerfConf& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PerfConf(PerfConf&& from) noexcept
    : PerfConf() {
    *this = ::std::move(from);
  }

  inline PerfConf& operator=(PerfConf&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PerfConf& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PerfConf* internal_default_instance() {
    return reinterpret_cast<const PerfConf*>(
               &_PerfConf_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(PerfConf* other);
  friend void swap(PerfConf& a, PerfConf& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PerfConf* New() const PROTOBUF_FINAL { return New(NULL); }

  PerfConf* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const PerfConf& from);
  void MergeFrom(const PerfConf& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(PerfConf* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bool enable = 1 [default = false];
  bool has_enable() const;
  void clear_enable();
  static const int kEnableFieldNumber = 1;
  bool enable() const;
  void set_enable(bool value);

  // optional .apollo.cyber.proto.PerfType type = 2 [default = ALL];
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::apollo::cyber::proto::PerfType type() const;
  void set_type(::apollo::cyber::proto::PerfType value);

  // @@protoc_insertion_point(class_scope:apollo.cyber.proto.PerfConf)
 private:
  void set_has_enable();
  void clear_has_enable();
  void set_has_type();
  void clear_has_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  bool enable_;
  int type_;
  friend struct ::protobuf_perf_5fconf_2eproto::TableStruct;
  friend void ::protobuf_perf_5fconf_2eproto::InitDefaultsPerfConfImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PerfConf

// optional bool enable = 1 [default = false];
inline bool PerfConf::has_enable() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PerfConf::set_has_enable() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PerfConf::clear_has_enable() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PerfConf::clear_enable() {
  enable_ = false;
  clear_has_enable();
}
inline bool PerfConf::enable() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.PerfConf.enable)
  return enable_;
}
inline void PerfConf::set_enable(bool value) {
  set_has_enable();
  enable_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.PerfConf.enable)
}

// optional .apollo.cyber.proto.PerfType type = 2 [default = ALL];
inline bool PerfConf::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PerfConf::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PerfConf::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PerfConf::clear_type() {
  type_ = 4;
  clear_has_type();
}
inline ::apollo::cyber::proto::PerfType PerfConf::type() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.PerfConf.type)
  return static_cast< ::apollo::cyber::proto::PerfType >(type_);
}
inline void PerfConf::set_type(::apollo::cyber::proto::PerfType value) {
  assert(::apollo::cyber::proto::PerfType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.PerfConf.type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cyber
}  // namespace apollo

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::apollo::cyber::proto::PerfType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::cyber::proto::PerfType>() {
  return ::apollo::cyber::proto::PerfType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_perf_5fconf_2eproto__INCLUDED
