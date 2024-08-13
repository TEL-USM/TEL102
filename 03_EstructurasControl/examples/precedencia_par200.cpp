#include <iostream>

int main(){
    int x = 10;
    int y = 5;

    std::cout << x+y*x << std::endl; // En esta línea se ejecuta primera * y luego +

    x = 20 + 12; 
    // Operador + asociatividad -> (tomo 20 y le sumo 12)
    // Operador de asignación (=) asociatividad <- (cálculo lo que está a la derecha y lo asigno a x)

    std::cout << x << std::endl;

    return 0;
}