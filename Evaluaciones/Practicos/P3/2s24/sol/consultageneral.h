#ifndef CONSULTAGENERAL_H
#define CONSULTAGENERAL_H

#include "consulta.h"
#include <string>

// Clase derivada para representar una consulta general
class ConsultaGeneral : public Consulta {
private:
    std::string nombreMedico;  // Atributo adicional para el nombre del médico

public:
    // Constructor
    ConsultaGeneral(std::string nombrePaciente, std::string especialidad, std::string fecha, std::string nombreMedico);

    void mostrarDetalles();

    // Getter para el nombre del médico
    std::string getNombreMedico();
};

#endif // CONSULTAGENERAL_H
