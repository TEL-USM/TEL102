#include "consultaespecializada.h"
#include <iostream>

// Constructor de la clase derivada
ConsultaEspecializada::ConsultaEspecializada(std::string nombrePaciente, std::string especialidad, std::string fecha, float costo)
    : Consulta(nombrePaciente, especialidad, fecha), costoAdicional(costo) {}

// Sobrescribir el método para mostrar detalles de la consulta
void ConsultaEspecializada::mostrarDetalles() {
    std::cout << "Consulta Especializada:" << std::endl;
    std::cout << "Paciente: " << getNombrePaciente() << std::endl;
    std::cout << "Especialidad: " << getEspecialidad() << std::endl;
    std::cout << "Fecha: " << getFechaConsulta() << std::endl;
    if(isReservaConfirmada())
        std::cout << "Reserva confirmada." << std::endl;
    else
        std::cout << "Reserva sin confirmar." << std::endl;
    std::cout << "Costo adicional: $" << getCostoAdicional() << std::endl;
}

// Getter para el costo adicional
float ConsultaEspecializada::getCostoAdicional() {
    return costoAdicional;
}
