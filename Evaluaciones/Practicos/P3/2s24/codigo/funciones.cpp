#include "funciones.h"
#include <iostream>

// Función para agregar una nueva consulta al vector
void agregarConsulta(std::vector<Consulta*>& consultas, Consulta* nuevaConsulta) {
    consultas.push_back(nuevaConsulta);
    std::cout << "Consulta registrada exitosamente." << std::endl;
}

// Función para listar todas las consultas registradas
void listarConsultas(std::vector<Consulta*>& consultas) {
    if (consultas.empty()) {
        std::cout << "No hay consultas registradas." << std::endl;
        return;
    }

    std::cout << "Consultas registradas:" << std::endl;
    for (size_t i = 0; i < consultas.size(); ++i) {
        std::cout << i + 1 << ". ";
        consultas[i]->mostrarDetalles();
        std::cout << std::endl;
    }
}

// Función para confirmar o cancelar una consulta específica
void gestionarConsulta(std::vector<Consulta*>& consultas, int indice) {
    if (indice < 0 || indice >= consultas.size()) {
        std::cout << "Índice de consulta no válido." << std::endl;
        return;
    }

    char opcion;
    std::cout << "¿Desea confirmar (C) o cancelar (X) la consulta? ";
    std::cin >> opcion;

    if (opcion == 'C' || opcion == 'c') {
        consultas[indice]->confirmarReserva();
    } else if (opcion == 'X' || opcion == 'x') {
        delete consultas[indice];
        consultas.erase(consultas.begin() + indice);
        std::cout << "Consulta cancelada y eliminada correctamente." << std::endl;
    } else {
        std::cout << "Opción no válida." << std::endl;
    }
}

// Función para liberar memoria dinámica y limpiar el vector
void liberarMemoria(std::vector<Consulta*>& consultas) {
    for(int i = 0; i<consultas.size(); i++){
        delete consultas[i];
    }
    consultas.clear();
    std::cout << "Memoria liberada correctamente." << std::endl;
}
