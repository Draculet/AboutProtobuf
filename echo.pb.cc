// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: echo.proto

#include "echo.pb.h"

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
namespace echo {
class EchoRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<EchoRequest> _instance;
} _EchoRequest_default_instance_;
class EchoResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<EchoResponse> _instance;
} _EchoResponse_default_instance_;
}  // namespace echo
static void InitDefaultsscc_info_EchoRequest_echo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::echo::_EchoRequest_default_instance_;
    new (ptr) ::echo::EchoRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::echo::EchoRequest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_EchoRequest_echo_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_EchoRequest_echo_2eproto}, {}};

static void InitDefaultsscc_info_EchoResponse_echo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::echo::_EchoResponse_default_instance_;
    new (ptr) ::echo::EchoResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::echo::EchoResponse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_EchoResponse_echo_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_EchoResponse_echo_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_echo_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_echo_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* file_level_service_descriptors_echo_2eproto[2];

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_echo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::echo::EchoRequest, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::echo::EchoRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::echo::EchoRequest, request_),
  0,
  PROTOBUF_FIELD_OFFSET(::echo::EchoResponse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::echo::EchoResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::echo::EchoResponse, response_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::echo::EchoRequest)},
  { 7, 13, sizeof(::echo::EchoResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::echo::_EchoRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::echo::_EchoResponse_default_instance_),
};

const char descriptor_table_protodef_echo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\necho.proto\022\004echo\"\036\n\013EchoRequest\022\017\n\007req"
  "uest\030\001 \002(\t\" \n\014EchoResponse\022\020\n\010response\030\001"
  " \002(\t2\234\001\n\013EchoService\022-\n\004Echo\022\021.echo.Echo"
  "Request\032\022.echo.EchoResponse\022.\n\005Echo2\022\021.e"
  "cho.EchoRequest\032\022.echo.EchoResponse\022.\n\005E"
  "cho3\022\021.echo.EchoRequest\032\022.echo.EchoRespo"
  "nse2@\n\rNoEchoService\022/\n\006noEcho\022\021.echo.Ec"
  "hoRequest\032\022.echo.EchoResponseB\003\200\001\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_echo_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_echo_2eproto_sccs[2] = {
  &scc_info_EchoRequest_echo_2eproto.base,
  &scc_info_EchoResponse_echo_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_echo_2eproto_once;
static bool descriptor_table_echo_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_echo_2eproto = {
  &descriptor_table_echo_2eproto_initialized, descriptor_table_protodef_echo_2eproto, "echo.proto", 314,
  &descriptor_table_echo_2eproto_once, descriptor_table_echo_2eproto_sccs, descriptor_table_echo_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_echo_2eproto::offsets,
  file_level_metadata_echo_2eproto, 2, file_level_enum_descriptors_echo_2eproto, file_level_service_descriptors_echo_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_echo_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_echo_2eproto), true);
namespace echo {

// ===================================================================

void EchoRequest::InitAsDefaultInstance() {
}
class EchoRequest::_Internal {
 public:
  using HasBits = decltype(std::declval<EchoRequest>()._has_bits_);
  static void set_has_request(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

EchoRequest::EchoRequest()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:echo.EchoRequest)
}
EchoRequest::EchoRequest(const EchoRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  request_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_request()) {
    request_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.request_);
  }
  // @@protoc_insertion_point(copy_constructor:echo.EchoRequest)
}

void EchoRequest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_EchoRequest_echo_2eproto.base);
  request_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

EchoRequest::~EchoRequest() {
  // @@protoc_insertion_point(destructor:echo.EchoRequest)
  SharedDtor();
}

void EchoRequest::SharedDtor() {
  request_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void EchoRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const EchoRequest& EchoRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_EchoRequest_echo_2eproto.base);
  return *internal_default_instance();
}


void EchoRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:echo.EchoRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    request_.ClearNonDefaultToEmptyNoArena();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* EchoRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required string request = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(_internal_mutable_request(), ptr, ctx, "echo.EchoRequest.request");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
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
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool EchoRequest::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:echo.EchoRequest)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string request = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->_internal_mutable_request()));
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
            this->_internal_request().data(), static_cast<int>(this->_internal_request().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::PARSE,
            "echo.EchoRequest.request");
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
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:echo.EchoRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:echo.EchoRequest)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

::PROTOBUF_NAMESPACE_ID::uint8* EchoRequest::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:echo.EchoRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string request = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_request().data(), static_cast<int>(this->_internal_request().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "echo.EchoRequest.request");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_request(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:echo.EchoRequest)
  return target;
}

size_t EchoRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:echo.EchoRequest)
  size_t total_size = 0;

  // required string request = 1;
  if (has_request()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_request());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EchoRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:echo.EchoRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const EchoRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<EchoRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:echo.EchoRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:echo.EchoRequest)
    MergeFrom(*source);
  }
}

void EchoRequest::MergeFrom(const EchoRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:echo.EchoRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_request()) {
    _has_bits_[0] |= 0x00000001u;
    request_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.request_);
  }
}

void EchoRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:echo.EchoRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EchoRequest::CopyFrom(const EchoRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:echo.EchoRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EchoRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void EchoRequest::InternalSwap(EchoRequest* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  request_.Swap(&other->request_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata EchoRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void EchoResponse::InitAsDefaultInstance() {
}
class EchoResponse::_Internal {
 public:
  using HasBits = decltype(std::declval<EchoResponse>()._has_bits_);
  static void set_has_response(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

EchoResponse::EchoResponse()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:echo.EchoResponse)
}
EchoResponse::EchoResponse(const EchoResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  response_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_response()) {
    response_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.response_);
  }
  // @@protoc_insertion_point(copy_constructor:echo.EchoResponse)
}

void EchoResponse::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_EchoResponse_echo_2eproto.base);
  response_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

EchoResponse::~EchoResponse() {
  // @@protoc_insertion_point(destructor:echo.EchoResponse)
  SharedDtor();
}

void EchoResponse::SharedDtor() {
  response_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void EchoResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const EchoResponse& EchoResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_EchoResponse_echo_2eproto.base);
  return *internal_default_instance();
}


void EchoResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:echo.EchoResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    response_.ClearNonDefaultToEmptyNoArena();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* EchoResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required string response = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(_internal_mutable_response(), ptr, ctx, "echo.EchoResponse.response");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
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
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool EchoResponse::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:echo.EchoResponse)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string response = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->_internal_mutable_response()));
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
            this->_internal_response().data(), static_cast<int>(this->_internal_response().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::PARSE,
            "echo.EchoResponse.response");
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
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:echo.EchoResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:echo.EchoResponse)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

::PROTOBUF_NAMESPACE_ID::uint8* EchoResponse::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:echo.EchoResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string response = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_response().data(), static_cast<int>(this->_internal_response().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "echo.EchoResponse.response");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_response(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:echo.EchoResponse)
  return target;
}

size_t EchoResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:echo.EchoResponse)
  size_t total_size = 0;

  // required string response = 1;
  if (has_response()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_response());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EchoResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:echo.EchoResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const EchoResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<EchoResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:echo.EchoResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:echo.EchoResponse)
    MergeFrom(*source);
  }
}

void EchoResponse::MergeFrom(const EchoResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:echo.EchoResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_response()) {
    _has_bits_[0] |= 0x00000001u;
    response_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.response_);
  }
}

void EchoResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:echo.EchoResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EchoResponse::CopyFrom(const EchoResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:echo.EchoResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EchoResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void EchoResponse::InternalSwap(EchoResponse* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  response_.Swap(&other->response_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata EchoResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

EchoService::~EchoService() {}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* EchoService::descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_echo_2eproto);
  return file_level_service_descriptors_echo_2eproto[0];
}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* EchoService::GetDescriptor() {
  return descriptor();
}

void EchoService::Echo(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                         const ::echo::EchoRequest*,
                         ::echo::EchoResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method Echo() not implemented.");
  done->Run();
}

void EchoService::Echo2(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                         const ::echo::EchoRequest*,
                         ::echo::EchoResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method Echo2() not implemented.");
  done->Run();
}

void EchoService::Echo3(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                         const ::echo::EchoRequest*,
                         ::echo::EchoResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method Echo3() not implemented.");
  done->Run();
}

void EchoService::CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                             ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                             const ::PROTOBUF_NAMESPACE_ID::Message* request,
                             ::PROTOBUF_NAMESPACE_ID::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), file_level_service_descriptors_echo_2eproto[0]);
  switch(method->index()) {
    case 0:
      Echo(controller,
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<const ::echo::EchoRequest*>(
                 request),
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<::echo::EchoResponse*>(
                 response),
             done);
      break;
    case 1:
      Echo2(controller,
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<const ::echo::EchoRequest*>(
                 request),
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<::echo::EchoResponse*>(
                 response),
             done);
      break;
    case 2:
      Echo3(controller,
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<const ::echo::EchoRequest*>(
                 request),
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<::echo::EchoResponse*>(
                 response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& EchoService::GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::echo::EchoRequest::default_instance();
    case 1:
      return ::echo::EchoRequest::default_instance();
    case 2:
      return ::echo::EchoRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->input_type());
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& EchoService::GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::echo::EchoResponse::default_instance();
    case 1:
      return ::echo::EchoResponse::default_instance();
    case 2:
      return ::echo::EchoResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->output_type());
  }
}

EchoService_Stub::EchoService_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
EchoService_Stub::EchoService_Stub(
    ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
    ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::PROTOBUF_NAMESPACE_ID::Service::STUB_OWNS_CHANNEL) {}
EchoService_Stub::~EchoService_Stub() {
  if (owns_channel_) delete channel_;
}

void EchoService_Stub::Echo(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                              const ::echo::EchoRequest* request,
                              ::echo::EchoResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}
void EchoService_Stub::Echo2(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                              const ::echo::EchoRequest* request,
                              ::echo::EchoResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(1),
                       controller, request, response, done);
}
void EchoService_Stub::Echo3(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                              const ::echo::EchoRequest* request,
                              ::echo::EchoResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(2),
                       controller, request, response, done);
}
// ===================================================================

NoEchoService::~NoEchoService() {}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* NoEchoService::descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_echo_2eproto);
  return file_level_service_descriptors_echo_2eproto[1];
}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* NoEchoService::GetDescriptor() {
  return descriptor();
}

void NoEchoService::noEcho(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                         const ::echo::EchoRequest*,
                         ::echo::EchoResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method noEcho() not implemented.");
  done->Run();
}

void NoEchoService::CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                             ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                             const ::PROTOBUF_NAMESPACE_ID::Message* request,
                             ::PROTOBUF_NAMESPACE_ID::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), file_level_service_descriptors_echo_2eproto[1]);
  switch(method->index()) {
    case 0:
      noEcho(controller,
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<const ::echo::EchoRequest*>(
                 request),
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<::echo::EchoResponse*>(
                 response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& NoEchoService::GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::echo::EchoRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->input_type());
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& NoEchoService::GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::echo::EchoResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->output_type());
  }
}

NoEchoService_Stub::NoEchoService_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
NoEchoService_Stub::NoEchoService_Stub(
    ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
    ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::PROTOBUF_NAMESPACE_ID::Service::STUB_OWNS_CHANNEL) {}
NoEchoService_Stub::~NoEchoService_Stub() {
  if (owns_channel_) delete channel_;
}

void NoEchoService_Stub::noEcho(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                              const ::echo::EchoRequest* request,
                              ::echo::EchoResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace echo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::echo::EchoRequest* Arena::CreateMaybeMessage< ::echo::EchoRequest >(Arena* arena) {
  return Arena::CreateInternal< ::echo::EchoRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::echo::EchoResponse* Arena::CreateMaybeMessage< ::echo::EchoResponse >(Arena* arena) {
  return Arena::CreateInternal< ::echo::EchoResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
