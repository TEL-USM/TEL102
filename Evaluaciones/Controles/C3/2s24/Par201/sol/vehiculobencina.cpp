#include "vehiculobencina.h"

void VehiculoBencina::mostrarDetalles() {
        std::cout << "Vehículo a Bencina: " << marca << " " << modelo 
                << " (" << anioFabricacion << "), Capacidad Estanque: " 
                << capacidadEstanque << " L" << std::endl;
}