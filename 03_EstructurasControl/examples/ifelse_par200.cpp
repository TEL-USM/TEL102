#include <iostream>

int main(){
    // Para leer desde la consola datos, debemos utilzar cin definido en std
    int x; // Definimos una variable que se utilizará para guardar datos
    std::cout << "Ingrese el dato entero a evaluar" << std::endl;
    std::cin >> x;

    if(x<5){
        std::cout << "Entré al if porque se cumplió la condición" << std::endl;
    }else if( x > 10 && x < 15){
        std::cout << "Segunda condición" << std::endl;
    }else{
        std::cout << "No se cumple ninguna condición" << std::endl;
    }


    return 0;
}