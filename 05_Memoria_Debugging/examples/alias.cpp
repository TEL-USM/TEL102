#include <iostream>

int main(){

    double a = 3.1415927;
    double &b = a; // b es un alias de a; 
    b = 89;
    std::cout << "a: " << a << std::endl;
    
    return 0;
    
}