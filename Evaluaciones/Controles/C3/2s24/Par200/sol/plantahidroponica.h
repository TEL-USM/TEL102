#ifndef PLANTAHIDROPONICA_H
#define PLANTAHIDROPONICA_H

#include "planta.h"
#include <string>

class PlantaHidroponica : public Planta {
private:
    int nivelNutrientes; // Nivel de nutrientes en el sistema hidropónico
    int capacidadAgua;   // Capacidad de agua en el sistema hidropónico

public:
    // Constructor
    // Como atributos son protected, también se puede inicializar directamente
    // a los atributos de la clase base
    PlantaHidroponica(std::string nombre, int altura, int edad, int nivelNutrientes, int capacidadAgua)
    : Planta(nombre, altura, edad), nivelNutrientes(nivelNutrientes), capacidadAgua(capacidadAgua) {}

    // Método para mostrar detalles
    void mostrarDetalles();
};

#endif // PLANTAHIDROPONICA_H
