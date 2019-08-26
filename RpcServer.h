#include <string>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/service.h>
#include <google/protobuf/message.h>
#include <map>
using std::cout;
using std::endl;

class RpcMethod
{
    public:
    RpcMethod()
    {	
    	cout << "Default Construction" << endl;
    }
	RpcMethod(google::protobuf::Service *service,
	          const google::protobuf::Message *request,
	          const google::protobuf::Message *response,
	          const google::protobuf::MethodDescriptor *method)
		: service_(service),
		  request_(request),
		  response_(response),
		  method_(method) 
    {
    	cout << "Common Construction" << endl;
	}
	
	RpcMethod(const RpcMethod& rpcm)
	{
		cout << "Copy Construction" << endl;
		service_ = rpcm.service_;
		request_ = rpcm.request_;
		response_ = rpcm.response_;
		method_ = rpcm.method_;
	}
	~RpcMethod()
	{
		cout << "DeConstruction" << endl;
	}
	google::protobuf::Service *service_;
	const google::protobuf::Message *request_;
	const google::protobuf::Message *response_;
	const google::protobuf::MethodDescriptor *method_;
};
namespace myRpc
{
    class RpcServer 
    {
	    typedef std::map<int ,RpcMethod> RpcMethodMap;
    public:
	    void Start();
	    void RegisterService(google::protobuf::Service *service);
    private:
	    RpcMethodMap map_;
    };
}
