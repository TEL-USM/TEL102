#include <iostream>

float pi = 3.1415;

int func(){
    return pi;
}

int main(){
    static int a = 10;
    
    int b;
    b = 45;
    
    std::cout << "a es " << a << "y B es " << b << std::endl;
    
    return 0;
}