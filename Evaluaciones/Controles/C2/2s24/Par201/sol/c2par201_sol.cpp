#include <iostream>

/* Pauta Control 2 Paralelo 201
P1: 30 pts
P2: 30 pts
P3: 25 pts
P4: 15 pts

Descuentos generales:
- Formato incorrecto en el nombre del archivo .cpp: -5pts
- No compila/ejecuta correctamente: -5pts
*/

// Estructura para almacenar la información de un dispositivo de robótica
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
    asignarDispositivos(*lineaActual); // Se derreferencia antes de pasar la línea
    mostrarLinea(*lineaActual);
    
    // Pregunta 4: liberar memoria
    delete[] lineaActual->dispositivos; // 10 pts (incluye formato correcto [])
    delete lineaActual; // 5 pts
    return 0;
}

// Pregunta 1
// Prototipo: 2pts
linea_ensamblaje* registrarLinea() {
// Solicitudes por pantalla: 3pts
    std::cout << "Registrando nueva línea de ensamblaje." << std::endl;
    linea_ensamblaje* le = new linea_ensamblaje; // Creación de variable como puntero: 10 pts
    std::cout << "Ingrese nombre de la línea: ";
    std::cin.getline(le->nombre, 100, '\n');
    std::cout << "Ingrese cantidad de dispositivos: ";
    std::cin >> le->n_dispositivos;
    le->dispositivos = new dispositivo[le->n_dispositivos]; // Creación de dispositivos en memoria dinámica: 10pts
    std::cout << std::endl;
    
    // Retorno puntero: 5pts
    return le;
}

// Pregunta 2
// Prototipo: 2pts
void asignarDispositivos(linea_ensamblaje& le) {
    // Solicitud por consola: 3pts
    std::cout << "Asignando dispositivos para la línea: " << le.nombre << std::endl << std::endl;
    for (int i = 0; i < le.n_dispositivos; i++) { // Recorre correctamente dispositivos: 10pts
        // Solicita correctamente información: 5pts
        std::cin.ignore();
        std::cout << "Ingrese nombre del dispositivo: ";
        std::cin.getline(le.dispositivos[i].nombre, 100, '\n');
        std::cout << "Ingrese el tipo de dispositivo (Sensor, Actuador, etc.): ";
        std::cin.getline(le.dispositivos[i].tipo, 50, '\n');
        std::cout << "¡Dispositivo asignado!" << std::endl << std::endl;
        // Asigna información correctamente: 10pts
    }
}

// Pregunta 3
// Prototipo: 2pts
void mostrarLinea(linea_ensamblaje& le) {
    // Muestra información de línea de ensamblaje y n dispositivos: 8pts
    std::cout << "Mostrando información para la línea de ensamblaje: " << le.nombre << std::endl << std::endl;
    std::cout << "Número de dispositivos: " << le.n_dispositivos << std::endl;
    // Recorre correctamente los dispositivos: 5pts
    for (int i = 0; i < le.n_dispositivos; i++) {
        // Muestra información de dispositivos correctamente: 10pts
        std::cout << "Dispositivo " << le.dispositivos[i].nombre
                  << ", Tipo: " << le.dispositivos[i].tipo << std::endl;
    }
    std::cout << std::endl;
}
