#include <iostream>
#include "RpcChannel.h"
#include "echo.pb.h"
using namespace std;
int main(void)
{
    echo::EchoRequest request;//EchoRequest继承自Messeage,在proto文件中定义的message类型
    request.set_request("Hello Rpc");
    myRpc::RpcChannel rpc;
    echo::EchoService::Stub stub(&rpc);
    echo::NoEchoService::Stub stub2(&rpc);
    echo::EchoResponse response;
    stub.Echo(NULL, &request, &response, NULL);//此处实际是rpc->CallMethod();
    cout << "Recv Response " << response.response() << endl;
    stub.Echo2(NULL, &request, &response, NULL);
    cout << "Recv Response " << response.response() << endl;
    stub.Echo3(NULL, &request, &response, NULL);
    cout << "Recv Response " << response.response() << endl;
    stub2.noEcho(NULL, &request, &response, NULL);
    cout << "Recv Response " << response.response() << endl;
}
