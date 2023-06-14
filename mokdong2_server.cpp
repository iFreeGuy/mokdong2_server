#include <iostream>
#include "mokdong/server.h"
#include "mokdong/service_server.h"
#include <boost/asio.hpp>

using namespace mokdong::network;


void server_run()
{
    server server;

    if (!server.init())
    {
        std::cout << "fail : server.init()" << std::endl;
    }

    server.run();
}

void service_server_run()
{
    service_server server;

    boost::system::error_code ec;
    if (!server.init())
    {
        std::cout << "fail : service_server.init()" << std::endl;
    }

    server.run(ec);
}

int main()
{
    //server_run();
    service_server_run();
}

