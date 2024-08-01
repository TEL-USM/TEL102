#include <iostream>

int main(){
    int a; // Acá se crea a
    {
        float b; //Acá se crea b
        std::cout << a << b << std::endl; //válido 
    } // Acá se destruye b
    
    std::cout << a << b << std::endl; //inválido, esto lanza error!
    
    return 0;
} // Acá se destruye a