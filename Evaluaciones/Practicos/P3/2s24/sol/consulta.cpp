#include "consulta.h"
#include <iostream>

// Constructor de la clase base
Consulta::Consulta(std::string nombre, std::string especialidad, std::string fecha)
    : nombrePaciente(nombre), especialidad(especialidad), fechaConsulta(fecha), reservaConfirmada(false) {}

void Consulta::confirmarReserva() {
    if (!reservaConfirmada) {
        reservaConfirmada = true;
        std::cout << "Reserva confirmada para " << nombrePaciente << "." << std::endl;
    } else {
        std::cout << "La reserva ya ha sido confirmada previamente." << std::endl;
    }
}

// Getters de la clase base
std::string Consulta::getNombrePaciente() {
    return nombrePaciente;
}

std::string Consulta::getEspecialidad() {
    return especialidad;
}

std::string Consulta::getFechaConsulta() {
    return fechaConsulta;
}

bool Consulta::isReservaConfirmada() {
    return reservaConfirmada;
}