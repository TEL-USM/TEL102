#include <iostream>
#include <vector>
#include "vehiculo.h"
#include "funciones.h"

int main() {
    // Flota de Vehículos
    std::vector<Vehiculo*> flota;
    char opcion;

    do {
        std::cout << std::endl << "Menu Principal:" << std::endl;
        std::cout << "1. Registrar Vehiculo" << std::endl;
        std::cout << "2. Mostrar Flota" << std::endl;
        std::cout << "3. Salir" << std::endl;
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch(opcion) {
            case '1':
                registrarVehiculo(flota);
                break;
            case '2':
                mostrarFlota(flota);
                break;
            case '3':
                std::cout << "Saliendo del programa..." << std::endl;
                liberarFlota(flota);
                break;
            default:
                std::cout << "Opción inválida." << std::endl;
        }
    } while(opcion != '3');

    return 0;
}
