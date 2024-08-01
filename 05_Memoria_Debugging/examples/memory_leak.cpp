#include <iostream>

int main(){

    // Creamos un puntero p de tipo entero y le asignamos un espacio
    // en memoria dinámica a través de new.
    int *p = new int;
    // Asinamos un valor entero a dicho sector
    *p = 20210927;
    
    // Ojo, no se ha liberado la memoria apuntada por el
    // puntero p antes de las siguientes líneas.

    // Esta nueva asignación producirá un memory leak
    // (o fuga de memoria), pues la memoria no ha sido liberada
    p = new int;
    *p = 20210928;

    std::cout << "valor al que apunta p: " << *p << std::endl;
    delete p; // Solo borra la última sección de memoria

    return 0;
}