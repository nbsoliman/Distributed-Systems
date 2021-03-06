// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: synchronizer.proto
// Original file comments:
// Copyright 2015, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
#ifndef GRPC_synchronizer_2eproto__INCLUDED
#define GRPC_synchronizer_2eproto__INCLUDED

#include "synchronizer.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace csce438 {

// The messenger service definition.
class SNSSync final {
 public:
  static constexpr char const* service_full_name() {
    return "csce438.SNSSync";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status InformFollow(::grpc::ClientContext* context, const ::csce438::FollowRequest& request, ::csce438::FollowReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::csce438::FollowReply>> AsyncInformFollow(::grpc::ClientContext* context, const ::csce438::FollowRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::csce438::FollowReply>>(AsyncInformFollowRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::csce438::FollowReply>> PrepareAsyncInformFollow(::grpc::ClientContext* context, const ::csce438::FollowRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::csce438::FollowReply>>(PrepareAsyncInformFollowRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::csce438::SyncMessage, ::csce438::SyncMessage>> InformTimeline(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::csce438::SyncMessage, ::csce438::SyncMessage>>(InformTimelineRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::csce438::SyncMessage, ::csce438::SyncMessage>> AsyncInformTimeline(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::csce438::SyncMessage, ::csce438::SyncMessage>>(AsyncInformTimelineRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::csce438::SyncMessage, ::csce438::SyncMessage>> PrepareAsyncInformTimeline(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::csce438::SyncMessage, ::csce438::SyncMessage>>(PrepareAsyncInformTimelineRaw(context, cq));
    }
    virtual ::grpc::Status AskForClients(::grpc::ClientContext* context, const ::csce438::ClientRequest& request, ::csce438::ClientReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::csce438::ClientReply>> AsyncAskForClients(::grpc::ClientContext* context, const ::csce438::ClientRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::csce438::ClientReply>>(AsyncAskForClientsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::csce438::ClientReply>> PrepareAsyncAskForClients(::grpc::ClientContext* context, const ::csce438::ClientRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::csce438::ClientReply>>(PrepareAsyncAskForClientsRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void InformFollow(::grpc::ClientContext* context, const ::csce438::FollowRequest* request, ::csce438::FollowReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void InformFollow(::grpc::ClientContext* context, const ::csce438::FollowRequest* request, ::csce438::FollowReply* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void InformTimeline(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::csce438::SyncMessage,::csce438::SyncMessage>* reactor) = 0;
      virtual void AskForClients(::grpc::ClientContext* context, const ::csce438::ClientRequest* request, ::csce438::ClientReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void AskForClients(::grpc::ClientContext* context, const ::csce438::ClientRequest* request, ::csce438::ClientReply* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::csce438::FollowReply>* AsyncInformFollowRaw(::grpc::ClientContext* context, const ::csce438::FollowRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::csce438::FollowReply>* PrepareAsyncInformFollowRaw(::grpc::ClientContext* context, const ::csce438::FollowRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderWriterInterface< ::csce438::SyncMessage, ::csce438::SyncMessage>* InformTimelineRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::csce438::SyncMessage, ::csce438::SyncMessage>* AsyncInformTimelineRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::csce438::SyncMessage, ::csce438::SyncMessage>* PrepareAsyncInformTimelineRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::csce438::ClientReply>* AsyncAskForClientsRaw(::grpc::ClientContext* context, const ::csce438::ClientRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::csce438::ClientReply>* PrepareAsyncAskForClientsRaw(::grpc::ClientContext* context, const ::csce438::ClientRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status InformFollow(::grpc::ClientContext* context, const ::csce438::FollowRequest& request, ::csce438::FollowReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::csce438::FollowReply>> AsyncInformFollow(::grpc::ClientContext* context, const ::csce438::FollowRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::csce438::FollowReply>>(AsyncInformFollowRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::csce438::FollowReply>> PrepareAsyncInformFollow(::grpc::ClientContext* context, const ::csce438::FollowRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::csce438::FollowReply>>(PrepareAsyncInformFollowRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriter< ::csce438::SyncMessage, ::csce438::SyncMessage>> InformTimeline(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::csce438::SyncMessage, ::csce438::SyncMessage>>(InformTimelineRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::csce438::SyncMessage, ::csce438::SyncMessage>> AsyncInformTimeline(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::csce438::SyncMessage, ::csce438::SyncMessage>>(AsyncInformTimelineRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::csce438::SyncMessage, ::csce438::SyncMessage>> PrepareAsyncInformTimeline(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::csce438::SyncMessage, ::csce438::SyncMessage>>(PrepareAsyncInformTimelineRaw(context, cq));
    }
    ::grpc::Status AskForClients(::grpc::ClientContext* context, const ::csce438::ClientRequest& request, ::csce438::ClientReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::csce438::ClientReply>> AsyncAskForClients(::grpc::ClientContext* context, const ::csce438::ClientRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::csce438::ClientReply>>(AsyncAskForClientsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::csce438::ClientReply>> PrepareAsyncAskForClients(::grpc::ClientContext* context, const ::csce438::ClientRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::csce438::ClientReply>>(PrepareAsyncAskForClientsRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void InformFollow(::grpc::ClientContext* context, const ::csce438::FollowRequest* request, ::csce438::FollowReply* response, std::function<void(::grpc::Status)>) override;
      void InformFollow(::grpc::ClientContext* context, const ::csce438::FollowRequest* request, ::csce438::FollowReply* response, ::grpc::ClientUnaryReactor* reactor) override;
      void InformTimeline(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::csce438::SyncMessage,::csce438::SyncMessage>* reactor) override;
      void AskForClients(::grpc::ClientContext* context, const ::csce438::ClientRequest* request, ::csce438::ClientReply* response, std::function<void(::grpc::Status)>) override;
      void AskForClients(::grpc::ClientContext* context, const ::csce438::ClientRequest* request, ::csce438::ClientReply* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::csce438::FollowReply>* AsyncInformFollowRaw(::grpc::ClientContext* context, const ::csce438::FollowRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::csce438::FollowReply>* PrepareAsyncInformFollowRaw(::grpc::ClientContext* context, const ::csce438::FollowRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReaderWriter< ::csce438::SyncMessage, ::csce438::SyncMessage>* InformTimelineRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::csce438::SyncMessage, ::csce438::SyncMessage>* AsyncInformTimelineRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::csce438::SyncMessage, ::csce438::SyncMessage>* PrepareAsyncInformTimelineRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::csce438::ClientReply>* AsyncAskForClientsRaw(::grpc::ClientContext* context, const ::csce438::ClientRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::csce438::ClientReply>* PrepareAsyncAskForClientsRaw(::grpc::ClientContext* context, const ::csce438::ClientRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_InformFollow_;
    const ::grpc::internal::RpcMethod rpcmethod_InformTimeline_;
    const ::grpc::internal::RpcMethod rpcmethod_AskForClients_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status InformFollow(::grpc::ServerContext* context, const ::csce438::FollowRequest* request, ::csce438::FollowReply* response);
    virtual ::grpc::Status InformTimeline(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::csce438::SyncMessage, ::csce438::SyncMessage>* stream);
    virtual ::grpc::Status AskForClients(::grpc::ServerContext* context, const ::csce438::ClientRequest* request, ::csce438::ClientReply* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_InformFollow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_InformFollow() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_InformFollow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status InformFollow(::grpc::ServerContext* /*context*/, const ::csce438::FollowRequest* /*request*/, ::csce438::FollowReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestInformFollow(::grpc::ServerContext* context, ::csce438::FollowRequest* request, ::grpc::ServerAsyncResponseWriter< ::csce438::FollowReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_InformTimeline : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_InformTimeline() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_InformTimeline() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status InformTimeline(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::csce438::SyncMessage, ::csce438::SyncMessage>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestInformTimeline(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::csce438::SyncMessage, ::csce438::SyncMessage>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(1, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_AskForClients : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_AskForClients() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_AskForClients() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AskForClients(::grpc::ServerContext* /*context*/, const ::csce438::ClientRequest* /*request*/, ::csce438::ClientReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAskForClients(::grpc::ServerContext* context, ::csce438::ClientRequest* request, ::grpc::ServerAsyncResponseWriter< ::csce438::ClientReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_InformFollow<WithAsyncMethod_InformTimeline<WithAsyncMethod_AskForClients<Service > > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_InformFollow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_InformFollow() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::csce438::FollowRequest, ::csce438::FollowReply>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::csce438::FollowRequest* request, ::csce438::FollowReply* response) { return this->InformFollow(context, request, response); }));}
    void SetMessageAllocatorFor_InformFollow(
        ::grpc::MessageAllocator< ::csce438::FollowRequest, ::csce438::FollowReply>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::csce438::FollowRequest, ::csce438::FollowReply>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_InformFollow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status InformFollow(::grpc::ServerContext* /*context*/, const ::csce438::FollowRequest* /*request*/, ::csce438::FollowReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* InformFollow(
      ::grpc::CallbackServerContext* /*context*/, const ::csce438::FollowRequest* /*request*/, ::csce438::FollowReply* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_InformTimeline : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_InformTimeline() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackBidiHandler< ::csce438::SyncMessage, ::csce438::SyncMessage>(
            [this](
                   ::grpc::CallbackServerContext* context) { return this->InformTimeline(context); }));
    }
    ~WithCallbackMethod_InformTimeline() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status InformTimeline(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::csce438::SyncMessage, ::csce438::SyncMessage>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerBidiReactor< ::csce438::SyncMessage, ::csce438::SyncMessage>* InformTimeline(
      ::grpc::CallbackServerContext* /*context*/)
      { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_AskForClients : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_AskForClients() {
      ::grpc::Service::MarkMethodCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::csce438::ClientRequest, ::csce438::ClientReply>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::csce438::ClientRequest* request, ::csce438::ClientReply* response) { return this->AskForClients(context, request, response); }));}
    void SetMessageAllocatorFor_AskForClients(
        ::grpc::MessageAllocator< ::csce438::ClientRequest, ::csce438::ClientReply>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(2);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::csce438::ClientRequest, ::csce438::ClientReply>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_AskForClients() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AskForClients(::grpc::ServerContext* /*context*/, const ::csce438::ClientRequest* /*request*/, ::csce438::ClientReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* AskForClients(
      ::grpc::CallbackServerContext* /*context*/, const ::csce438::ClientRequest* /*request*/, ::csce438::ClientReply* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_InformFollow<WithCallbackMethod_InformTimeline<WithCallbackMethod_AskForClients<Service > > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_InformFollow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_InformFollow() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_InformFollow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status InformFollow(::grpc::ServerContext* /*context*/, const ::csce438::FollowRequest* /*request*/, ::csce438::FollowReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_InformTimeline : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_InformTimeline() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_InformTimeline() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status InformTimeline(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::csce438::SyncMessage, ::csce438::SyncMessage>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_AskForClients : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_AskForClients() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_AskForClients() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AskForClients(::grpc::ServerContext* /*context*/, const ::csce438::ClientRequest* /*request*/, ::csce438::ClientReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_InformFollow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_InformFollow() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_InformFollow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status InformFollow(::grpc::ServerContext* /*context*/, const ::csce438::FollowRequest* /*request*/, ::csce438::FollowReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestInformFollow(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_InformTimeline : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_InformTimeline() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_InformTimeline() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status InformTimeline(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::csce438::SyncMessage, ::csce438::SyncMessage>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestInformTimeline(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(1, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_AskForClients : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_AskForClients() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_AskForClients() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AskForClients(::grpc::ServerContext* /*context*/, const ::csce438::ClientRequest* /*request*/, ::csce438::ClientReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAskForClients(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_InformFollow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_InformFollow() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->InformFollow(context, request, response); }));
    }
    ~WithRawCallbackMethod_InformFollow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status InformFollow(::grpc::ServerContext* /*context*/, const ::csce438::FollowRequest* /*request*/, ::csce438::FollowReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* InformFollow(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_InformTimeline : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_InformTimeline() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackBidiHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context) { return this->InformTimeline(context); }));
    }
    ~WithRawCallbackMethod_InformTimeline() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status InformTimeline(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::csce438::SyncMessage, ::csce438::SyncMessage>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* InformTimeline(
      ::grpc::CallbackServerContext* /*context*/)
      { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_AskForClients : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_AskForClients() {
      ::grpc::Service::MarkMethodRawCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->AskForClients(context, request, response); }));
    }
    ~WithRawCallbackMethod_AskForClients() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AskForClients(::grpc::ServerContext* /*context*/, const ::csce438::ClientRequest* /*request*/, ::csce438::ClientReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* AskForClients(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_InformFollow : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_InformFollow() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::csce438::FollowRequest, ::csce438::FollowReply>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::csce438::FollowRequest, ::csce438::FollowReply>* streamer) {
                       return this->StreamedInformFollow(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_InformFollow() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status InformFollow(::grpc::ServerContext* /*context*/, const ::csce438::FollowRequest* /*request*/, ::csce438::FollowReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedInformFollow(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::csce438::FollowRequest,::csce438::FollowReply>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_AskForClients : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_AskForClients() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler<
          ::csce438::ClientRequest, ::csce438::ClientReply>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::csce438::ClientRequest, ::csce438::ClientReply>* streamer) {
                       return this->StreamedAskForClients(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_AskForClients() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status AskForClients(::grpc::ServerContext* /*context*/, const ::csce438::ClientRequest* /*request*/, ::csce438::ClientReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedAskForClients(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::csce438::ClientRequest,::csce438::ClientReply>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_InformFollow<WithStreamedUnaryMethod_AskForClients<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_InformFollow<WithStreamedUnaryMethod_AskForClients<Service > > StreamedService;
};

}  // namespace csce438


#endif  // GRPC_synchronizer_2eproto__INCLUDED
