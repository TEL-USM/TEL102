#include <iostream>

struct sala{
    int n_filas = 3; // Número de filas
    int n_columnas = 5; // Número de columnas
    char pelicula[100]; // Nombre de la película
    bool asiento[3][5]; // Estado por asiento según fila-columna: Libre (false) u Ocupado (true)
};

// Función encargada de inicializar una sala con todos sus asientos libres
sala initRoom(sala s) {
    for (int i = 0; i < s.n_filas; i++) {
        for (int j = 0; j < s.n_columnas; j++) {
            s.asiento[i][j] = false; // Todos los asientos comienzan como libres
        }
    }
    return s;
}

// Función recibe una sala y muestra el estado de sus asientos
void showRoomState(sala s) {
    std::cout << "Estado de la sala: " << s.pelicula << std::endl;
    for (int i = 0; i < s.n_filas; i++) {
        // Recorro columna por columna
        for (int j = 0; j < s.n_columnas; j++) {
            // Si asiento ocupado (true)
            if (s.asiento[i][j]) {
                std::cout << "x "; // Asiento ocupado
            } else { // Si asiento libre
                std::cout << "o "; // Asiento libre
            }
        }
        // Salto de línea al terminar con las columnas y seguir con la siguiente fila
        std::cout << std::endl;
    }
}

// Función encargada de la reserva de asientos. Recibe una sala
// y modifica la reserva según lo que se indique
sala selectSeat(sala s) {
    int fila, columna;
    // Se solicita información de fila y columna a ser reservada
    std::cout << "Ingrese la fila (0-" << s.n_filas-1 << "): ";
    std::cin >> fila;
    std::cout << "Ingrese la columna (0-" << s.n_columnas-1 << "): ";
    std::cin >> columna;

    // Verifica posición válida
    if (fila < 0 || fila >= s.n_filas || columna < 0 || columna >= s.n_columnas) {
        std::cout << "Posición inválida. Intente de nuevo." << std::endl;
    } else if (s.asiento[fila][columna]) { // Si posición valida, verifica si no está ocupado
        std::cout << "El asiento ya está ocupado. Intente de nuevo." << std::endl;
    } else { // Si es válida y no está ocupado, reserva dicho asiento
        s.asiento[fila][columna] = true; // Reservar el asiento
        std::cout << "Asiento reservado exitosamente." << std::endl;
    }
    return s;
}


int main(){
    sala sala1, sala2;

    // Ingresar los nombres de las películas para cada sala
    std::cout << "Ingrese el nombre de la película para la Sala 1: ";
    std::cin.getline(sala1.pelicula, 100);

    std::cout << "Ingrese el nombre de la película para la Sala 2: ";
    std::cin.getline(sala2.pelicula, 100);

    // Inicializar las salas
    sala1 = initRoom(sala1);
    sala2 = initRoom(sala2);

    char opcion;
    do {
        std::cout << "Seleccione una sala para reservar un asiento (1 o 2) o presione 'x' para salir: ";
        std::cin >> opcion;

        if (opcion == '1') {
            showRoomState(sala1);
            sala1 = selectSeat(sala1);
            showRoomState(sala1);
        } else if (opcion == '2') {
            showRoomState(sala2);
            sala2 = selectSeat(sala2);
            showRoomState(sala2);  
        } else if (opcion != 'x') {
            std::cout << "Opción inválida. Intente de nuevo." << std::endl;
        }

    } while (opcion != 'x');

    std::cout << "Gracias por usar el sistema de reservas. ¡Disfrute su película!" << std::endl;

    return 0;
}