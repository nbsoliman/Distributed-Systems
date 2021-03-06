// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: synchronizer.proto

#include "synchronizer.pb.h"
#include "synchronizer.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace csce438 {

static const char* SNSSync_method_names[] = {
  "/csce438.SNSSync/InformFollow",
  "/csce438.SNSSync/InformTimeline",
  "/csce438.SNSSync/AskForClients",
};

std::unique_ptr< SNSSync::Stub> SNSSync::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< SNSSync::Stub> stub(new SNSSync::Stub(channel, options));
  return stub;
}

SNSSync::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_InformFollow_(SNSSync_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_InformTimeline_(SNSSync_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  , rpcmethod_AskForClients_(SNSSync_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status SNSSync::Stub::InformFollow(::grpc::ClientContext* context, const ::csce438::FollowRequest& request, ::csce438::FollowReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::csce438::FollowRequest, ::csce438::FollowReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_InformFollow_, context, request, response);
}

void SNSSync::Stub::async::InformFollow(::grpc::ClientContext* context, const ::csce438::FollowRequest* request, ::csce438::FollowReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::csce438::FollowRequest, ::csce438::FollowReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_InformFollow_, context, request, response, std::move(f));
}

void SNSSync::Stub::async::InformFollow(::grpc::ClientContext* context, const ::csce438::FollowRequest* request, ::csce438::FollowReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_InformFollow_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::csce438::FollowReply>* SNSSync::Stub::PrepareAsyncInformFollowRaw(::grpc::ClientContext* context, const ::csce438::FollowRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::csce438::FollowReply, ::csce438::FollowRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_InformFollow_, context, request);
}

::grpc::ClientAsyncResponseReader< ::csce438::FollowReply>* SNSSync::Stub::AsyncInformFollowRaw(::grpc::ClientContext* context, const ::csce438::FollowRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncInformFollowRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientReaderWriter< ::csce438::SyncMessage, ::csce438::SyncMessage>* SNSSync::Stub::InformTimelineRaw(::grpc::ClientContext* context) {
  return ::grpc::internal::ClientReaderWriterFactory< ::csce438::SyncMessage, ::csce438::SyncMessage>::Create(channel_.get(), rpcmethod_InformTimeline_, context);
}

void SNSSync::Stub::async::InformTimeline(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::csce438::SyncMessage,::csce438::SyncMessage>* reactor) {
  ::grpc::internal::ClientCallbackReaderWriterFactory< ::csce438::SyncMessage,::csce438::SyncMessage>::Create(stub_->channel_.get(), stub_->rpcmethod_InformTimeline_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::csce438::SyncMessage, ::csce438::SyncMessage>* SNSSync::Stub::AsyncInformTimelineRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::csce438::SyncMessage, ::csce438::SyncMessage>::Create(channel_.get(), cq, rpcmethod_InformTimeline_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::csce438::SyncMessage, ::csce438::SyncMessage>* SNSSync::Stub::PrepareAsyncInformTimelineRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::csce438::SyncMessage, ::csce438::SyncMessage>::Create(channel_.get(), cq, rpcmethod_InformTimeline_, context, false, nullptr);
}

::grpc::Status SNSSync::Stub::AskForClients(::grpc::ClientContext* context, const ::csce438::ClientRequest& request, ::csce438::ClientReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::csce438::ClientRequest, ::csce438::ClientReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_AskForClients_, context, request, response);
}

void SNSSync::Stub::async::AskForClients(::grpc::ClientContext* context, const ::csce438::ClientRequest* request, ::csce438::ClientReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::csce438::ClientRequest, ::csce438::ClientReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AskForClients_, context, request, response, std::move(f));
}

void SNSSync::Stub::async::AskForClients(::grpc::ClientContext* context, const ::csce438::ClientRequest* request, ::csce438::ClientReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AskForClients_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::csce438::ClientReply>* SNSSync::Stub::PrepareAsyncAskForClientsRaw(::grpc::ClientContext* context, const ::csce438::ClientRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::csce438::ClientReply, ::csce438::ClientRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_AskForClients_, context, request);
}

::grpc::ClientAsyncResponseReader< ::csce438::ClientReply>* SNSSync::Stub::AsyncAskForClientsRaw(::grpc::ClientContext* context, const ::csce438::ClientRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncAskForClientsRaw(context, request, cq);
  result->StartCall();
  return result;
}

SNSSync::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SNSSync_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SNSSync::Service, ::csce438::FollowRequest, ::csce438::FollowReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SNSSync::Service* service,
             ::grpc::ServerContext* ctx,
             const ::csce438::FollowRequest* req,
             ::csce438::FollowReply* resp) {
               return service->InformFollow(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SNSSync_method_names[1],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< SNSSync::Service, ::csce438::SyncMessage, ::csce438::SyncMessage>(
          [](SNSSync::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReaderWriter<::csce438::SyncMessage,
             ::csce438::SyncMessage>* stream) {
               return service->InformTimeline(ctx, stream);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SNSSync_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SNSSync::Service, ::csce438::ClientRequest, ::csce438::ClientReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SNSSync::Service* service,
             ::grpc::ServerContext* ctx,
             const ::csce438::ClientRequest* req,
             ::csce438::ClientReply* resp) {
               return service->AskForClients(ctx, req, resp);
             }, this)));
}

SNSSync::Service::~Service() {
}

::grpc::Status SNSSync::Service::InformFollow(::grpc::ServerContext* context, const ::csce438::FollowRequest* request, ::csce438::FollowReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SNSSync::Service::InformTimeline(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::csce438::SyncMessage, ::csce438::SyncMessage>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SNSSync::Service::AskForClients(::grpc::ServerContext* context, const ::csce438::ClientRequest* request, ::csce438::ClientReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace csce438

