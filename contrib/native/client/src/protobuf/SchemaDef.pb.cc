// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SchemaDef.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SchemaDef.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace exec {

namespace {

const ::google::protobuf::EnumDescriptor* ValueMode_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_SchemaDef_2eproto() {
  protobuf_AddDesc_SchemaDef_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "SchemaDef.proto");
  GOOGLE_CHECK(file != NULL);
  ValueMode_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_SchemaDef_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_SchemaDef_2eproto() {
}

void protobuf_AddDesc_SchemaDef_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::common::protobuf_AddDesc_Types_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017SchemaDef.proto\022\004exec\032\013Types.proto*0\n\t"
    "ValueMode\022\020\n\014VALUE_VECTOR\020\000\022\007\n\003RLE\020\001\022\010\n\004"
    "DICT\020\002B0\n\033org.apache.drill.exec.protoB\017S"
    "chemaDefProtosH\001", 136);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SchemaDef.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_SchemaDef_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_SchemaDef_2eproto {
  StaticDescriptorInitializer_SchemaDef_2eproto() {
    protobuf_AddDesc_SchemaDef_2eproto();
  }
} static_descriptor_initializer_SchemaDef_2eproto_;
const ::google::protobuf::EnumDescriptor* ValueMode_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ValueMode_descriptor_;
}
bool ValueMode_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace exec

// @@protoc_insertion_point(global_scope)
