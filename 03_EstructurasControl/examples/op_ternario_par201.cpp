#include <iostream>

int main(){
    int x = 5;

    int p = (x > 2)? x : -1;
    std::cout << p << std::endl;

    (x<7)? p : x = 200;
    
    std::cout << p << std::endl;
    std::cout << x << std::endl; 

    return 0;
}