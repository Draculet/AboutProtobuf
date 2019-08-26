#include <iostream>
#include <google/protobuf/service.h>
#include <google/protobuf/message.h>
#include "RpcServer.h"
#include "echo.pb.h"
using namespace std;

class EchoServiceImpl : public echo::EchoService {
public:
	EchoServiceImpl() {};
	virtual void Echo(::google::protobuf::RpcController* controller,
	                   const ::echo::EchoRequest* request,
	                   ::echo::EchoResponse* response,
	                   ::google::protobuf::Closure* done) 
        {
            cout << "Recv message " << request->request() << endl;
		    response->set_response(request->request());
		    if (done) 
            {
			    done->Run();
		    }
	    }
	    
	   virtual void Echo2(::google::protobuf::RpcController* controller,
	                   const ::echo::EchoRequest* request,
	                   ::echo::EchoResponse* response,
	                   ::google::protobuf::Closure* done) 
        {
            cout << "Recv message " << request->request() << endl;
            string s = string("Echo2 ") + request->request();
		    response->set_response(s.c_str());
		    if (done) 
            {
			    done->Run();
		    }
	    }
	    
	    virtual void Echo3(::google::protobuf::RpcController* controller,
	                   const ::echo::EchoRequest* request,
	                   ::echo::EchoResponse* response,
	                   ::google::protobuf::Closure* done) 
        {
            cout << "Recv message " << request->request() << endl;
            string s = string("Echo3 ") + request->request();
		    response->set_response(s.c_str());
		    if (done) 
            {
			    done->Run();
		    }
	    }
};

class NoEchoServiceImpl : public echo::NoEchoService {
public:
	NoEchoServiceImpl() {};
	virtual void noEcho(::google::protobuf::RpcController* controller,
	                   const ::echo::EchoRequest* request,
	                   ::echo::EchoResponse* response,
	                   ::google::protobuf::Closure* done) 
        {
            cout << "Recv message " << request->request() << endl;
		    response->set_response("noEcho");
		    if (done) 
            {
			    done->Run();
		    }
	    }
};

    int main(int argc, char *argv[])
    {
		myRpc::RpcServer server;
		::google::protobuf::Service *service = new EchoServiceImpl();
		::google::protobuf::Service *service2 = new NoEchoServiceImpl();
		server.RegisterService(service);
		server.RegisterService(service2);
		server.Start();
	    return 0;
    }
