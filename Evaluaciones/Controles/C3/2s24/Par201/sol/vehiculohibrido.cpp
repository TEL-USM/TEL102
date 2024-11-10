#include "vehiculohibrido.h"

void VehiculoHibrido::mostrarDetalles(){
    std::cout << "Vehiculo Híbrido: " << marca << " " << modelo 
                << " (" << anioFabricacion << "), Capacidad de Batería: " 
                << capacidadBateria << " kWh, Tipo de Combustible: " 
                << tipoCombustible << std::endl;
}