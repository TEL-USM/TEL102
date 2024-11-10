#include "plantahidroponica.h"


void PlantaHidroponica::mostrarDetalles(){
    std::cout << "Planta Hidropónica: " << nombre << std::endl;
    std::cout << "Altura: " << altura << " cm" << std::endl;
    std::cout << "Edad: " << edad << " meses" << std::endl;
    std::cout << "Nivel de Nutrientes: " << nivelNutrientes << std::endl;
    std::cout << "Capacidad de Agua: " << capacidadAgua << " L" << std::endl;
}