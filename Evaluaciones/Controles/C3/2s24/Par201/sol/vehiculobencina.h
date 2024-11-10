#ifndef VEHICULO_BENCINA_H
#define VEHICULO_BENCINA_H

#include "vehiculo.h"
#include <iostream>

class VehiculoBencina : public Vehiculo {
private:
    double capacidadEstanque;

public:
    VehiculoBencina(std::string marca, std::string modelo, int anio, double capacidadEstanque)
        : Vehiculo(marca, modelo, anio), capacidadEstanque(capacidadEstanque) {}

    void mostrarDetalles();
};

#endif // VEHICULO_BENCINA_H
