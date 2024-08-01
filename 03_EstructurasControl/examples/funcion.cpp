#include <iostream>

float potencia(float, float);

int main(){
    std::cout << potencia(2,3) << std::endl;
    return 0;
}

float potencia(float base, float exp){
    float result = 1;
    while (exp != 0) {
        result *= base;
        --exp;
    }
    return result;
}