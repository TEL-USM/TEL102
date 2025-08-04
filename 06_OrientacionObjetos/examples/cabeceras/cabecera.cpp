#include <iostream>
#include "cabecera.h"

int main(){
    std::cout << suma(5, 7) << std::endl;
    std::cout << mult(3, 2) << std::endl;

    return 0;
}

int suma(int a, int b){
    return a + b;
}

int mult(int a, int b){
    return a*b;
}