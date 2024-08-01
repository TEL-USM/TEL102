#include <iostream>

int main(){
    
    int *val = new int; //puntero que apunta a un int en el heap (reserva)
    *val = 55; // es necesario reservar memoria para poder hacer esto
    
    float *p = (float *) malloc(sizeof(float)); //Reserva, en C++ es obligación el casting antes del malloc.
    *p = 3.1415; // asignación
    
    std::cout << "El valor del puntero val: " << val << std::endl;
    std::cout << "El valor al que apunta val: " << *val << std::endl;
    std::cout << "La dir de memoria del puntero val: " << &val << std::endl;
    
    std::cout << "El valor del puntero p: " << p << std::endl;
    std::cout << "El valor al que apunta p: " << *p << std::endl;
    std::cout << "La dir de memoria del puntero p: " << &p << std::endl;
    
    
    delete val; //libera la memoria reservada con new
    free(p); //liberación de la memoria reservada con malloc
    
    return 0;
}