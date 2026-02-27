#include <iostream>
#include <vector>
#include "figuras.h"

/* A.1 Explique por qué se puede llamar a los métodos nombre() y area()
     de la clase Figura en la función imprimir, a pesar de ser definidos 
     como virtuales puros*/
void imprimir(Figura* f) {
    std::cout << f->nombre() << " -> area=" << f->area() << "\n";
}

Figura* seleccionar(std::vector<Figura*> v, int i) {
    return v.at(i);
}

int main() {
    std::cout << "[Inicio]" << std::endl;

    Rectangulo r1(1.0, 2.0);
    Rectangulo r2(2.0, 3.0);
    Circulo   c1(2.0);

    std::vector<Figura*> figs;
    /* A.2 Explique por qué es necesario pasar las variables de tipo Rectangulo
    y Circulo con el operador de referencia (&) tanto en push_back() como 
    en la función imprimir()
    */
    figs.push_back(&r2);
    figs.push_back(&c1);

    /* Parte C: Descomentar las siguientes líneas solo en la Parte C*/
    Triangulo t1(3.0, 4.0);
    figs.push_back(&t1);


    std::cout << "[Uso de objeto local]\n";
    imprimir(&r1);

    std::cout << "[Recorrido de vector]\n";
    for (int i = 0; i < figs.size(); i++) {
        imprimir(figs[i]);
    }

    std::cout << "[Fin main]\n";
    return 0;
}
