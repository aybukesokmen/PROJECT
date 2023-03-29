#include "UdpServer.h"

bool UdpServer::Start() {
    // The server is already started in the constructor
    return true;
}

void UdpServer::Stop() {
    // Just call the destructor to stop the server
    delete this;
}

bool UdpServer::Receive(char* buffer, int bufferSize, sockaddr_in* clientAddress) {
    int clientLength = sizeof(sockaddr_in);
    int bytesIn = recvfrom(serverSocket, buffer, bufferSize, 0, (sockaddr*)clientAddress, &clientLength);
    if (bytesIn == SOCKET_ERROR)
    {
        std::cout << "Ýstemciden mesaj alinamadi! Hata kodu: " << WSAGetLastError() << std::endl;
        return false;
    }
    return true;
}

bool UdpServer::Send(const char* message, int messageSize, const sockaddr_in* clientAddress) {
    int bytesSent = sendto(serverSocket, message, messageSize, 0, (const sockaddr*)clientAddress, sizeof(sockaddr_in));
    if (bytesSent != messageSize) {
        std::cerr << "Hata: Mesaj gonderilemedi! Hata kodu: " << WSAGetLastError() << std::endl;
        return false;
    }
    return true;
}
