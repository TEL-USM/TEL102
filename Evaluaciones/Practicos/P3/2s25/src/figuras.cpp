#include "figuras.h"
#include <iostream>

Rectangulo::Rectangulo(double a, double b) : a_(a), b_(b) {
    std::cout << "(+) Rectangulo(" << a_ << "," << b_ << ")\n";
}

std::string Rectangulo::nombre() { return "Rectangulo"; }

double Rectangulo::area() { return a_ * b_; }

Circulo::Circulo(double r) : r_(r) {
    std::cout << "(+) Circulo(" << r_ << ")\n";
}

std::string Circulo::nombre() { return "Circulo"; }

double Circulo::area() { return 3.141592653589793 * r_ * r_; }
