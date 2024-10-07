#include <iostream>

// Estructura para almacenar la información de un dispositivo robótico
struct dispositivo {
	char nombre[100];  // Nombre del dispositivo (ej. Sensor Óptico)
	char tipo[50];     // Tipo de dispositivo (ej. Sensor, Actuador)
};

// Estructura para almacenar la información de las líneas de ensamblaje
struct linea_ensamblaje {
	char nombre[100];  // Nombre de la línea de ensamblaje (ej. Línea Alfa)
	int n_dispositivos; // Número de dispositivos asignados
	dispositivo* dispositivos; // Arreglo dinámico de dispositivos
};

// Prototipos de las funciones
linea_ensamblaje* registrarLinea();
void asignarDispositivos(linea_ensamblaje& le);
void mostrarLinea(linea_ensamblaje& le);

int main() {
	linea_ensamblaje* lineaActual = registrarLinea();
	// Ojo, se derreferencia antes de entregar la línea de ensamblaje!
	asignarDispositivos(*lineaActual); 
	mostrarLinea(*lineaActual);
	
	// Complete aquí el código main necesario
	
	return 0;
}

// Escriba aquí el código de las funciones solicitadas
