#include <iostream>

/* Pauta Control 2 Paralelo 200
P1: 30 pts
P2: 30 pts
P3: 25 pts
P4: 15 pts

Descuentos generales:
- Formato incorrecto en el nombre del archivo .cpp: -5pts
- No compila/ejecuta correctamente: -5pts
*/

// Estructura para almacenar la información de un equipo de comunicación
struct equipo {
    char nombre[100];  // Nombre del equipo (ej. Antena Satelital)
    float frecuencia;  // Frecuencia operativa (en GHz)
};

// Estructura para almacenar la información de las misiones espaciales
struct mision {
    char nombre[100];  // Nombre de la misión (ej. Misión Marte)
    int n_equipos;     // Número de equipos de comunicación asignados
    equipo* equipos;   // Arreglo dinámico de equipos
};

// Prototipos de las funciones
mision* registrarMision();
void asignarEquipos(mision& m);
void mostrarMision(mision& m);

int main() {
    mision* misionActual = registrarMision();
    // Ojo, se derreferencia antes de pasar la misión!
    asignarEquipos(*misionActual); 
    mostrarMision(*misionActual);

    // Pregunta 4: liberar memoria
    delete[] misionActual->equipos; // 10 pts (incluye formato correcto [])
    delete misionActual; // 5 pts
    return 0;
}

// Pregunta 1
// Prototipo: 2pts
mision* registrarMision(){
    // Solicitudes por pantalla: 3pts
    std::cout << "Registrando nueva misión." << std::endl;
    mision *m = new mision; // Creación de variable como puntero: 10 pts
    std::cout << "Ingrese nombre de la misión: ";
    std::cin.getline(m->nombre, 100, '\n');
    std::cout << "Ingrese cantidad de equipos de comunicación: ";
    std::cin >> m->n_equipos;
    m->equipos = new equipo[m->n_equipos]; // Creación de equipos en memoria dinámica: 10pts
    std::cout << std::endl;

    // Retorno puntero: 5pts
    return m;
}

// Pregunta 2
// Prototipo: 2pts
void asignarEquipos(mision &m){
    // Solicitud por consola: 3pts
    std::cout << "Asignando equipos para misión: " << m.nombre << std::endl << std::endl;
    for(int i=0; i< m.n_equipos; i++){ // Recorre correctamente equipos: 10pts
        // Solicita correctamente información: 5pts
        std::cin.ignore();
        std::cout << "Ingrese nombre del equipo: ";
        std::cin.getline(m.equipos[i].nombre, 100, '\n');
        std::cout << "Ingrese la frecuencia operativa (GHz): ";
        std::cin >> m.equipos[i].frecuencia;
        std::cout << "¡Equipo asignado!" << std::endl << std::endl;
        // Asigna información correctamente: 10pts
    }
}

// Pregunta 3
// Prototipo: 2pts
void mostrarMision(mision& m){
    // Muestra información de misión y n equipos: 8pts
    std::cout << "Mostrando información para misión: " << m.nombre << std::endl << std::endl;
    std::cout << "Número de equipos: " << m.n_equipos << std::endl;
    // Recorre correctamente los equipos: 5pts
    for(int i = 0; i<m.n_equipos; i++){
        // Muestra información de equipos correctamente: 10pts
        std::cout << "Equipo " << m.equipos[i].nombre << ", frecuencia de operación (GHz) " << m.equipos[i].frecuencia << std::endl;
    }
    std::cout << std::endl;
}
