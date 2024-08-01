#include <iostream>

int main(){
    
    int val = 55;  //variable val (stack) que contiene el valor 55.
    
    int *p = &val; //variable p (stack) contiene la dir. de memoria de val (&val)
    
    std::cout << "El valor de p (dirección guardada en stack): " << p << std::endl;
    std::cout << "La dir de memoria de val: " << &val << std::endl;
    std::cout << "El valor en la dirección guardada en p: " << *p << std::endl;
    std::cout << "El valor de val: " << val << std::endl;
    std::cout << "La dirección de p es: " << &p << std::endl;
    
    return 0;
}
