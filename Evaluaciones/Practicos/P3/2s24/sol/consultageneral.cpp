#include "consultageneral.h"
#include <iostream>

// Constructor de la clase derivada
ConsultaGeneral::ConsultaGeneral(std::string nombrePaciente, std::string especialidad, std::string fecha, std::string nombreMedico)
    : Consulta(nombrePaciente, especialidad, fecha), nombreMedico(nombreMedico) {}

// Sobrescribir el método para mostrar detalles de la consulta
void ConsultaGeneral::mostrarDetalles() {
    std::cout << "Consulta General:" << std::endl;
    std::cout << "Paciente: " << getNombrePaciente() << std::endl;
    std::cout << "Especialidad: " << getEspecialidad() << std::endl;
    std::cout << "Fecha: " << getFechaConsulta() << std::endl;
    if(isReservaConfirmada())
        std::cout << "Reserva confirmada." << std::endl;
    else
        std::cout << "Reserva sin confirmar." << std::endl;
    std::cout << "Médico: " << getNombreMedico() << std::endl;
}

// Getter para el nombre del médico
std::string ConsultaGeneral::getNombreMedico() {
    return nombreMedico;
}
