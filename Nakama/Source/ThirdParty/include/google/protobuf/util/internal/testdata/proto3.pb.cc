// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/util/internal/testdata/proto3.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/util/internal/testdata/proto3.pb.h>

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
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {
namespace testing {

namespace {

const ::google::protobuf::Descriptor* Proto3Message_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Proto3Message_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Proto3Message_NestedEnum_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/util/internal/testdata/proto3.proto");
  GOOGLE_CHECK(file != NULL);
  Proto3Message_descriptor_ = file->message_type(0);
  static const int Proto3Message_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Proto3Message, enum_value_),
  };
  Proto3Message_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Proto3Message_descriptor_,
      Proto3Message::internal_default_instance(),
      Proto3Message_offsets_,
      -1,
      -1,
      -1,
      sizeof(Proto3Message),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Proto3Message, _internal_metadata_));
  Proto3Message_NestedEnum_descriptor_ = Proto3Message_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Proto3Message_descriptor_, Proto3Message::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto() {
  Proto3Message_default_instance_.Shutdown();
  delete Proto3Message_reflection_;
}

void protobuf_InitDefaults_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  Proto3Message_default_instance_.DefaultConstruct();
  Proto3Message_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto_once_);
void protobuf_InitDefaults_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto_once_,
                 &protobuf_InitDefaults_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto_impl);
}
void protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n3google/protobuf/util/internal/testdata"
    "/proto3.proto\022\027google.protobuf.testing\"\177"
    "\n\rProto3Message\022E\n\nenum_value\030\001 \001(\01621.go"
    "ogle.protobuf.testing.Proto3Message.Nest"
    "edEnum\"\'\n\nNestedEnum\022\007\n\003FOO\020\000\022\007\n\003BAR\020\001\022\007"
    "\n\003BAZ\020\002b\006proto3", 215);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/util/internal/testdata/proto3.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto_once_);
void protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto_once_,
                 &protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

const ::google::protobuf::EnumDescriptor* Proto3Message_NestedEnum_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Proto3Message_NestedEnum_descriptor_;
}
bool Proto3Message_NestedEnum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Proto3Message_NestedEnum Proto3Message::FOO;
const Proto3Message_NestedEnum Proto3Message::BAR;
const Proto3Message_NestedEnum Proto3Message::BAZ;
const Proto3Message_NestedEnum Proto3Message::NestedEnum_MIN;
const Proto3Message_NestedEnum Proto3Message::NestedEnum_MAX;
const int Proto3Message::NestedEnum_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Proto3Message::kEnumValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Proto3Message::Proto3Message()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.testing.Proto3Message)
}

void Proto3Message::InitAsDefaultInstance() {
}

Proto3Message::Proto3Message(const Proto3Message& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.testing.Proto3Message)
}

void Proto3Message::SharedCtor() {
  enum_value_ = 0;
  _cached_size_ = 0;
}

Proto3Message::~Proto3Message() {
  // @@protoc_insertion_point(destructor:google.protobuf.testing.Proto3Message)
  SharedDtor();
}

void Proto3Message::SharedDtor() {
}

void Proto3Message::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Proto3Message::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Proto3Message_descriptor_;
}

const Proto3Message& Proto3Message::default_instance() {
  protobuf_InitDefaults_google_2fprotobuf_2futil_2finternal_2ftestdata_2fproto3_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Proto3Message> Proto3Message_default_instance_;

Proto3Message* Proto3Message::New(::google::protobuf::Arena* arena) const {
  Proto3Message* n = new Proto3Message;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Proto3Message::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.testing.Proto3Message)
  enum_value_ = 0;
}

bool Proto3Message::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.testing.Proto3Message)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .google.protobuf.testing.Proto3Message.NestedEnum enum_value = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_enum_value(static_cast< ::google::protobuf::testing::Proto3Message_NestedEnum >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.testing.Proto3Message)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.testing.Proto3Message)
  return false;
#undef DO_
}

void Proto3Message::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.testing.Proto3Message)
  // optional .google.protobuf.testing.Proto3Message.NestedEnum enum_value = 1;
  if (this->enum_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->enum_value(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.testing.Proto3Message)
}

::google::protobuf::uint8* Proto3Message::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.testing.Proto3Message)
  // optional .google.protobuf.testing.Proto3Message.NestedEnum enum_value = 1;
  if (this->enum_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->enum_value(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.testing.Proto3Message)
  return target;
}

size_t Proto3Message::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.testing.Proto3Message)
  size_t total_size = 0;

  // optional .google.protobuf.testing.Proto3Message.NestedEnum enum_value = 1;
  if (this->enum_value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->enum_value());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Proto3Message::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.testing.Proto3Message)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Proto3Message* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Proto3Message>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.testing.Proto3Message)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.testing.Proto3Message)
    UnsafeMergeFrom(*source);
  }
}

void Proto3Message::MergeFrom(const Proto3Message& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.testing.Proto3Message)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void Proto3Message::UnsafeMergeFrom(const Proto3Message& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.enum_value() != 0) {
    set_enum_value(from.enum_value());
  }
}

void Proto3Message::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.testing.Proto3Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Proto3Message::CopyFrom(const Proto3Message& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.testing.Proto3Message)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool Proto3Message::IsInitialized() const {

  return true;
}

void Proto3Message::Swap(Proto3Message* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Proto3Message::InternalSwap(Proto3Message* other) {
  std::swap(enum_value_, other->enum_value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Proto3Message::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Proto3Message_descriptor_;
  metadata.reflection = Proto3Message_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Proto3Message

// optional .google.protobuf.testing.Proto3Message.NestedEnum enum_value = 1;
void Proto3Message::clear_enum_value() {
  enum_value_ = 0;
}
::google::protobuf::testing::Proto3Message_NestedEnum Proto3Message::enum_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.Proto3Message.enum_value)
  return static_cast< ::google::protobuf::testing::Proto3Message_NestedEnum >(enum_value_);
}
void Proto3Message::set_enum_value(::google::protobuf::testing::Proto3Message_NestedEnum value) {
  
  enum_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.testing.Proto3Message.enum_value)
}

inline const Proto3Message* Proto3Message::internal_default_instance() {
  return &Proto3Message_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace testing
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
