#include <iostream>

int main(){
    int suma = 0;
    int x = 1;

    suma = x++;
    std::cout << suma << std::endl;
    std::cout << x << std::endl;

    suma = ++x;
    std::cout << suma << std::endl;
    std::cout << x << std::endl;

    return 0;
}