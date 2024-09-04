#include <iostream>

/* Pauta Control 1 Paralelo 201
P1: 25 pts
P2: 25 pts
P3: 20 pts
P4: 30pts

Descuentos generales:
- Formato incorrecto en el nombre del archivo .cpp: -5pts
- No compila/ejecuta correctamente: -5pts
*/

struct nivel {
    int n_filas = 3; // Número de filas de espacios
    int n_columnas = 3; // Número de columnas de espacios
    char nombre_nivel[50]; // Nombre del nivel
    bool espacio[3][3]; // Estado por espacio según fila-columna: Libre (false) u Ocupado (true)
};

// Pregunta 1
// Prototipo: 5 pts
nivel initNivel(nivel n) {
    // Modifica variable: 15pts
    for(int i = 0; i < n.n_filas; i++) {
        for(int j = 0; j < n.n_columnas; j++) {
            n.espacio[i][j] = false;
        }
    }
    // Retorno: 5pts
    return n;
}

// Pregunta 2
// Prototipo: 5pts 
void showNivelState(nivel n) {
    // Muestra nombre nivel: 5pts
    std::cout << "Nivel: " << n.nombre_nivel << std::endl;
    std::cout << "Estado de los espacios:" << std::endl;

    // Recorre espacios de estacionamiento: 5pts
    for(int i = 0; i < n.n_filas; i++) {
        for(int j = 0; j < n.n_columnas; j++) {
            // Visualización correcta: 10pts
            if(n.espacio[i][j]) std::cout << "x ";
            else std::cout << "o ";
        }
        std::cout << std::endl;
    }
}

// Pregunta 3
// Prototipo: 5pts
nivel modifyReservation(nivel n, int fila, int columna, bool estado) {
    // Acceso y modificación de variable: 10pts
    n.espacio[fila][columna] = estado;
    // Retorno: 5pts
    return n;
}

// Pregunta 4
int main() {
    // Crea nivel: 5pts
    nivel nivel1;
    std::cout << "Ingrese el nombre del nivel: ";
    std::cin.getline(nivel1.nombre_nivel, 50);

    // Inicializa nivel con función initNivel: 5pts
    nivel1 = initNivel(nivel1);

    // Creación de menú: 3pts
    char opcion;
    do {
        std::cout << "Seleccione una opción:" << std::endl;
        std::cout << "1. Reservar/liberar espacio en el nivel (" << nivel1.nombre_nivel << ")" << std::endl;
        std::cout << "x. Salir" << std::endl;
        std::cout << "Opción: ";
        std::cin >> opcion;

        if(opcion == '1') {
            // Visualización similar a la solicitada con función showNivelState: 5pts
            showNivelState(nivel1);

            int fila, columna;
            char accion;
            std::cout << "Ingrese la fila (0-" << nivel1.n_filas-1 << "): ";
            std::cin >> fila;
            std::cout << "Ingrese la columna (0-" << nivel1.n_columnas-1 << "): ";
            std::cin >> columna;
            std::cout << "Reservar (r) o liberar (l) el espacio: ";
            std::cin >> accion;

            bool estado = (accion == 'r');

            // Modificación de reserva según los datos entregados usando función modifyReservation: 5pts
            nivel1 = modifyReservation(nivel1, fila, columna, estado);

            std::cout << "Reserva modificada" << std::endl;
            showNivelState(nivel1);
        } else if(opcion != 'x') { // Verificación de opción inválida: 5pts
            std::cout << "Opción inválida, intente nuevamente." << std::endl;
        }

    } while(opcion != 'x');

    // Mensaje final del programa: 2pts
    std::cout << "Gracias por usar el sistema de reservas. ¡Disfrute su día!" << std::endl;

    return 0;
}
