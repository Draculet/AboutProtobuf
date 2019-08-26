#include <google/protobuf/descriptor.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/service.h>
#include <google/protobuf/message.h>
#include "RpcServer.h"
#include <sys/socket.h>
#include <unistd.h>
#include <iostream>
#include <netinet/in.h>
#include <arpa/inet.h>
using namespace std;
void myRpc::RpcServer::RegisterService(google::protobuf::Service *service)
{
	const google::protobuf::ServiceDescriptor *descriptor = service->GetDescriptor();
	for (int i = 0; i < descriptor->method_count(); ++i) 
	{
		const google::protobuf::MethodDescriptor *method = descriptor->method(i);
		const google::protobuf::Message *request = &service->GetRequestPrototype(method);//获取service的request类型(即EchoRequest)
		const google::protobuf::Message *response = &service->GetResponsePrototype(method);

		RpcMethod met(service, request, response, method);
		string name = string(method->full_name());
    	int methodCode = 0;
    	for (int i = 0; i < name.size(); i++)
    	{
    		methodCode += int(name[i]);
    	}
        map_[methodCode] = met;
		//std::string methodname=std::string(method->full_name());
		//uint64_t hash = ::CityHash64(methodname.c_str(),methodname.length());
		//RpcMethodMap::const_iterator iter = rpc_method_map_.find(hash);
		//if (iter == rpc_method_map_.end())
		//	rpc_method_map_[hash] = rpc_method;
	}
}

void myRpc::RpcServer::Start()
{
	int Code = 0;
    char buf[1024] = {0};
        struct sockaddr_in serveraddr;
        int fd = socket(AF_INET, SOCK_STREAM, 0);
        if (fd == -1)
        {
            perror("socket");
            exit(-1);
        }
        bzero(&serveraddr,sizeof(serveraddr));
        serveraddr.sin_family = AF_INET;
        serveraddr.sin_port = htons(8832);
        //WARN
        //serveraddr.sin_addr.s_addr = htonl(ip.c_str());
        serveraddr.sin_addr.s_addr = htonl(INADDR_ANY);
        int ret = bind(fd, (struct sockaddr *)&serveraddr,sizeof(serveraddr));//绑定IP和端口
        if(ret != 0)
        {
            close(fd);
            printf("bind error:%s\n",strerror(errno));
            exit(-1);
        }

        ret = listen(fd, 20);
        if(ret!=0)
        {
            close(fd);
            printf("listen error:%s\n",strerror(errno));
            exit(-1);
        }
        struct sockaddr_in clientaddr;
        socklen_t len = sizeof(clientaddr);
        bzero(&clientaddr,sizeof(clientaddr));

    while (1) 
    {
        int connfd = accept(fd, (struct sockaddr *) &clientaddr, &len);
        char ip[20] = {0};
        printf("%s 连接到服务器,端口号 %d\n",inet_ntop(AF_INET, &clientaddr.sin_addr, ip ,sizeof(ip)),ntohs(clientaddr.sin_port));
        int ret = read(connfd, buf, 1024);
        cout << "Recv " << ret << " bytes" << endl;
		memcpy(&Code, buf, sizeof(Code));
		auto iter = map_.find(Code);
		if (iter == map_.end())
        {
			continue;
		}
		RpcMethod method = iter->second;
		const google::protobuf::MethodDescriptor *methodDes = method.method_;
		google::protobuf::Message *request = method.request_->New();//request是基类Message指针，不知道具体服务对应的Message子类(如EchoRequest),所以需要用New()来获取实体.
		google::protobuf::Message *response = method.response_->New();
		request->ParseFromString(buf + sizeof(Code));
		method.service_->CallMethod(methodDes, NULL, request, response, NULL);//此处的实现在echo.pb.cc中,CallMethod根据methodDes确定调用的函数.
		size_t l = response->ByteSize();
        memset(buf, 0, 1024);
		response->SerializeToArray(buf, l);
        write(connfd, buf, l);
		//sock.send(buf,msg_len,0);
		//delete request;
		//delete response;
	}
}
