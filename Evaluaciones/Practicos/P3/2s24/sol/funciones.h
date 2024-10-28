#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <vector>
#include "consulta.h"

// Función para agregar una nueva consulta al vector
void agregarConsulta(std::vector<Consulta*>& consultas, Consulta* nuevaConsulta);

// Función para listar todas las consultas registradas
void listarConsultas(std::vector<Consulta*>& consultas);

// Función para confirmar o cancelar una consulta específica
void gestionarConsulta(std::vector<Consulta*>& consultas, int indice);

// Función para liberar memoria dinámica y limpiar el vector
void liberarMemoria(std::vector<Consulta*>& consultas);

#endif // FUNCIONES_H
