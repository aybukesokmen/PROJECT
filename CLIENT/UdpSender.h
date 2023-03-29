#ifndef UDPSENDER_H
#define UDPSENDER_H

#include <iostream>
#include <WS2tcpip.h>

#pragma comment (lib, "ws2_32.lib")

class UDPSender {
private:
	SOCKET m_socket; // Socket tan�mlay�c�s�
	sockaddr_in m_server; // Sunucu adres bilgisi
public:
	UDPSender(); // yap�c� fonksiyon
	~UDPSender(); // y�k�c� fonksiyon
	bool Send(const std::string& message); // mesaj g�nderme fonksiyonu
};

#endif