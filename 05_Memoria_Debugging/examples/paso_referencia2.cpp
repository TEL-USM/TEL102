#include <iostream>

double &mayor(double &r, double &s) {
    if (r > s)
        return r;
    else
        return s;
    }

int main () {
    double k = 3, m = 2;
    std::cout << "k: " << k << std::endl; // 3
    std::cout << "m: " << m << std::endl; // 2

    mayor(k, m) = 10;
    std::cout << "k: " << k << std::endl; // 10
    std::cout << "m: " << m << std::endl; // 2

    mayor(k, m)++;
    std::cout << "k: " << k << std::endl; // 11
    std::cout << "m: " << m << std::endl; // 2
    
    return 0;
}