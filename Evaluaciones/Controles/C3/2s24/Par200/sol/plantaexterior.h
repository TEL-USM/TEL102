#ifndef PLANTAEXTERIOR_H
#define PLANTAEXTERIOR_H

#include "planta.h"
#include <string>

class PlantaExterior : public Planta {
private:
    int nivelExposicionSolar;  // Nivel de exposición solar

public:
    // Constructor
    // Como atributos son protected, también se puede inicializar directamente
    // a los atributos de la clase base
    PlantaExterior(std::string nombre, int altura, int edad, int nivelExposicionSolar)
    : Planta(nombre, altura, edad), nivelExposicionSolar(nivelExposicionSolar) {}

    // Método para mostrar detalles
    void mostrarDetalles();
};

#endif // PLANTAEXTERIOR_H
