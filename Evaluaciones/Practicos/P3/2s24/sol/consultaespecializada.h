#ifndef CONSULTAESPECIALIZADA_H
#define CONSULTAESPECIALIZADA_H

#include "consulta.h"
#include <string>

// Clase derivada para representar una consulta especializada
class ConsultaEspecializada : public Consulta {
private:
    float costoAdicional;  // Atributo adicional para el costo de la consulta especializada

public:
    // Constructor
    ConsultaEspecializada(std::string nombrePaciente, std::string especialidad, std::string fecha, float costo);

    void mostrarDetalles();

    // Getter para el costo adicional
    float getCostoAdicional();
};

#endif // CONSULTAESPECIALIZADA_H
