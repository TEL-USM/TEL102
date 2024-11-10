#include "funciones.h"
#include <iostream>

void registrarVehiculo(std::vector<Vehiculo*>& flota) {
    int opcion;
    std::cout << "Seleccione el tipo de vehiculo a registrar:\n";
    std::cout << "1. Vehiculo a Bencina\n";
    std::cout << "2. Vehiculo Electrico\n";
    std::cout << "3. Vehiculo Hibrido\n";
    std::cin >> opcion;

    std::string marca, modelo;
    int anio;
    std::cout << "Ingrese la marca: ";
    std::cin >> marca;
    std::cout << "Ingrese el modelo: ";
    std::cin >> modelo;
    std::cout << "Ingrese el año de fabricación: ";
    std::cin >> anio;

    switch(opcion) {
        case 1:{ 
            double capacidadEstanque;
            std::cout << "Ingrese la capacidad del estanque (L): ";
            std::cin >> capacidadEstanque;
            flota.push_back(new VehiculoBencina(marca, modelo, anio, capacidadEstanque));
            break;
        }
        case 2: {
            double capacidadBateria;
            std::cout << "Ingrese la capacidad de la batería (kWh): ";
            std::cin >> capacidadBateria;
            flota.push_back(new VehiculoElectrico(marca, modelo, anio, capacidadBateria));
            break;
        }
        case 3:{
            double capacidadBateria;
            std::string tipoCombustible;
            std::cout << "Ingrese la capacidad de la batería (kWh): ";
            std::cin >> capacidadBateria;
            std::cout << "Ingrese el tipo de combustible (ej. Gasolina, Diésel): ";
            std::cin >> tipoCombustible;
            flota.push_back(new VehiculoHibrido(marca, modelo, anio, capacidadBateria, tipoCombustible));
            break;
        }
        default:
            std::cout << "Opción inválida. Intente nuevamente.\n";
            break;
    }
}

void mostrarFlota(const std::vector<Vehiculo*>& flota) {
    for (int i = 0; i<flota.size(); i++){
        flota[i]->mostrarDetalles();
    }
}

void liberarFlota(std::vector<Vehiculo*>& flota) {
    for(int i=0; i < flota.size(); i++){
        delete flota[i];
    }
    flota.clear();
}
