#include <string>

class Figura {
public:
    virtual std::string nombre() = 0;
    virtual double area() = 0;
};

class Rectangulo : public Figura {
private:
    double a_, b_;
public:
    Rectangulo(double a, double b);
    std::string nombre();
    double area();
};

class Circulo : public Figura {
private:
    double r_;
public:
    Circulo(double r);
    std::string nombre();
    double area();
};

/* === Agregado para la Parte C === */
class Triangulo : public Figura {
private:
    double base_, altura_;
public:
    Triangulo(double base, double altura);
    std::string nombre();
    double area();
};
