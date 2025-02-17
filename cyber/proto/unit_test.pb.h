// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: unit_test.proto

#ifndef PROTOBUF_unit_5ftest_2eproto__INCLUDED
#define PROTOBUF_unit_5ftest_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_unit_5ftest_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsUnitTestImpl();
void InitDefaultsUnitTest();
void InitDefaultsChatterImpl();
void InitDefaultsChatter();
void InitDefaultsChatterBenchmarkImpl();
void InitDefaultsChatterBenchmark();
inline void InitDefaults() {
  InitDefaultsUnitTest();
  InitDefaultsChatter();
  InitDefaultsChatterBenchmark();
}
}  // namespace protobuf_unit_5ftest_2eproto
namespace apollo {
namespace cyber {
namespace proto {
class Chatter;
class ChatterDefaultTypeInternal;
extern ChatterDefaultTypeInternal _Chatter_default_instance_;
class ChatterBenchmark;
class ChatterBenchmarkDefaultTypeInternal;
extern ChatterBenchmarkDefaultTypeInternal _ChatterBenchmark_default_instance_;
class UnitTest;
class UnitTestDefaultTypeInternal;
extern UnitTestDefaultTypeInternal _UnitTest_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
namespace apollo {
namespace cyber {
namespace proto {

// ===================================================================

class UnitTest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.proto.UnitTest) */ {
 public:
  UnitTest();
  virtual ~UnitTest();

  UnitTest(const UnitTest& from);

  inline UnitTest& operator=(const UnitTest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  UnitTest(UnitTest&& from) noexcept
    : UnitTest() {
    *this = ::std::move(from);
  }

  inline UnitTest& operator=(UnitTest&& from) noexcept {
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
  static const UnitTest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UnitTest* internal_default_instance() {
    return reinterpret_cast<const UnitTest*>(
               &_UnitTest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(UnitTest* other);
  friend void swap(UnitTest& a, UnitTest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline UnitTest* New() const PROTOBUF_FINAL { return New(NULL); }

  UnitTest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const UnitTest& from);
  void MergeFrom(const UnitTest& from);
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
  void InternalSwap(UnitTest* other);
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

  // optional string class_name = 1;
  bool has_class_name() const;
  void clear_class_name();
  static const int kClassNameFieldNumber = 1;
  const ::std::string& class_name() const;
  void set_class_name(const ::std::string& value);
  #if LANG_CXX11
  void set_class_name(::std::string&& value);
  #endif
  void set_class_name(const char* value);
  void set_class_name(const char* value, size_t size);
  ::std::string* mutable_class_name();
  ::std::string* release_class_name();
  void set_allocated_class_name(::std::string* class_name);

  // optional string case_name = 2;
  bool has_case_name() const;
  void clear_case_name();
  static const int kCaseNameFieldNumber = 2;
  const ::std::string& case_name() const;
  void set_case_name(const ::std::string& value);
  #if LANG_CXX11
  void set_case_name(::std::string&& value);
  #endif
  void set_case_name(const char* value);
  void set_case_name(const char* value, size_t size);
  ::std::string* mutable_case_name();
  ::std::string* release_case_name();
  void set_allocated_case_name(::std::string* case_name);

  // @@protoc_insertion_point(class_scope:apollo.cyber.proto.UnitTest)
 private:
  void set_has_class_name();
  void clear_has_class_name();
  void set_has_case_name();
  void clear_has_case_name();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr class_name_;
  ::google::protobuf::internal::ArenaStringPtr case_name_;
  friend struct ::protobuf_unit_5ftest_2eproto::TableStruct;
  friend void ::protobuf_unit_5ftest_2eproto::InitDefaultsUnitTestImpl();
};
// -------------------------------------------------------------------

class Chatter : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.proto.Chatter) */ {
 public:
  Chatter();
  virtual ~Chatter();

  Chatter(const Chatter& from);

  inline Chatter& operator=(const Chatter& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Chatter(Chatter&& from) noexcept
    : Chatter() {
    *this = ::std::move(from);
  }

  inline Chatter& operator=(Chatter&& from) noexcept {
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
  static const Chatter& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Chatter* internal_default_instance() {
    return reinterpret_cast<const Chatter*>(
               &_Chatter_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Chatter* other);
  friend void swap(Chatter& a, Chatter& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Chatter* New() const PROTOBUF_FINAL { return New(NULL); }

  Chatter* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Chatter& from);
  void MergeFrom(const Chatter& from);
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
  void InternalSwap(Chatter* other);
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

  // optional bytes content = 4;
  bool has_content() const;
  void clear_content();
  static const int kContentFieldNumber = 4;
  const ::std::string& content() const;
  void set_content(const ::std::string& value);
  #if LANG_CXX11
  void set_content(::std::string&& value);
  #endif
  void set_content(const char* value);
  void set_content(const void* value, size_t size);
  ::std::string* mutable_content();
  ::std::string* release_content();
  void set_allocated_content(::std::string* content);

  // optional uint64 timestamp = 1;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  ::google::protobuf::uint64 timestamp() const;
  void set_timestamp(::google::protobuf::uint64 value);

  // optional uint64 lidar_timestamp = 2;
  bool has_lidar_timestamp() const;
  void clear_lidar_timestamp();
  static const int kLidarTimestampFieldNumber = 2;
  ::google::protobuf::uint64 lidar_timestamp() const;
  void set_lidar_timestamp(::google::protobuf::uint64 value);

  // optional uint64 seq = 3;
  bool has_seq() const;
  void clear_seq();
  static const int kSeqFieldNumber = 3;
  ::google::protobuf::uint64 seq() const;
  void set_seq(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:apollo.cyber.proto.Chatter)
 private:
  void set_has_timestamp();
  void clear_has_timestamp();
  void set_has_lidar_timestamp();
  void clear_has_lidar_timestamp();
  void set_has_seq();
  void clear_has_seq();
  void set_has_content();
  void clear_has_content();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr content_;
  ::google::protobuf::uint64 timestamp_;
  ::google::protobuf::uint64 lidar_timestamp_;
  ::google::protobuf::uint64 seq_;
  friend struct ::protobuf_unit_5ftest_2eproto::TableStruct;
  friend void ::protobuf_unit_5ftest_2eproto::InitDefaultsChatterImpl();
};
// -------------------------------------------------------------------

class ChatterBenchmark : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.proto.ChatterBenchmark) */ {
 public:
  ChatterBenchmark();
  virtual ~ChatterBenchmark();

  ChatterBenchmark(const ChatterBenchmark& from);

  inline ChatterBenchmark& operator=(const ChatterBenchmark& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ChatterBenchmark(ChatterBenchmark&& from) noexcept
    : ChatterBenchmark() {
    *this = ::std::move(from);
  }

  inline ChatterBenchmark& operator=(ChatterBenchmark&& from) noexcept {
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
  static const ChatterBenchmark& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ChatterBenchmark* internal_default_instance() {
    return reinterpret_cast<const ChatterBenchmark*>(
               &_ChatterBenchmark_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(ChatterBenchmark* other);
  friend void swap(ChatterBenchmark& a, ChatterBenchmark& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ChatterBenchmark* New() const PROTOBUF_FINAL { return New(NULL); }

  ChatterBenchmark* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ChatterBenchmark& from);
  void MergeFrom(const ChatterBenchmark& from);
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
  void InternalSwap(ChatterBenchmark* other);
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

  // optional string content = 3;
  bool has_content() const;
  void clear_content();
  static const int kContentFieldNumber = 3;
  const ::std::string& content() const;
  void set_content(const ::std::string& value);
  #if LANG_CXX11
  void set_content(::std::string&& value);
  #endif
  void set_content(const char* value);
  void set_content(const char* value, size_t size);
  ::std::string* mutable_content();
  ::std::string* release_content();
  void set_allocated_content(::std::string* content);

  // optional uint64 stamp = 1;
  bool has_stamp() const;
  void clear_stamp();
  static const int kStampFieldNumber = 1;
  ::google::protobuf::uint64 stamp() const;
  void set_stamp(::google::protobuf::uint64 value);

  // optional uint64 seq = 2;
  bool has_seq() const;
  void clear_seq();
  static const int kSeqFieldNumber = 2;
  ::google::protobuf::uint64 seq() const;
  void set_seq(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:apollo.cyber.proto.ChatterBenchmark)
 private:
  void set_has_stamp();
  void clear_has_stamp();
  void set_has_seq();
  void clear_has_seq();
  void set_has_content();
  void clear_has_content();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr content_;
  ::google::protobuf::uint64 stamp_;
  ::google::protobuf::uint64 seq_;
  friend struct ::protobuf_unit_5ftest_2eproto::TableStruct;
  friend void ::protobuf_unit_5ftest_2eproto::InitDefaultsChatterBenchmarkImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// UnitTest

// optional string class_name = 1;
inline bool UnitTest::has_class_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UnitTest::set_has_class_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UnitTest::clear_has_class_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UnitTest::clear_class_name() {
  class_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_class_name();
}
inline const ::std::string& UnitTest::class_name() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.UnitTest.class_name)
  return class_name_.GetNoArena();
}
inline void UnitTest::set_class_name(const ::std::string& value) {
  set_has_class_name();
  class_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.UnitTest.class_name)
}
#if LANG_CXX11
inline void UnitTest::set_class_name(::std::string&& value) {
  set_has_class_name();
  class_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.cyber.proto.UnitTest.class_name)
}
#endif
inline void UnitTest::set_class_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_class_name();
  class_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.cyber.proto.UnitTest.class_name)
}
inline void UnitTest::set_class_name(const char* value, size_t size) {
  set_has_class_name();
  class_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.cyber.proto.UnitTest.class_name)
}
inline ::std::string* UnitTest::mutable_class_name() {
  set_has_class_name();
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.UnitTest.class_name)
  return class_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UnitTest::release_class_name() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.UnitTest.class_name)
  clear_has_class_name();
  return class_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UnitTest::set_allocated_class_name(::std::string* class_name) {
  if (class_name != NULL) {
    set_has_class_name();
  } else {
    clear_has_class_name();
  }
  class_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), class_name);
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.UnitTest.class_name)
}

// optional string case_name = 2;
inline bool UnitTest::has_case_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UnitTest::set_has_case_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UnitTest::clear_has_case_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UnitTest::clear_case_name() {
  case_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_case_name();
}
inline const ::std::string& UnitTest::case_name() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.UnitTest.case_name)
  return case_name_.GetNoArena();
}
inline void UnitTest::set_case_name(const ::std::string& value) {
  set_has_case_name();
  case_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.UnitTest.case_name)
}
#if LANG_CXX11
inline void UnitTest::set_case_name(::std::string&& value) {
  set_has_case_name();
  case_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.cyber.proto.UnitTest.case_name)
}
#endif
inline void UnitTest::set_case_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_case_name();
  case_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.cyber.proto.UnitTest.case_name)
}
inline void UnitTest::set_case_name(const char* value, size_t size) {
  set_has_case_name();
  case_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.cyber.proto.UnitTest.case_name)
}
inline ::std::string* UnitTest::mutable_case_name() {
  set_has_case_name();
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.UnitTest.case_name)
  return case_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UnitTest::release_case_name() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.UnitTest.case_name)
  clear_has_case_name();
  return case_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UnitTest::set_allocated_case_name(::std::string* case_name) {
  if (case_name != NULL) {
    set_has_case_name();
  } else {
    clear_has_case_name();
  }
  case_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), case_name);
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.UnitTest.case_name)
}

// -------------------------------------------------------------------

// Chatter

// optional uint64 timestamp = 1;
inline bool Chatter::has_timestamp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Chatter::set_has_timestamp() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Chatter::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Chatter::clear_timestamp() {
  timestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_timestamp();
}
inline ::google::protobuf::uint64 Chatter::timestamp() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.Chatter.timestamp)
  return timestamp_;
}
inline void Chatter::set_timestamp(::google::protobuf::uint64 value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.Chatter.timestamp)
}

// optional uint64 lidar_timestamp = 2;
inline bool Chatter::has_lidar_timestamp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Chatter::set_has_lidar_timestamp() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Chatter::clear_has_lidar_timestamp() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Chatter::clear_lidar_timestamp() {
  lidar_timestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_lidar_timestamp();
}
inline ::google::protobuf::uint64 Chatter::lidar_timestamp() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.Chatter.lidar_timestamp)
  return lidar_timestamp_;
}
inline void Chatter::set_lidar_timestamp(::google::protobuf::uint64 value) {
  set_has_lidar_timestamp();
  lidar_timestamp_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.Chatter.lidar_timestamp)
}

// optional uint64 seq = 3;
inline bool Chatter::has_seq() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Chatter::set_has_seq() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Chatter::clear_has_seq() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Chatter::clear_seq() {
  seq_ = GOOGLE_ULONGLONG(0);
  clear_has_seq();
}
inline ::google::protobuf::uint64 Chatter::seq() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.Chatter.seq)
  return seq_;
}
inline void Chatter::set_seq(::google::protobuf::uint64 value) {
  set_has_seq();
  seq_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.Chatter.seq)
}

// optional bytes content = 4;
inline bool Chatter::has_content() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Chatter::set_has_content() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Chatter::clear_has_content() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Chatter::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_content();
}
inline const ::std::string& Chatter::content() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.Chatter.content)
  return content_.GetNoArena();
}
inline void Chatter::set_content(const ::std::string& value) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.Chatter.content)
}
#if LANG_CXX11
inline void Chatter::set_content(::std::string&& value) {
  set_has_content();
  content_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.cyber.proto.Chatter.content)
}
#endif
inline void Chatter::set_content(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.cyber.proto.Chatter.content)
}
inline void Chatter::set_content(const void* value, size_t size) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.cyber.proto.Chatter.content)
}
inline ::std::string* Chatter::mutable_content() {
  set_has_content();
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.Chatter.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Chatter::release_content() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.Chatter.content)
  clear_has_content();
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Chatter::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    set_has_content();
  } else {
    clear_has_content();
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.Chatter.content)
}

// -------------------------------------------------------------------

// ChatterBenchmark

// optional uint64 stamp = 1;
inline bool ChatterBenchmark::has_stamp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ChatterBenchmark::set_has_stamp() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ChatterBenchmark::clear_has_stamp() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ChatterBenchmark::clear_stamp() {
  stamp_ = GOOGLE_ULONGLONG(0);
  clear_has_stamp();
}
inline ::google::protobuf::uint64 ChatterBenchmark::stamp() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChatterBenchmark.stamp)
  return stamp_;
}
inline void ChatterBenchmark::set_stamp(::google::protobuf::uint64 value) {
  set_has_stamp();
  stamp_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.ChatterBenchmark.stamp)
}

// optional uint64 seq = 2;
inline bool ChatterBenchmark::has_seq() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ChatterBenchmark::set_has_seq() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ChatterBenchmark::clear_has_seq() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ChatterBenchmark::clear_seq() {
  seq_ = GOOGLE_ULONGLONG(0);
  clear_has_seq();
}
inline ::google::protobuf::uint64 ChatterBenchmark::seq() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChatterBenchmark.seq)
  return seq_;
}
inline void ChatterBenchmark::set_seq(::google::protobuf::uint64 value) {
  set_has_seq();
  seq_ = value;
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.ChatterBenchmark.seq)
}

// optional string content = 3;
inline bool ChatterBenchmark::has_content() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ChatterBenchmark::set_has_content() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ChatterBenchmark::clear_has_content() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ChatterBenchmark::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_content();
}
inline const ::std::string& ChatterBenchmark::content() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChatterBenchmark.content)
  return content_.GetNoArena();
}
inline void ChatterBenchmark::set_content(const ::std::string& value) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.ChatterBenchmark.content)
}
#if LANG_CXX11
inline void ChatterBenchmark::set_content(::std::string&& value) {
  set_has_content();
  content_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:apollo.cyber.proto.ChatterBenchmark.content)
}
#endif
inline void ChatterBenchmark::set_content(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.cyber.proto.ChatterBenchmark.content)
}
inline void ChatterBenchmark::set_content(const char* value, size_t size) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.cyber.proto.ChatterBenchmark.content)
}
inline ::std::string* ChatterBenchmark::mutable_content() {
  set_has_content();
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.ChatterBenchmark.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ChatterBenchmark::release_content() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.ChatterBenchmark.content)
  clear_has_content();
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ChatterBenchmark::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    set_has_content();
  } else {
    clear_has_content();
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.ChatterBenchmark.content)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cyber
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_unit_5ftest_2eproto__INCLUDED
