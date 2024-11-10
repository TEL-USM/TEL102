#include "funciones.h"
#include <iostream>

int main() {
    std::vector<Planta*> invernadero;
    int opcion;

    do {
        std::cout << "1. Registrar planta" << std::endl;
        std::cout << "2. Mostrar invernadero" << std::endl;
        std::cout << "3. Salir" << std::endl;
        std::cout << "Ingrese una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                registrarPlanta(invernadero);
                break;
            case 2:
                mostrarInvernadero(invernadero);
                break;
            case 3:
                liberarInvernadero(invernadero);
                std::cout << "Saliendo del programa..." << std::endl;
                break;
            default:
                std::cout << "Opción no válida, intente nuevamente." << std::endl;
                break;
        }
    } while (opcion != 3);

    return 0;
}
