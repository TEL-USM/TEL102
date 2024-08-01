#include <iostream>

int main(){
    int a = 10;
    int cuenta = (a > 0) ? 0 : 1; // C/C++ 
    (a>10) ? a : cuenta = 200; // C++
    std::cout << cuenta << std::endl;
    
    return 0;
}