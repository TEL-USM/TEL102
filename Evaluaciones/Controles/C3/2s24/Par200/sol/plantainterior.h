#ifndef PLANTAINTERIOR_H
#define PLANTAINTERIOR_H

#include "planta.h"
#include <string>

class PlantaInterior : public Planta {
private:
    int humedadIdeal;  // Humedad ideal para la planta

public:
    // Constructor
    // Como atributos son protected, también se puede inicializar directamente
    // a los atributos de la clase base
    PlantaInterior(std::string nombre, int altura, int edad, int humedadIdeal)
    : Planta(nombre, altura, edad), humedadIdeal(humedadIdeal) {}

    // Método para mostrar detalles

    void mostrarDetalles();
};

#endif // PLANTAINTERIOR_H
