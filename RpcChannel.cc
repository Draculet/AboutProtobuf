#include "RpcChannel.h"
#include <google/protobuf/descriptor.h>
#include <sys/socket.h>
#include <unistd.h>
#include <iostream>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include "echo.pb.h"

using namespace std;
void myRpc::RpcChannel::CallMethod(const google::protobuf::MethodDescriptor* method,
                                  google::protobuf::RpcController* controller,
                                  const google::protobuf::Message* request,
                                  google::protobuf::Message* response,
                                  google::protobuf::Closure* done)
{
    string name = string(method->full_name());
    cout << "Method Full Name: " << name << endl;
    int methodCode = 0;
    for (int i = 0; i < name.size(); i++)
    {
    	methodCode += int(name[i]);
    }
    cout << "methodCode num : " << methodCode << endl;
    char buf[1024] = {0};
    memcpy(buf, &methodCode, sizeof(methodCode));
    request->SerializeToArray(buf+sizeof(methodCode), request->ByteSize());

    int clientFd,ret;
    struct sockaddr_in serveraddr;
    clientFd=socket(AF_INET,SOCK_STREAM,0);//创建socket
    if(clientFd < 0)
    {
        printf("socket error:%s\n",strerror(errno));
        exit(-1);
    }
    bzero(&serveraddr,sizeof(serveraddr));
    serveraddr.sin_family=AF_INET;
    serveraddr.sin_port=htons(8832);
    inet_pton(AF_INET,"127.0.0.1",&serveraddr.sin_addr);
    ret=connect(clientFd,(struct sockaddr *)&serveraddr,sizeof(serveraddr));
    if(ret!=0)
    {
    	close(clientFd);
    	printf("connect error:%s\n",strerror(errno));
        exit(-1);
    }
    write(clientFd, buf, sizeof(methodCode) + request->ByteSize());
    cout << "Send Success" << endl;
    memset(buf, 0, 1024);
    ret = read(clientFd, buf, 1024);
    if (ret == 0)
    {
        cout << "Peer has closed" << endl;
    }
    string tmp(buf);
    response->ParseFromString(tmp);
}
