#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
#include <iostream>

class Vehiculo {
protected:
    std::string marca;
    std::string modelo;
    int anioFabricacion;

public:
    // Constructor
    Vehiculo(std::string marca, std::string modelo, int anio) : marca(marca), modelo(modelo), anioFabricacion(anio) {}

    virtual void mostrarDetalles() = 0; // Método virtual puro

};

#endif // VEHICULO_H
