#ifndef UDPSERVER_H
#define UDPSERVER_H

#include <iostream>
#include <stdexcept>
#include <WinSock2.h>

#define SERVER_PORT 5939

class UdpServer {
public:
    UdpServer();
    ~UdpServer();
    bool Start();
    void Stop();
    bool Receive(char* buffer, int bufferSize, sockaddr_in* clientAddress);
    bool Send(const char* message, int messageSize, const sockaddr_in* clientAddress);

private:
    WSADATA data;
    SOCKET serverSocket;
    sockaddr_in serverAddress;
};

#endif
