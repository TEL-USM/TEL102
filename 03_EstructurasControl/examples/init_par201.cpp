#include <iostream>

int main(){
    // Inicialización, permite crear una variable y darle inmediatamente un valor inicial
    int x = 3; // En este caso creamos la variable x y la inicializamos con valor 3
    std::cout << x << std::endl; // Esto muestra un 3 por pantalla

    // Definición, permite crear una variable sin la necesidad de darle un valor
    int y; // Para este caso, solo estamos creando la variable, sin darle un valor inicial específico
    std::cout << y << std::endl; // Si no le das un valor a y, está se inicializa con 0 (normalmente)
    // Si bien, la gran mayoría de compiladores tiene este comportamiento, no está demás asegurar
    // el comportamiento esperado, asignando el valor que tú requieras al momento de crear la variable

    // Asignación, a partir de una varible ya creada, podemos asignarle algún valor
    y = 5; // En este caso, le asignamos un valor de 5 a la variable y ya creada.
    std::cout << y << std::endl; // Esto muestra un 5 por pantalla

    return 0;
}