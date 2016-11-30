// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#ifndef PROTOBUF_test_2eproto__INCLUDED
#define PROTOBUF_test_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace mutate {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_test_2eproto();
void protobuf_AssignDesc_test_2eproto();
void protobuf_ShutdownFile_test_2eproto();

class Code;
class Edge;
class Node;

// ===================================================================

class Node : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mutate.Node) */ {
 public:
  Node();
  virtual ~Node();

  Node(const Node& from);

  inline Node& operator=(const Node& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Node& default_instance();

  void Swap(Node* other);

  // implements Message ----------------------------------------------

  inline Node* New() const { return New(NULL); }

  Node* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Node& from);
  void MergeFrom(const Node& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Node* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int64 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int64 id() const;
  void set_id(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:mutate.Node)
 private:
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 id_;
  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static Node* default_instance_;
};
// -------------------------------------------------------------------

class Edge : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mutate.Edge) */ {
 public:
  Edge();
  virtual ~Edge();

  Edge(const Edge& from);

  inline Edge& operator=(const Edge& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Edge& default_instance();

  void Swap(Edge* other);

  // implements Message ----------------------------------------------

  inline Edge* New() const { return New(NULL); }

  Edge* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Edge& from);
  void MergeFrom(const Edge& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Edge* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int64 id_a = 1;
  bool has_id_a() const;
  void clear_id_a();
  static const int kIdAFieldNumber = 1;
  ::google::protobuf::int64 id_a() const;
  void set_id_a(::google::protobuf::int64 value);

  // required int64 id_b = 2;
  bool has_id_b() const;
  void clear_id_b();
  static const int kIdBFieldNumber = 2;
  ::google::protobuf::int64 id_b() const;
  void set_id_b(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:mutate.Edge)
 private:
  inline void set_has_id_a();
  inline void clear_has_id_a();
  inline void set_has_id_b();
  inline void clear_has_id_b();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 id_a_;
  ::google::protobuf::int64 id_b_;
  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static Edge* default_instance_;
};
// -------------------------------------------------------------------

class Code : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mutate.Code) */ {
 public:
  Code();
  virtual ~Code();

  Code(const Code& from);

  inline Code& operator=(const Code& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Code& default_instance();

  void Swap(Code* other);

  // implements Message ----------------------------------------------

  inline Code* New() const { return New(NULL); }

  Code* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Code& from);
  void MergeFrom(const Code& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Code* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 code = 200;
  bool has_code() const;
  void clear_code();
  static const int kCodeFieldNumber = 200;
  ::google::protobuf::int32 code() const;
  void set_code(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:mutate.Code)
 private:
  inline void set_has_code();
  inline void clear_has_code();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 code_;
  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static Code* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Node

// required int64 id = 1;
inline bool Node::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Node::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Node::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Node::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::int64 Node::id() const {
  // @@protoc_insertion_point(field_get:mutate.Node.id)
  return id_;
}
inline void Node::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:mutate.Node.id)
}

// -------------------------------------------------------------------

// Edge

// required int64 id_a = 1;
inline bool Edge::has_id_a() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Edge::set_has_id_a() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Edge::clear_has_id_a() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Edge::clear_id_a() {
  id_a_ = GOOGLE_LONGLONG(0);
  clear_has_id_a();
}
inline ::google::protobuf::int64 Edge::id_a() const {
  // @@protoc_insertion_point(field_get:mutate.Edge.id_a)
  return id_a_;
}
inline void Edge::set_id_a(::google::protobuf::int64 value) {
  set_has_id_a();
  id_a_ = value;
  // @@protoc_insertion_point(field_set:mutate.Edge.id_a)
}

// required int64 id_b = 2;
inline bool Edge::has_id_b() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Edge::set_has_id_b() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Edge::clear_has_id_b() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Edge::clear_id_b() {
  id_b_ = GOOGLE_LONGLONG(0);
  clear_has_id_b();
}
inline ::google::protobuf::int64 Edge::id_b() const {
  // @@protoc_insertion_point(field_get:mutate.Edge.id_b)
  return id_b_;
}
inline void Edge::set_id_b(::google::protobuf::int64 value) {
  set_has_id_b();
  id_b_ = value;
  // @@protoc_insertion_point(field_set:mutate.Edge.id_b)
}

// -------------------------------------------------------------------

// Code

// required int32 code = 200;
inline bool Code::has_code() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Code::set_has_code() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Code::clear_has_code() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Code::clear_code() {
  code_ = 0;
  clear_has_code();
}
inline ::google::protobuf::int32 Code::code() const {
  // @@protoc_insertion_point(field_get:mutate.Code.code)
  return code_;
}
inline void Code::set_code(::google::protobuf::int32 value) {
  set_has_code();
  code_ = value;
  // @@protoc_insertion_point(field_set:mutate.Code.code)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace mutate

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_test_2eproto__INCLUDED
