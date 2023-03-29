#include "UDPSender.h"

#define SERVER_IP "127.0.0.1" // Sunucu IP adresi
#define SERVER_PORT 5939    // Sunucu port numaras�

UDPSender::UDPSender() 
{
	// WinSock ba�lat�l�r
	WSADATA data;
	WORD version = MAKEWORD(2, 2);
	int wsOk = WSAStartup(version, &data);

	if (wsOk != 0) {
		throw std::runtime_error("Winsock baslatilamadi!");// Winsock ba�lat�lamazsa hata mesaj� 
	}
	// Socket adres bilgisi tan�mlan�r

	m_server.sin_family = AF_INET;
	m_server.sin_port = htons(SERVER_PORT);
	inet_pton(AF_INET, SERVER_IP, &m_server.sin_addr);

	// Socket olu�turulur
	m_socket = socket(AF_INET, SOCK_DGRAM, 0);
	if (m_socket == INVALID_SOCKET) {
		WSACleanup();
		throw std::runtime_error("Socket olusturulamadi!");
	}
}

UDPSender::~UDPSender() {
	closesocket(m_socket);
	WSACleanup();
}

bool UDPSender::Send(const std::string& message) {
	int sendOk = sendto(m_socket, message.c_str(), message.size() + 1, 0, (sockaddr*)&m_server, sizeof(m_server));
	if (sendOk == SOCKET_ERROR) {
		std::cerr << "G�nderme hatasi: " << WSAGetLastError() << std::endl;// G�nderme hatas� varsa hata mesaj� verilir
		return false;
	}
	return true;
}
