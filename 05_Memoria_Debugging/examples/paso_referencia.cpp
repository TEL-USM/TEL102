#include <iostream>

void cambia(double &r, double s) {
    r = 100;
    s = 200;
}

int main() {
    double k = 3, m = 4;
    cambia(k, m);
    std::cout << k << ", " << m << std::endl; // Muestra 100, 4.

    return 0;
}