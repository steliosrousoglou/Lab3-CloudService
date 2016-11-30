// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: test.proto
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
#ifndef GRPC_test_2eproto__INCLUDED
#define GRPC_test_2eproto__INCLUDED

#include "test.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace mutate {

// The greeting service definition.
class Mutator GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Sends a greeting
    virtual ::grpc::Status add_node(::grpc::ClientContext* context, const ::mutate::Node& request, ::mutate::Code* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mutate::Code>> Asyncadd_node(::grpc::ClientContext* context, const ::mutate::Node& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mutate::Code>>(Asyncadd_nodeRaw(context, request, cq));
    }
    virtual ::grpc::Status remove_node(::grpc::ClientContext* context, const ::mutate::Node& request, ::mutate::Code* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mutate::Code>> Asyncremove_node(::grpc::ClientContext* context, const ::mutate::Node& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mutate::Code>>(Asyncremove_nodeRaw(context, request, cq));
    }
    virtual ::grpc::Status add_edge(::grpc::ClientContext* context, const ::mutate::Edge& request, ::mutate::Code* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mutate::Code>> Asyncadd_edge(::grpc::ClientContext* context, const ::mutate::Edge& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mutate::Code>>(Asyncadd_edgeRaw(context, request, cq));
    }
    virtual ::grpc::Status remove_edge(::grpc::ClientContext* context, const ::mutate::Edge& request, ::mutate::Code* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mutate::Code>> Asyncremove_edge(::grpc::ClientContext* context, const ::mutate::Edge& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mutate::Code>>(Asyncremove_edgeRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::mutate::Code>* Asyncadd_nodeRaw(::grpc::ClientContext* context, const ::mutate::Node& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::mutate::Code>* Asyncremove_nodeRaw(::grpc::ClientContext* context, const ::mutate::Node& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::mutate::Code>* Asyncadd_edgeRaw(::grpc::ClientContext* context, const ::mutate::Edge& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::mutate::Code>* Asyncremove_edgeRaw(::grpc::ClientContext* context, const ::mutate::Edge& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status add_node(::grpc::ClientContext* context, const ::mutate::Node& request, ::mutate::Code* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mutate::Code>> Asyncadd_node(::grpc::ClientContext* context, const ::mutate::Node& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mutate::Code>>(Asyncadd_nodeRaw(context, request, cq));
    }
    ::grpc::Status remove_node(::grpc::ClientContext* context, const ::mutate::Node& request, ::mutate::Code* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mutate::Code>> Asyncremove_node(::grpc::ClientContext* context, const ::mutate::Node& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mutate::Code>>(Asyncremove_nodeRaw(context, request, cq));
    }
    ::grpc::Status add_edge(::grpc::ClientContext* context, const ::mutate::Edge& request, ::mutate::Code* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mutate::Code>> Asyncadd_edge(::grpc::ClientContext* context, const ::mutate::Edge& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mutate::Code>>(Asyncadd_edgeRaw(context, request, cq));
    }
    ::grpc::Status remove_edge(::grpc::ClientContext* context, const ::mutate::Edge& request, ::mutate::Code* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mutate::Code>> Asyncremove_edge(::grpc::ClientContext* context, const ::mutate::Edge& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mutate::Code>>(Asyncremove_edgeRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::mutate::Code>* Asyncadd_nodeRaw(::grpc::ClientContext* context, const ::mutate::Node& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::mutate::Code>* Asyncremove_nodeRaw(::grpc::ClientContext* context, const ::mutate::Node& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::mutate::Code>* Asyncadd_edgeRaw(::grpc::ClientContext* context, const ::mutate::Edge& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::mutate::Code>* Asyncremove_edgeRaw(::grpc::ClientContext* context, const ::mutate::Edge& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_add_node_;
    const ::grpc::RpcMethod rpcmethod_remove_node_;
    const ::grpc::RpcMethod rpcmethod_add_edge_;
    const ::grpc::RpcMethod rpcmethod_remove_edge_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Sends a greeting
    virtual ::grpc::Status add_node(::grpc::ServerContext* context, const ::mutate::Node* request, ::mutate::Code* response);
    virtual ::grpc::Status remove_node(::grpc::ServerContext* context, const ::mutate::Node* request, ::mutate::Code* response);
    virtual ::grpc::Status add_edge(::grpc::ServerContext* context, const ::mutate::Edge* request, ::mutate::Code* response);
    virtual ::grpc::Status remove_edge(::grpc::ServerContext* context, const ::mutate::Edge* request, ::mutate::Code* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_add_node : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_add_node() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_add_node() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status add_node(::grpc::ServerContext* context, const ::mutate::Node* request, ::mutate::Code* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestadd_node(::grpc::ServerContext* context, ::mutate::Node* request, ::grpc::ServerAsyncResponseWriter< ::mutate::Code>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_remove_node : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_remove_node() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_remove_node() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status remove_node(::grpc::ServerContext* context, const ::mutate::Node* request, ::mutate::Code* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestremove_node(::grpc::ServerContext* context, ::mutate::Node* request, ::grpc::ServerAsyncResponseWriter< ::mutate::Code>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_add_edge : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_add_edge() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_add_edge() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status add_edge(::grpc::ServerContext* context, const ::mutate::Edge* request, ::mutate::Code* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestadd_edge(::grpc::ServerContext* context, ::mutate::Edge* request, ::grpc::ServerAsyncResponseWriter< ::mutate::Code>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_remove_edge : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_remove_edge() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_remove_edge() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status remove_edge(::grpc::ServerContext* context, const ::mutate::Edge* request, ::mutate::Code* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestremove_edge(::grpc::ServerContext* context, ::mutate::Edge* request, ::grpc::ServerAsyncResponseWriter< ::mutate::Code>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_add_node<WithAsyncMethod_remove_node<WithAsyncMethod_add_edge<WithAsyncMethod_remove_edge<Service > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_add_node : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_add_node() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_add_node() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status add_node(::grpc::ServerContext* context, const ::mutate::Node* request, ::mutate::Code* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_remove_node : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_remove_node() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_remove_node() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status remove_node(::grpc::ServerContext* context, const ::mutate::Node* request, ::mutate::Code* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_add_edge : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_add_edge() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_add_edge() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status add_edge(::grpc::ServerContext* context, const ::mutate::Edge* request, ::mutate::Code* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_remove_edge : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_remove_edge() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_remove_edge() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status remove_edge(::grpc::ServerContext* context, const ::mutate::Edge* request, ::mutate::Code* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace mutate


#endif  // GRPC_test_2eproto__INCLUDED
