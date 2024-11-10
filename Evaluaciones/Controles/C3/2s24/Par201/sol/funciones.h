#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <vector>
#include "vehiculo.h"
#include "vehiculobencina.h"
#include "vehiculoelectrico.h"
#include "vehiculohibrido.h"

void registrarVehiculo(std::vector<Vehiculo*>& flota);
void mostrarFlota(const std::vector<Vehiculo*>& flota);
void liberarFlota(std::vector<Vehiculo*>& flota);

#endif // FUNCIONES_H
