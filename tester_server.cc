#include <iostream>
#include <memory>
#include <string>
#include <unistd.h>
#include <grpc++/grpc++.h>

#include "test.grpc.pb.h"
#include "headers.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

using mutate::Node;
using mutate::Edge;
using mutate::Code;
using mutate::Mutator;

extern int CHAIN_NUM;

// define the service class.
class TesterService final : public Mutator::Service {
  
  Status add_node(ServerContext* context, const Node* node,
                  Code* reply) override {
    bool result;
    int r_code;
    switch(CHAIN_NUM) {
        case 2: {
	  // First make request to tail
	  r_code = send_to_next(ADD_NODE, node->id(), 0);
	  // 500 is designated for RPC failures
	  if (r_code == 500) {
	    reply->set_code(500);
	    return Status::CANCELLED;
	  }
	  // Apply change and reply
	  result = add_vertex(node->id());
          if (result) {
            printf("Added node %d\n", (int) node->id());
            reply->set_code(200);
          } else {
            reply->set_code(204);
          }
	  return Status::OK;
	}
	case 3: {
	  // Apply change and reply
	  result = add_vertex(node->id());
	  if (result) {
	    printf("Added node %d\n", (int) node->id());
	    reply->set_code(200);
	  } else {
	    reply->set_code(204);
	  }
	  return Status::OK;
	}
    }   
  }

  Status remove_node(ServerContext* context, const Node* node,
		     Code* reply) override {
    printf("Received: Remove node %d\n", (int) node->id());
    reply->set_code(300);
    return Status::OK;

  }

  Status add_edge(ServerContext* context, const Edge* edge,
                  Code* reply) override {
    printf("Received: Add edge %d - %d\n", (int) edge->id_a(), (int) edge->id_b());
    reply->set_code(300);
    return Status::OK;
  }

  Status remove_edge(ServerContext* context, const Edge* edge,
                  Code* reply) override {
    printf("Received: Remove edge %d - %d\n", (int) edge->id_a(), (int) edge->id_b()); 
    reply->set_code(300);
    return Status::OK;
  }
};

int serve_rpc() {

  // server serves on its own IP, port 50051
  std::string address = "0.0.0.0:50051";
  TesterService service;

  ServerBuilder builder;
  // Listen on the given address without any authentication mechanism.
  builder.AddListeningPort(address, grpc::InsecureServerCredentials());
  // Register "service" as the instance through which we'll communicate with
  // clients. In this case it corresponds to an *synchronous* service.
  builder.RegisterService(&service);
  // Finally assemble the server.
  std::unique_ptr<Server> server(builder.BuildAndStart());
  std::cout << "Server listening on " << address << std::endl;
  // Wait for the server to shutdown. Note that some other thread must be
  // responsible for shutting down the server for this call to ever return.
  server->Wait();

  return 0;
}