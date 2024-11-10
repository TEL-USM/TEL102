#ifndef VEHICULO_HIBRIDO_H
#define VEHICULO_HIBRIDO_H

#include "vehiculo.h"
#include <iostream>

class VehiculoHibrido : public Vehiculo {
private:
    double capacidadBateria; // en kWh
    std::string tipoCombustible;

public:
    VehiculoHibrido(std::string marca, std::string modelo, int anio, double capacidadBateria, std::string tipoCombustible)
        : Vehiculo(marca, modelo, anio), capacidadBateria(capacidadBateria), tipoCombustible(tipoCombustible) {}

    void mostrarDetalles();
};

#endif // VEHICULO_HIBRIDO_H
