#include <iostream>

// La variable pi es una variable global, a la cual accederemos 
// en el archivo a.cpp
float pi = 3.1415;

extern long y;

float func(){
    return pi;
}

int main(){
    static int a = 10;
    
    int b;
    b = 45;
    
    std::cout << "a es " << a << "y B es " << b << " y el valor de pi actual es " << func() << std::endl;
    std::cout << "Accedemos a la variable externa y cuyo valor es " << y << std::endl;
    return 0;
}