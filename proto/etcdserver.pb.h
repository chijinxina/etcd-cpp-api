// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: etcdserver.proto

#ifndef PROTOBUF_INCLUDED_etcdserver_2eproto
#define PROTOBUF_INCLUDED_etcdserver_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_etcdserver_2eproto 

namespace protobuf_etcdserver_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_etcdserver_2eproto
namespace etcdserverpb {
class Metadata;
class MetadataDefaultTypeInternal;
extern MetadataDefaultTypeInternal _Metadata_default_instance_;
class Request;
class RequestDefaultTypeInternal;
extern RequestDefaultTypeInternal _Request_default_instance_;
}  // namespace etcdserverpb
namespace google {
namespace protobuf {
template<> ::etcdserverpb::Metadata* Arena::CreateMaybeMessage<::etcdserverpb::Metadata>(Arena*);
template<> ::etcdserverpb::Request* Arena::CreateMaybeMessage<::etcdserverpb::Request>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace etcdserverpb {

// ===================================================================

class Request : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:etcdserverpb.Request) */ {
 public:
  Request();
  virtual ~Request();

  Request(const Request& from);

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Request(Request&& from) noexcept
    : Request() {
    *this = ::std::move(from);
  }

  inline Request& operator=(Request&& from) noexcept {
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
  static const Request& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Request* internal_default_instance() {
    return reinterpret_cast<const Request*>(
               &_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Request* other);
  friend void swap(Request& a, Request& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Request* New() const final {
    return CreateMaybeMessage<Request>(NULL);
  }

  Request* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Request>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Request& from);
  void MergeFrom(const Request& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Request* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string Method = 2;
  bool has_method() const;
  void clear_method();
  static const int kMethodFieldNumber = 2;
  const ::std::string& method() const;
  void set_method(const ::std::string& value);
  #if LANG_CXX11
  void set_method(::std::string&& value);
  #endif
  void set_method(const char* value);
  void set_method(const char* value, size_t size);
  ::std::string* mutable_method();
  ::std::string* release_method();
  void set_allocated_method(::std::string* method);

  // optional string Path = 3;
  bool has_path() const;
  void clear_path();
  static const int kPathFieldNumber = 3;
  const ::std::string& path() const;
  void set_path(const ::std::string& value);
  #if LANG_CXX11
  void set_path(::std::string&& value);
  #endif
  void set_path(const char* value);
  void set_path(const char* value, size_t size);
  ::std::string* mutable_path();
  ::std::string* release_path();
  void set_allocated_path(::std::string* path);

  // optional string Val = 4;
  bool has_val() const;
  void clear_val();
  static const int kValFieldNumber = 4;
  const ::std::string& val() const;
  void set_val(const ::std::string& value);
  #if LANG_CXX11
  void set_val(::std::string&& value);
  #endif
  void set_val(const char* value);
  void set_val(const char* value, size_t size);
  ::std::string* mutable_val();
  ::std::string* release_val();
  void set_allocated_val(::std::string* val);

  // optional string PrevValue = 6;
  bool has_prevvalue() const;
  void clear_prevvalue();
  static const int kPrevValueFieldNumber = 6;
  const ::std::string& prevvalue() const;
  void set_prevvalue(const ::std::string& value);
  #if LANG_CXX11
  void set_prevvalue(::std::string&& value);
  #endif
  void set_prevvalue(const char* value);
  void set_prevvalue(const char* value, size_t size);
  ::std::string* mutable_prevvalue();
  ::std::string* release_prevvalue();
  void set_allocated_prevvalue(::std::string* prevvalue);

  // optional uint64 ID = 1;
  bool has_id() const;
  void clear_id();
  static const int kIDFieldNumber = 1;
  ::google::protobuf::uint64 id() const;
  void set_id(::google::protobuf::uint64 value);

  // optional uint64 PrevIndex = 7;
  bool has_previndex() const;
  void clear_previndex();
  static const int kPrevIndexFieldNumber = 7;
  ::google::protobuf::uint64 previndex() const;
  void set_previndex(::google::protobuf::uint64 value);

  // optional int64 Expiration = 9;
  bool has_expiration() const;
  void clear_expiration();
  static const int kExpirationFieldNumber = 9;
  ::google::protobuf::int64 expiration() const;
  void set_expiration(::google::protobuf::int64 value);

  // optional uint64 Since = 11;
  bool has_since() const;
  void clear_since();
  static const int kSinceFieldNumber = 11;
  ::google::protobuf::uint64 since() const;
  void set_since(::google::protobuf::uint64 value);

  // optional bool Dir = 5;
  bool has_dir() const;
  void clear_dir();
  static const int kDirFieldNumber = 5;
  bool dir() const;
  void set_dir(bool value);

  // optional bool PrevExist = 8;
  bool has_prevexist() const;
  void clear_prevexist();
  static const int kPrevExistFieldNumber = 8;
  bool prevexist() const;
  void set_prevexist(bool value);

  // optional bool Wait = 10;
  bool has_wait() const;
  void clear_wait();
  static const int kWaitFieldNumber = 10;
  bool wait() const;
  void set_wait(bool value);

  // optional bool Recursive = 12;
  bool has_recursive() const;
  void clear_recursive();
  static const int kRecursiveFieldNumber = 12;
  bool recursive() const;
  void set_recursive(bool value);

  // optional bool Sorted = 13;
  bool has_sorted() const;
  void clear_sorted();
  static const int kSortedFieldNumber = 13;
  bool sorted() const;
  void set_sorted(bool value);

  // optional bool Quorum = 14;
  bool has_quorum() const;
  void clear_quorum();
  static const int kQuorumFieldNumber = 14;
  bool quorum() const;
  void set_quorum(bool value);

  // optional bool Stream = 16;
  bool has_stream() const;
  void clear_stream();
  static const int kStreamFieldNumber = 16;
  bool stream() const;
  void set_stream(bool value);

  // optional bool Refresh = 17;
  bool has_refresh() const;
  void clear_refresh();
  static const int kRefreshFieldNumber = 17;
  bool refresh() const;
  void set_refresh(bool value);

  // optional int64 Time = 15;
  bool has_time() const;
  void clear_time();
  static const int kTimeFieldNumber = 15;
  ::google::protobuf::int64 time() const;
  void set_time(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:etcdserverpb.Request)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_method();
  void clear_has_method();
  void set_has_path();
  void clear_has_path();
  void set_has_val();
  void clear_has_val();
  void set_has_dir();
  void clear_has_dir();
  void set_has_prevvalue();
  void clear_has_prevvalue();
  void set_has_previndex();
  void clear_has_previndex();
  void set_has_prevexist();
  void clear_has_prevexist();
  void set_has_expiration();
  void clear_has_expiration();
  void set_has_wait();
  void clear_has_wait();
  void set_has_since();
  void clear_has_since();
  void set_has_recursive();
  void clear_has_recursive();
  void set_has_sorted();
  void clear_has_sorted();
  void set_has_quorum();
  void clear_has_quorum();
  void set_has_time();
  void clear_has_time();
  void set_has_stream();
  void clear_has_stream();
  void set_has_refresh();
  void clear_has_refresh();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr method_;
  ::google::protobuf::internal::ArenaStringPtr path_;
  ::google::protobuf::internal::ArenaStringPtr val_;
  ::google::protobuf::internal::ArenaStringPtr prevvalue_;
  ::google::protobuf::uint64 id_;
  ::google::protobuf::uint64 previndex_;
  ::google::protobuf::int64 expiration_;
  ::google::protobuf::uint64 since_;
  bool dir_;
  bool prevexist_;
  bool wait_;
  bool recursive_;
  bool sorted_;
  bool quorum_;
  bool stream_;
  bool refresh_;
  ::google::protobuf::int64 time_;
  friend struct ::protobuf_etcdserver_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Metadata : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:etcdserverpb.Metadata) */ {
 public:
  Metadata();
  virtual ~Metadata();

  Metadata(const Metadata& from);

  inline Metadata& operator=(const Metadata& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Metadata(Metadata&& from) noexcept
    : Metadata() {
    *this = ::std::move(from);
  }

  inline Metadata& operator=(Metadata&& from) noexcept {
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
  static const Metadata& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Metadata* internal_default_instance() {
    return reinterpret_cast<const Metadata*>(
               &_Metadata_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Metadata* other);
  friend void swap(Metadata& a, Metadata& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Metadata* New() const final {
    return CreateMaybeMessage<Metadata>(NULL);
  }

  Metadata* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Metadata>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Metadata& from);
  void MergeFrom(const Metadata& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Metadata* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint64 NodeID = 1;
  bool has_nodeid() const;
  void clear_nodeid();
  static const int kNodeIDFieldNumber = 1;
  ::google::protobuf::uint64 nodeid() const;
  void set_nodeid(::google::protobuf::uint64 value);

  // optional uint64 ClusterID = 2;
  bool has_clusterid() const;
  void clear_clusterid();
  static const int kClusterIDFieldNumber = 2;
  ::google::protobuf::uint64 clusterid() const;
  void set_clusterid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:etcdserverpb.Metadata)
 private:
  void set_has_nodeid();
  void clear_has_nodeid();
  void set_has_clusterid();
  void clear_has_clusterid();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint64 nodeid_;
  ::google::protobuf::uint64 clusterid_;
  friend struct ::protobuf_etcdserver_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Request

// optional uint64 ID = 1;
inline bool Request::has_id() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Request::set_has_id() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Request::clear_has_id() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Request::clear_id() {
  id_ = GOOGLE_ULONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::uint64 Request::id() const {
  // @@protoc_insertion_point(field_get:etcdserverpb.Request.ID)
  return id_;
}
inline void Request::set_id(::google::protobuf::uint64 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:etcdserverpb.Request.ID)
}

// optional string Method = 2;
inline bool Request::has_method() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Request::set_has_method() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Request::clear_has_method() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Request::clear_method() {
  method_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_method();
}
inline const ::std::string& Request::method() const {
  // @@protoc_insertion_point(field_get:etcdserverpb.Request.Method)
  return method_.GetNoArena();
}
inline void Request::set_method(const ::std::string& value) {
  set_has_method();
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:etcdserverpb.Request.Method)
}
#if LANG_CXX11
inline void Request::set_method(::std::string&& value) {
  set_has_method();
  method_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:etcdserverpb.Request.Method)
}
#endif
inline void Request::set_method(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_method();
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:etcdserverpb.Request.Method)
}
inline void Request::set_method(const char* value, size_t size) {
  set_has_method();
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:etcdserverpb.Request.Method)
}
inline ::std::string* Request::mutable_method() {
  set_has_method();
  // @@protoc_insertion_point(field_mutable:etcdserverpb.Request.Method)
  return method_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Request::release_method() {
  // @@protoc_insertion_point(field_release:etcdserverpb.Request.Method)
  if (!has_method()) {
    return NULL;
  }
  clear_has_method();
  return method_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_method(::std::string* method) {
  if (method != NULL) {
    set_has_method();
  } else {
    clear_has_method();
  }
  method_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), method);
  // @@protoc_insertion_point(field_set_allocated:etcdserverpb.Request.Method)
}

// optional string Path = 3;
inline bool Request::has_path() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Request::set_has_path() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Request::clear_has_path() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Request::clear_path() {
  path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_path();
}
inline const ::std::string& Request::path() const {
  // @@protoc_insertion_point(field_get:etcdserverpb.Request.Path)
  return path_.GetNoArena();
}
inline void Request::set_path(const ::std::string& value) {
  set_has_path();
  path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:etcdserverpb.Request.Path)
}
#if LANG_CXX11
inline void Request::set_path(::std::string&& value) {
  set_has_path();
  path_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:etcdserverpb.Request.Path)
}
#endif
inline void Request::set_path(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_path();
  path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:etcdserverpb.Request.Path)
}
inline void Request::set_path(const char* value, size_t size) {
  set_has_path();
  path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:etcdserverpb.Request.Path)
}
inline ::std::string* Request::mutable_path() {
  set_has_path();
  // @@protoc_insertion_point(field_mutable:etcdserverpb.Request.Path)
  return path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Request::release_path() {
  // @@protoc_insertion_point(field_release:etcdserverpb.Request.Path)
  if (!has_path()) {
    return NULL;
  }
  clear_has_path();
  return path_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_path(::std::string* path) {
  if (path != NULL) {
    set_has_path();
  } else {
    clear_has_path();
  }
  path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), path);
  // @@protoc_insertion_point(field_set_allocated:etcdserverpb.Request.Path)
}

// optional string Val = 4;
inline bool Request::has_val() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Request::set_has_val() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Request::clear_has_val() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Request::clear_val() {
  val_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_val();
}
inline const ::std::string& Request::val() const {
  // @@protoc_insertion_point(field_get:etcdserverpb.Request.Val)
  return val_.GetNoArena();
}
inline void Request::set_val(const ::std::string& value) {
  set_has_val();
  val_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:etcdserverpb.Request.Val)
}
#if LANG_CXX11
inline void Request::set_val(::std::string&& value) {
  set_has_val();
  val_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:etcdserverpb.Request.Val)
}
#endif
inline void Request::set_val(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_val();
  val_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:etcdserverpb.Request.Val)
}
inline void Request::set_val(const char* value, size_t size) {
  set_has_val();
  val_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:etcdserverpb.Request.Val)
}
inline ::std::string* Request::mutable_val() {
  set_has_val();
  // @@protoc_insertion_point(field_mutable:etcdserverpb.Request.Val)
  return val_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Request::release_val() {
  // @@protoc_insertion_point(field_release:etcdserverpb.Request.Val)
  if (!has_val()) {
    return NULL;
  }
  clear_has_val();
  return val_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_val(::std::string* val) {
  if (val != NULL) {
    set_has_val();
  } else {
    clear_has_val();
  }
  val_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), val);
  // @@protoc_insertion_point(field_set_allocated:etcdserverpb.Request.Val)
}

// optional bool Dir = 5;
inline bool Request::has_dir() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Request::set_has_dir() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Request::clear_has_dir() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Request::clear_dir() {
  dir_ = false;
  clear_has_dir();
}
inline bool Request::dir() const {
  // @@protoc_insertion_point(field_get:etcdserverpb.Request.Dir)
  return dir_;
}
inline void Request::set_dir(bool value) {
  set_has_dir();
  dir_ = value;
  // @@protoc_insertion_point(field_set:etcdserverpb.Request.Dir)
}

// optional string PrevValue = 6;
inline bool Request::has_prevvalue() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Request::set_has_prevvalue() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Request::clear_has_prevvalue() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Request::clear_prevvalue() {
  prevvalue_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_prevvalue();
}
inline const ::std::string& Request::prevvalue() const {
  // @@protoc_insertion_point(field_get:etcdserverpb.Request.PrevValue)
  return prevvalue_.GetNoArena();
}
inline void Request::set_prevvalue(const ::std::string& value) {
  set_has_prevvalue();
  prevvalue_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:etcdserverpb.Request.PrevValue)
}
#if LANG_CXX11
inline void Request::set_prevvalue(::std::string&& value) {
  set_has_prevvalue();
  prevvalue_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:etcdserverpb.Request.PrevValue)
}
#endif
inline void Request::set_prevvalue(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_prevvalue();
  prevvalue_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:etcdserverpb.Request.PrevValue)
}
inline void Request::set_prevvalue(const char* value, size_t size) {
  set_has_prevvalue();
  prevvalue_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:etcdserverpb.Request.PrevValue)
}
inline ::std::string* Request::mutable_prevvalue() {
  set_has_prevvalue();
  // @@protoc_insertion_point(field_mutable:etcdserverpb.Request.PrevValue)
  return prevvalue_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Request::release_prevvalue() {
  // @@protoc_insertion_point(field_release:etcdserverpb.Request.PrevValue)
  if (!has_prevvalue()) {
    return NULL;
  }
  clear_has_prevvalue();
  return prevvalue_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_prevvalue(::std::string* prevvalue) {
  if (prevvalue != NULL) {
    set_has_prevvalue();
  } else {
    clear_has_prevvalue();
  }
  prevvalue_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), prevvalue);
  // @@protoc_insertion_point(field_set_allocated:etcdserverpb.Request.PrevValue)
}

// optional uint64 PrevIndex = 7;
inline bool Request::has_previndex() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Request::set_has_previndex() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Request::clear_has_previndex() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Request::clear_previndex() {
  previndex_ = GOOGLE_ULONGLONG(0);
  clear_has_previndex();
}
inline ::google::protobuf::uint64 Request::previndex() const {
  // @@protoc_insertion_point(field_get:etcdserverpb.Request.PrevIndex)
  return previndex_;
}
inline void Request::set_previndex(::google::protobuf::uint64 value) {
  set_has_previndex();
  previndex_ = value;
  // @@protoc_insertion_point(field_set:etcdserverpb.Request.PrevIndex)
}

// optional bool PrevExist = 8;
inline bool Request::has_prevexist() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void Request::set_has_prevexist() {
  _has_bits_[0] |= 0x00000200u;
}
inline void Request::clear_has_prevexist() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void Request::clear_prevexist() {
  prevexist_ = false;
  clear_has_prevexist();
}
inline bool Request::prevexist() const {
  // @@protoc_insertion_point(field_get:etcdserverpb.Request.PrevExist)
  return prevexist_;
}
inline void Request::set_prevexist(bool value) {
  set_has_prevexist();
  prevexist_ = value;
  // @@protoc_insertion_point(field_set:etcdserverpb.Request.PrevExist)
}

// optional int64 Expiration = 9;
inline bool Request::has_expiration() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Request::set_has_expiration() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Request::clear_has_expiration() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Request::clear_expiration() {
  expiration_ = GOOGLE_LONGLONG(0);
  clear_has_expiration();
}
inline ::google::protobuf::int64 Request::expiration() const {
  // @@protoc_insertion_point(field_get:etcdserverpb.Request.Expiration)
  return expiration_;
}
inline void Request::set_expiration(::google::protobuf::int64 value) {
  set_has_expiration();
  expiration_ = value;
  // @@protoc_insertion_point(field_set:etcdserverpb.Request.Expiration)
}

// optional bool Wait = 10;
inline bool Request::has_wait() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void Request::set_has_wait() {
  _has_bits_[0] |= 0x00000400u;
}
inline void Request::clear_has_wait() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void Request::clear_wait() {
  wait_ = false;
  clear_has_wait();
}
inline bool Request::wait() const {
  // @@protoc_insertion_point(field_get:etcdserverpb.Request.Wait)
  return wait_;
}
inline void Request::set_wait(bool value) {
  set_has_wait();
  wait_ = value;
  // @@protoc_insertion_point(field_set:etcdserverpb.Request.Wait)
}

// optional uint64 Since = 11;
inline bool Request::has_since() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Request::set_has_since() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Request::clear_has_since() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Request::clear_since() {
  since_ = GOOGLE_ULONGLONG(0);
  clear_has_since();
}
inline ::google::protobuf::uint64 Request::since() const {
  // @@protoc_insertion_point(field_get:etcdserverpb.Request.Since)
  return since_;
}
inline void Request::set_since(::google::protobuf::uint64 value) {
  set_has_since();
  since_ = value;
  // @@protoc_insertion_point(field_set:etcdserverpb.Request.Since)
}

// optional bool Recursive = 12;
inline bool Request::has_recursive() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void Request::set_has_recursive() {
  _has_bits_[0] |= 0x00000800u;
}
inline void Request::clear_has_recursive() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void Request::clear_recursive() {
  recursive_ = false;
  clear_has_recursive();
}
inline bool Request::recursive() const {
  // @@protoc_insertion_point(field_get:etcdserverpb.Request.Recursive)
  return recursive_;
}
inline void Request::set_recursive(bool value) {
  set_has_recursive();
  recursive_ = value;
  // @@protoc_insertion_point(field_set:etcdserverpb.Request.Recursive)
}

// optional bool Sorted = 13;
inline bool Request::has_sorted() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void Request::set_has_sorted() {
  _has_bits_[0] |= 0x00001000u;
}
inline void Request::clear_has_sorted() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void Request::clear_sorted() {
  sorted_ = false;
  clear_has_sorted();
}
inline bool Request::sorted() const {
  // @@protoc_insertion_point(field_get:etcdserverpb.Request.Sorted)
  return sorted_;
}
inline void Request::set_sorted(bool value) {
  set_has_sorted();
  sorted_ = value;
  // @@protoc_insertion_point(field_set:etcdserverpb.Request.Sorted)
}

// optional bool Quorum = 14;
inline bool Request::has_quorum() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void Request::set_has_quorum() {
  _has_bits_[0] |= 0x00002000u;
}
inline void Request::clear_has_quorum() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void Request::clear_quorum() {
  quorum_ = false;
  clear_has_quorum();
}
inline bool Request::quorum() const {
  // @@protoc_insertion_point(field_get:etcdserverpb.Request.Quorum)
  return quorum_;
}
inline void Request::set_quorum(bool value) {
  set_has_quorum();
  quorum_ = value;
  // @@protoc_insertion_point(field_set:etcdserverpb.Request.Quorum)
}

// optional int64 Time = 15;
inline bool Request::has_time() const {
  return (_has_bits_[0] & 0x00010000u) != 0;
}
inline void Request::set_has_time() {
  _has_bits_[0] |= 0x00010000u;
}
inline void Request::clear_has_time() {
  _has_bits_[0] &= ~0x00010000u;
}
inline void Request::clear_time() {
  time_ = GOOGLE_LONGLONG(0);
  clear_has_time();
}
inline ::google::protobuf::int64 Request::time() const {
  // @@protoc_insertion_point(field_get:etcdserverpb.Request.Time)
  return time_;
}
inline void Request::set_time(::google::protobuf::int64 value) {
  set_has_time();
  time_ = value;
  // @@protoc_insertion_point(field_set:etcdserverpb.Request.Time)
}

// optional bool Stream = 16;
inline bool Request::has_stream() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void Request::set_has_stream() {
  _has_bits_[0] |= 0x00004000u;
}
inline void Request::clear_has_stream() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void Request::clear_stream() {
  stream_ = false;
  clear_has_stream();
}
inline bool Request::stream() const {
  // @@protoc_insertion_point(field_get:etcdserverpb.Request.Stream)
  return stream_;
}
inline void Request::set_stream(bool value) {
  set_has_stream();
  stream_ = value;
  // @@protoc_insertion_point(field_set:etcdserverpb.Request.Stream)
}

// optional bool Refresh = 17;
inline bool Request::has_refresh() const {
  return (_has_bits_[0] & 0x00008000u) != 0;
}
inline void Request::set_has_refresh() {
  _has_bits_[0] |= 0x00008000u;
}
inline void Request::clear_has_refresh() {
  _has_bits_[0] &= ~0x00008000u;
}
inline void Request::clear_refresh() {
  refresh_ = false;
  clear_has_refresh();
}
inline bool Request::refresh() const {
  // @@protoc_insertion_point(field_get:etcdserverpb.Request.Refresh)
  return refresh_;
}
inline void Request::set_refresh(bool value) {
  set_has_refresh();
  refresh_ = value;
  // @@protoc_insertion_point(field_set:etcdserverpb.Request.Refresh)
}

// -------------------------------------------------------------------

// Metadata

// optional uint64 NodeID = 1;
inline bool Metadata::has_nodeid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Metadata::set_has_nodeid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Metadata::clear_has_nodeid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Metadata::clear_nodeid() {
  nodeid_ = GOOGLE_ULONGLONG(0);
  clear_has_nodeid();
}
inline ::google::protobuf::uint64 Metadata::nodeid() const {
  // @@protoc_insertion_point(field_get:etcdserverpb.Metadata.NodeID)
  return nodeid_;
}
inline void Metadata::set_nodeid(::google::protobuf::uint64 value) {
  set_has_nodeid();
  nodeid_ = value;
  // @@protoc_insertion_point(field_set:etcdserverpb.Metadata.NodeID)
}

// optional uint64 ClusterID = 2;
inline bool Metadata::has_clusterid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Metadata::set_has_clusterid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Metadata::clear_has_clusterid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Metadata::clear_clusterid() {
  clusterid_ = GOOGLE_ULONGLONG(0);
  clear_has_clusterid();
}
inline ::google::protobuf::uint64 Metadata::clusterid() const {
  // @@protoc_insertion_point(field_get:etcdserverpb.Metadata.ClusterID)
  return clusterid_;
}
inline void Metadata::set_clusterid(::google::protobuf::uint64 value) {
  set_has_clusterid();
  clusterid_ = value;
  // @@protoc_insertion_point(field_set:etcdserverpb.Metadata.ClusterID)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace etcdserverpb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_etcdserver_2eproto
