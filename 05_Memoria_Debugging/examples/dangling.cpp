#include <iostream>

int main(){

    // Se crea puntero p con una dirección de memoria
    // en memoria dinámica
    int *p = new int;
    // Se le asigna un valor
    *p = 20210927;
    // Se crea un puntero q con la misma dirección de memoria
    // almacenada en p
    int *q = p;
    
    // Al borrarse el puntero p, también se está borrando el
    // sector de memoria al que q estaba apuntando
    delete p;

    // Esto lanzará error
    std::cout << "valor al que apunta q: " << *q << std::endl;
        
    return 0;
}