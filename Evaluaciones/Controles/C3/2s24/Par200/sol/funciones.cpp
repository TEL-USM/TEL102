#include "funciones.h"
#include <iostream>

void registrarPlanta(std::vector<Planta*>& invernadero) {
    int tipo;
    std::string nombre;
    int altura, edad;

    std::cout << "Ingrese el tipo de planta (1-Interior, 2-Exterior, 3-Hidropónica): ";
    std::cin >> tipo;
    std::cin.ignore();

    std::cout << "Ingrese el nombre de la planta: ";
    std::getline(std::cin, nombre);

    std::cout << "Ingrese la altura de la planta (cm): ";
    std::cin >> altura;

    std::cout << "Ingrese la edad de la planta (meses): ";
    std::cin >> edad;

    switch (tipo) {
        case 1: {
            int humedadIdeal;
            std::cout << "Ingrese la humedad ideal (%): ";
            std::cin >> humedadIdeal;
            invernadero.push_back(new PlantaInterior(nombre, altura, edad, humedadIdeal));
            break;
        }
        case 2: {
            int nivelExposicionSolar;
            std::cout << "Ingrese el nivel de exposición solar: ";
            std::cin >> nivelExposicionSolar;
            invernadero.push_back(new PlantaExterior(nombre, altura, edad, nivelExposicionSolar));
            break;
        }
        case 3: {
            int nivelNutrientes, capacidadAgua;
            std::cout << "Ingrese el nivel de nutrientes: ";
            std::cin >> nivelNutrientes;
            std::cout << "Ingrese la capacidad de agua (L): ";
            std::cin >> capacidadAgua;
            invernadero.push_back(new PlantaHidroponica(nombre, altura, edad, nivelNutrientes, capacidadAgua));
            break;
        }
        default:
            std::cout << "Tipo de planta no válido." << std::endl;
            break;
    }
}

void mostrarInvernadero(const std::vector<Planta*>& invernadero) {
    for (int i = 0; i<invernadero.size(); i++){
        invernadero[i]->mostrarDetalles();
        std::cout << std::endl;
    }
}

void liberarInvernadero(std::vector<Planta*>& invernadero) {
    for(int i=0; i<invernadero.size(); i++){
        delete invernadero[i];
    }
    invernadero.clear();
}
