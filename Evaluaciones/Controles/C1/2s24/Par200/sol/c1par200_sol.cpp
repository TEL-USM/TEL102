#include <iostream>

/* Pauta Control 1 Paralelo 200
P1: 25 pts
P2: 25 pts
P3: 20 pts
P4: 30pts

Descuentos generales:
- Formato incorrecto en el nombre del archivo .cpp: -5pts
- No compila/ejecuta correctamente: -5pts
*/
struct seccion{
	int n_filas = 3; // Número de filas de mesas
	int n_columnas = 2; // Número de columnas de mesas
	char nombre_seccion[50]; // Nombre de la sección
	bool mesa[3][2]; // Estado por mesa según fila-columna: Libre (false) u Ocupada (true)
};


// Pregunta 1
// Prototipo: 5 pts
seccion initSection(seccion s){
    // Modifica variable: 15pts
    for(int i=0; i<s.n_filas; i++){
        for(int j=0; j<s.n_columnas; j++){
            s.mesa[i][j] = false;
        }
    }

    // Retorno: 5pts
    return s;
}

// Pregunta 2
// Prototipo: 5pts 
void showSectionState(seccion s){
    // Muestra nombre sección: 5pts
    std::cout << "Sección: " << s.nombre_seccion << std::endl;
    std::cout << "Estado de las mesas:" << std::endl;

    // Recorre mesas: 5pts
    for(int i=0; i<s.n_filas; i++){
        for(int j=0; j<s.n_columnas; j++){
            // Visualización correcta: 10pts
            if(s.mesa[i][j]) std::cout << "x ";
            else std::cout << "o ";
        }
        std::cout << std::endl;
    }
}

// Pregunta 3
// Prototipo: 5pts
seccion modifyReservation(seccion s, int fila, int columna, bool estado){
    // Acceso y modificación de variable: 10pts
    s.mesa[fila][columna] = estado;
    // Retorno: 5pts
    return s;
}

// Pregunta 4
int main() {
    // Crea mesa: 5pts
    seccion seccion1;
    std::cout << "Ingrese el nombre de la sección: ";
    std::cin.getline(seccion1.nombre_seccion, 50);

    // Inicializa mesa con función initSection: 5pts
    seccion1 = initSection(seccion1);

    // Creación de menú: 3pts
    char opcion;
    do {
        std::cout << "Seleccione una opción:" << std::endl;
        std::cout << "1. Reservar/liberar mesa en la sección (" << seccion1.nombre_seccion << ")" << std::endl;
        std::cout << "x. Salir"<< std::endl;
        std::cout << "Opción: ";
        std::cin >> opcion;

        if(opcion == '1') {
            // Visualización similar a la solicitada con función showSectionState: 5pts
            showSectionState(seccion1);

            int fila, columna;
            char accion;
            std::cout << "Ingrese la fila (0-" << seccion1.n_filas-1 << "): ";
            std::cin >> fila;
            std::cout << "Ingrese la columna (0-" << seccion1.n_columnas-1 << "): ";
            std::cin >> columna;
            std::cout << "Reservar (r) o liberar (l) la mesa: ";
            std::cin >> accion;

            bool estado;
            if(accion == 'r') estado = true;
            else estado = false;

            // Modificación de reserva según los datos entregados usando función modifyReservation: 5pts
            seccion1 = modifyReservation(seccion1, fila, columna, estado);

            std::cout << "Reserva modificada" << std::endl;
            showSectionState(seccion1);
        } else if(opcion != 'x') { // Verificación de opción inválida: 5pts
            std::cout << "Opción inválida, intente nuevamente." << std::endl;
        }

    } while(opcion != 'x');

    // Mensaje final del programa: 2pts
    std::cout << "Gracias por usar el sistema de reservas. ¡Disfrute su día!" << std::endl;

    return 0;
}