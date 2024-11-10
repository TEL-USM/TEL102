#include "plantainterior.h"

void PlantaInterior::mostrarDetalles(){
        std::cout << "Planta Interior: " << nombre << std::endl;
        std::cout << "Altura: " << altura << " cm" << std::endl;
        std::cout << "Edad: " << edad << " meses" << std::endl;
        std::cout << "Humedad Ideal: " << humedadIdeal << " %" << std::endl;
}