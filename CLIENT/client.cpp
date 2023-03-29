/*Yazan: Ayb�ke S�KMEN
* Versiyon: 1.0.0
*/
#include <iostream>
#include "UDPSender.h"

#define SERVER_IP "127.0.0.1" // Sunucu IP adresi
#define SERVER_PORT 5939    // Sunucu port numaras�

int main(int argc, char* argv[]) {
    try {
        // UDP g�nderici olu�turulur
        UDPSender sender;

        // Mesaj g�nderilir
        std::string message(argv[1]);
        if (!sender.Send(message)) {
            std::cerr << "Mesaj g�nderilemedi." << std::endl;
            return EXIT_FAILURE;
        }

        return EXIT_SUCCESS;
    }
    catch (const std::exception& e) {
        std::cerr << "Hata olu�tu: " << e.what() << std::endl;
        return EXIT_FAILURE;
    }
}
