#include <iostream>
#include <WS2tcpip.h>

#pragma comment (lib, "ws2_32.lib")


using namespace std;

int main()
{
    int PORT = 5939;// Sunucu port numaras�.
    cout << "Port Numaranizi giriniz:" << endl;
    cin >> PORT;
    WSADATA data;// Winsock API i�in gerekli veri yap�s�n�n tan�m�
    WORD version = MAKEWORD(2, 2);// Winsock API s�r�m�.
    int wsOk = WSAStartup(version, &data);
    if (wsOk != 0)
    {
        cout << "Winsock ba�lat�lamad�! Hata kodu: " << wsOk << endl;
        return 1;
    }
    SOCKET in = socket(AF_INET, SOCK_DGRAM, 0);// �leti�im i�in bir soket olu�turuldu.
    if (in == INVALID_SOCKET)
    {
        cout << "Socket olusturulamadi! Hata kodu: " << WSAGetLastError() << endl;
        WSACleanup();
        return 1;
    }
    // Sunucu adres bilgisini tan�mland�.
    sockaddr_in serverHint;
    serverHint.sin_addr.S_un.S_addr = ADDR_ANY;
    serverHint.sin_family = AF_INET;
    serverHint.sin_port = htons(PORT);

    if (bind(in, (sockaddr*)&serverHint, sizeof(serverHint)) == SOCKET_ERROR)
    {
        cout << "Soket ba�lanamad�! Hata kodu: " << WSAGetLastError() << endl;
        closesocket(in);
        WSACleanup();
        return 1;
    }
    // �stemci adres bilgisi i�in soket adresi yap�s� tan�mland�.
    sockaddr_in client;
    int clientLength = sizeof(client);
    char buf[1024];

    while (true)
    {
        ZeroMemory(&client, clientLength);// �stemci ve mesaj tamponunu s�f�rland�.
        ZeroMemory(buf, 1024);

        // �stemciden gelen mesaj� al�nd�.
        int bytesIn = recvfrom(in, buf, 1024, 0, (sockaddr*)&client, &clientLength);
        if (bytesIn == SOCKET_ERROR)
        {
            cout << "�stemciden mesaj alinamadi! Hata kodu: " << WSAGetLastError() << endl;
            continue;
        }
        // �stemcinin IP adresi.
        char clientIp[256];
        ZeroMemory(clientIp, 256);
        inet_ntop(AF_INET, &client.sin_addr, clientIp, 256);

        // Al�nan mesaj� ve g�nderen IP adresi ekrana yaz�ld�.
        cout << "Mesaj alindi. Gonderen IP adresi: " << clientIp << " Mesaj: " << buf << endl;
    }

    closesocket(in);
    WSACleanup();
    return 0;
}