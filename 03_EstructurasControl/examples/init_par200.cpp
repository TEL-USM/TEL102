#include <iostream>

int main(){
    // Inicialización de una variable (similar a lo que uds. hacían en Python)
    int x = 10;
    std::cout << x << std::endl;
    // Definición de una variable. Esto solo crea la variable, sin necesidad de darle un valor.
    int y; // Acá solo creamos la variable. Ojo, que en la mayoría de compiladores (NO TODOS)
    // esto inicializa la variable en 0

    std::cout << y << std::endl;
    // Asignación de una variable. Una vez creada una variable, es posible asignarle un valor.
    y = 9; // Acá recién le dimos un valor a la variable y
    std::cout << y << std::endl;

    return 0;
}