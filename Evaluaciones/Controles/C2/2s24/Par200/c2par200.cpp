#include <iostream>

// Estructura para almacenar la información de un equipo de comunicación
struct equipo {
	char nombre[100];  // Nombre del equipo (ej. Antena Satelital)
	float frecuencia;  // Frecuencia operativa (en GHz)
};

// Estructura para almacenar la información de las misiones espaciales
struct mision {
	char nombre[100];  // Nombre de la misión (ej. Misión Lambda)
	int n_equipos;     // Número de equipos de comunicación asignados
	equipo* equipos;   // Arreglo dinámico de equipos
};

// Prototipos de las funciones
mision* registrarMision();
void asignarEquipos(mision& m);
void mostrarMision(mision& m);

int main() {
	mision* misionActual = registrarMision();
	asignarEquipos(*misionActual); // Ojo, se derreferencia antes de pasar la misión!
	mostrarMision(*misionActual);
	
	// Complete aquí el código main necesario
	
	
	return 0;
}

// Escriba aquí el código de las funciones solicitadas