#include <iostream>

int main(){
    int pi_int = 3.1415; // coerción
    std::cout << pi_int << std::endl;
    float pi_float = 3.1415;
    pi_int = (int) pi_float; // casting
    std::cout << pi_int << std::endl;
    
    return 0;
}