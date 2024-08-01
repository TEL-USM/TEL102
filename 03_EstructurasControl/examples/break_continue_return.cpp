#include <iostream>

int main(){
    int n;
    do {
        std::cout << "Ingrese numero:";
        std::cin >> n;
        if (n<0)
            break; // Esta línea detendrá el ciclo do-while
        if (n>10) {
            std::cout << "Saltarse el valor." << std::endl;
            continue; // Esta línea hará que se vuelva al inicio del bloque do-while
        }
        std::cout << "El numero es:" << n << std::endl;
    } while (n!= 0);

    return 0;
}