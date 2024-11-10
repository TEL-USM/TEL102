#ifndef PLANTA_H
#define PLANTA_H

#include <string>
#include <iostream>

// Clase abstracta para representar una planta
class Planta {
protected:
    std::string nombre;
    int altura;  // altura en cm
    int edad;    // edad en meses

public:
    // Constructor
    Planta(std::string nombre, int altura, int edad) : nombre(nombre), altura(altura), edad(edad) {}

    // Método virtual puro
    virtual void mostrarDetalles() = 0;
};

#endif // PLANTA_H
