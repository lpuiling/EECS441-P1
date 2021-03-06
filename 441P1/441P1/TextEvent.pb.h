// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TextEvent.proto

#ifndef PROTOBUF_TextEvent_2eproto__INCLUDED
#define PROTOBUF_TextEvent_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_TextEvent_2eproto();
void protobuf_AssignDesc_TextEvent_2eproto();
void protobuf_ShutdownFile_TextEvent_2eproto();

class TextEvent;

enum EventType {
  INSERT = 0,
  DELETE = 1,
  UNDO = 2,
  REDO = 3
};
bool EventType_IsValid(int value);
const EventType EventType_MIN = INSERT;
const EventType EventType_MAX = REDO;
const int EventType_ARRAYSIZE = EventType_MAX + 1;

const ::google::protobuf::EnumDescriptor* EventType_descriptor();
inline const ::std::string& EventType_Name(EventType value) {
  return ::google::protobuf::internal::NameOfEnum(
    EventType_descriptor(), value);
}
inline bool EventType_Parse(
    const ::std::string& name, EventType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EventType>(
    EventType_descriptor(), name, value);
}
// ===================================================================

class TextEvent : public ::google::protobuf::Message {
 public:
  TextEvent();
  virtual ~TextEvent();

  TextEvent(const TextEvent& from);

  inline TextEvent& operator=(const TextEvent& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TextEvent& default_instance();

  void Swap(TextEvent* other);

  // implements Message ----------------------------------------------

  TextEvent* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TextEvent& from);
  void MergeFrom(const TextEvent& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string text = 1;
  inline bool has_text() const;
  inline void clear_text();
  static const int kTextFieldNumber = 1;
  inline const ::std::string& text() const;
  inline void set_text(const ::std::string& value);
  inline void set_text(const char* value);
  inline void set_text(const char* value, size_t size);
  inline ::std::string* mutable_text();
  inline ::std::string* release_text();
  inline void set_allocated_text(::std::string* text);

  // optional int32 location = 2;
  inline bool has_location() const;
  inline void clear_location();
  static const int kLocationFieldNumber = 2;
  inline ::google::protobuf::int32 location() const;
  inline void set_location(::google::protobuf::int32 value);

  // optional int64 user_id = 3;
  inline bool has_user_id() const;
  inline void clear_user_id();
  static const int kUserIdFieldNumber = 3;
  inline ::google::protobuf::int64 user_id() const;
  inline void set_user_id(::google::protobuf::int64 value);

  // optional .EventType type = 4 [default = INSERT];
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 4;
  inline ::EventType type() const;
  inline void set_type(::EventType value);

  // @@protoc_insertion_point(class_scope:TextEvent)
 private:
  inline void set_has_text();
  inline void clear_has_text();
  inline void set_has_location();
  inline void clear_has_location();
  inline void set_has_user_id();
  inline void clear_has_user_id();
  inline void set_has_type();
  inline void clear_has_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* text_;
  ::google::protobuf::int64 user_id_;
  ::google::protobuf::int32 location_;
  int type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_TextEvent_2eproto();
  friend void protobuf_AssignDesc_TextEvent_2eproto();
  friend void protobuf_ShutdownFile_TextEvent_2eproto();

  void InitAsDefaultInstance();
  static TextEvent* default_instance_;
};
// ===================================================================


// ===================================================================

// TextEvent

// optional string text = 1;
inline bool TextEvent::has_text() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TextEvent::set_has_text() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TextEvent::clear_has_text() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TextEvent::clear_text() {
  if (text_ != &::google::protobuf::internal::kEmptyString) {
    text_->clear();
  }
  clear_has_text();
}
inline const ::std::string& TextEvent::text() const {
  return *text_;
}
inline void TextEvent::set_text(const ::std::string& value) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    text_ = new ::std::string;
  }
  text_->assign(value);
}
inline void TextEvent::set_text(const char* value) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    text_ = new ::std::string;
  }
  text_->assign(value);
}
inline void TextEvent::set_text(const char* value, size_t size) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    text_ = new ::std::string;
  }
  text_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* TextEvent::mutable_text() {
  set_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    text_ = new ::std::string;
  }
  return text_;
}
inline ::std::string* TextEvent::release_text() {
  clear_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = text_;
    text_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void TextEvent::set_allocated_text(::std::string* text) {
  if (text_ != &::google::protobuf::internal::kEmptyString) {
    delete text_;
  }
  if (text) {
    set_has_text();
    text_ = text;
  } else {
    clear_has_text();
    text_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 location = 2;
inline bool TextEvent::has_location() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TextEvent::set_has_location() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TextEvent::clear_has_location() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TextEvent::clear_location() {
  location_ = 0;
  clear_has_location();
}
inline ::google::protobuf::int32 TextEvent::location() const {
  return location_;
}
inline void TextEvent::set_location(::google::protobuf::int32 value) {
  set_has_location();
  location_ = value;
}

// optional int64 user_id = 3;
inline bool TextEvent::has_user_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TextEvent::set_has_user_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TextEvent::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TextEvent::clear_user_id() {
  user_id_ = GOOGLE_LONGLONG(0);
  clear_has_user_id();
}
inline ::google::protobuf::int64 TextEvent::user_id() const {
  return user_id_;
}
inline void TextEvent::set_user_id(::google::protobuf::int64 value) {
  set_has_user_id();
  user_id_ = value;
}

// optional .EventType type = 4 [default = INSERT];
inline bool TextEvent::has_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TextEvent::set_has_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void TextEvent::clear_has_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void TextEvent::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::EventType TextEvent::type() const {
  return static_cast< ::EventType >(type_);
}
inline void TextEvent::set_type(::EventType value) {
  assert(::EventType_IsValid(value));
  set_has_type();
  type_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EventType>() {
  return ::EventType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_TextEvent_2eproto__INCLUDED
