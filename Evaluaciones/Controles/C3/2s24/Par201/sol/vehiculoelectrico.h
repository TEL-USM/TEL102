#ifndef VEHICULO_ELECTRICO_H
#define VEHICULO_ELECTRICO_H

#include "vehiculo.h"
#include <iostream>

class VehiculoElectrico : public Vehiculo {
private:
    double capacidadBateria; // en kWh

public:
    VehiculoElectrico(std::string marca, std::string modelo, int anio, double capacidadBateria)
        : Vehiculo(marca, modelo, anio), capacidadBateria(capacidadBateria) {}

    void mostrarDetalles();
};

#endif // VEHICULO_ELECTRICO_H
