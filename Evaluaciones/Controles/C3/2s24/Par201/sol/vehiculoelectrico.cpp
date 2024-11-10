#include "vehiculoelectrico.h"

void VehiculoElectrico::mostrarDetalles() {
    std::cout << "Vehiculo Eléctrico: " << marca << " " << modelo 
                << " (" << anioFabricacion << "), Capacidad de Batería: " 
                << capacidadBateria << " kWh" << std::endl;
}