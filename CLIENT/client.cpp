/*Yazan: Aybüke SÖKMEN
* Versiyon: 1.0.0
*/
#include <iostream>
#include "UDPSender.h"

#define SERVER_IP "127.0.0.1" // Sunucu IP adresi
#define SERVER_PORT 5939    // Sunucu port numarasý

int main(int argc, char* argv[]) {
    try {
        // UDP gönderici oluþturulur
        UDPSender sender;

        // Mesaj gönderilir
        std::string message(argv[1]);
        if (!sender.Send(message)) {
            std::cerr << "Mesaj gönderilemedi." << std::endl;
            return EXIT_FAILURE;
        }

        return EXIT_SUCCESS;
    }
    catch (const std::exception& e) {
        std::cerr << "Hata oluþtu: " << e.what() << std::endl;
        return EXIT_FAILURE;
    }
}
