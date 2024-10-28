#ifndef CONSULTA_H
#define CONSULTA_H

#include <string>

// Clase base abstracta para representar una consulta médica
class Consulta {
private:
    std::string nombrePaciente;
    std::string especialidad;
    std::string fechaConsulta;
    bool reservaConfirmada;

public:
    // Constructor
    Consulta(std::string nombre, std::string especialidad, std::string fecha);

    // Métodos virtuales puros
    virtual void mostrarDetalles() = 0;
    void confirmarReserva();

    // Getters de los atributos básicos
    std::string getNombrePaciente();
    std::string getEspecialidad();
    std::string getFechaConsulta();
    bool isReservaConfirmada();
};

#endif // CONSULTA_H