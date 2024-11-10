#include "plantaexterior.h"

void PlantaExterior::mostrarDetalles(){
        std::cout << "Planta Exterior: " << nombre << std::endl;
        std::cout << "Altura: " << altura << " cm" << std::endl;
        std::cout << "Edad: " << edad << " meses" << std::endl;
        std::cout << "Nivel de Exposición Solar: " << nivelExposicionSolar << std::endl;
}