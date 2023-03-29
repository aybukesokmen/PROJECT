#include <iostream>
#include <WS2tcpip.h>

#pragma comment (lib, "ws2_32.lib")


using namespace std;

int main()
{
    int PORT = 5939;// Sunucu port numarasý.
    cout << "Port Numaranizi giriniz:" << endl;
    cin >> PORT;
    WSADATA data;// Winsock API için gerekli veri yapýsýnýn tanýmý
    WORD version = MAKEWORD(2, 2);// Winsock API sürümü.
    int wsOk = WSAStartup(version, &data);
    if (wsOk != 0)
    {
        cout << "Winsock baþlatýlamadý! Hata kodu: " << wsOk << endl;
        return 1;
    }
    SOCKET in = socket(AF_INET, SOCK_DGRAM, 0);// Ýletiþim için bir soket oluþturuldu.
    if (in == INVALID_SOCKET)
    {
        cout << "Socket olusturulamadi! Hata kodu: " << WSAGetLastError() << endl;
        WSACleanup();
        return 1;
    }
    // Sunucu adres bilgisini tanýmlandý.
    sockaddr_in serverHint;
    serverHint.sin_addr.S_un.S_addr = ADDR_ANY;
    serverHint.sin_family = AF_INET;
    serverHint.sin_port = htons(PORT);

    if (bind(in, (sockaddr*)&serverHint, sizeof(serverHint)) == SOCKET_ERROR)
    {
        cout << "Soket baðlanamadý! Hata kodu: " << WSAGetLastError() << endl;
        closesocket(in);
        WSACleanup();
        return 1;
    }
    // Ýstemci adres bilgisi için soket adresi yapýsý tanýmlandý.
    sockaddr_in client;
    int clientLength = sizeof(client);
    char buf[1024];

    while (true)
    {
        ZeroMemory(&client, clientLength);// Ýstemci ve mesaj tamponunu sýfýrlandý.
        ZeroMemory(buf, 1024);

        // Ýstemciden gelen mesajý alýndý.
        int bytesIn = recvfrom(in, buf, 1024, 0, (sockaddr*)&client, &clientLength);
        if (bytesIn == SOCKET_ERROR)
        {
            cout << "Ýstemciden mesaj alinamadi! Hata kodu: " << WSAGetLastError() << endl;
            continue;
        }
        // Ýstemcinin IP adresi.
        char clientIp[256];
        ZeroMemory(clientIp, 256);
        inet_ntop(AF_INET, &client.sin_addr, clientIp, 256);

        // Alýnan mesajý ve gönderen IP adresi ekrana yazýldý.
        cout << "Mesaj alindi. Gonderen IP adresi: " << clientIp << " Mesaj: " << buf << endl;
    }

    closesocket(in);
    WSACleanup();
    return 0;
}