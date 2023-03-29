#ifndef UDPSENDER_H
#define UDPSENDER_H

#include <iostream>
#include <WS2tcpip.h>

#pragma comment (lib, "ws2_32.lib")

class UDPSender {
private:
	SOCKET m_socket; // Socket tanýmlayýcýsý
	sockaddr_in m_server; // Sunucu adres bilgisi
public:
	UDPSender(); // yapýcý fonksiyon
	~UDPSender(); // yýkýcý fonksiyon
	bool Send(const std::string& message); // mesaj gönderme fonksiyonu
};

#endif