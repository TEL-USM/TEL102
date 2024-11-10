#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <vector>
#include "planta.h"
#include "plantainterior.h"
#include "plantaexterior.h"
#include "plantahidroponica.h"

// Funciones de gestión del invernadero
void registrarPlanta(std::vector<Planta*>& invernadero);
void mostrarInvernadero(const std::vector<Planta*>& invernadero);
void liberarInvernadero(std::vector<Planta*>& invernadero);

#endif // FUNCIONES_H
