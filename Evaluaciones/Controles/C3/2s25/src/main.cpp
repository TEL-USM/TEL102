#include <iostream>
#include <vector>
#include "Mascota.h"
#include "Perro.h"
#include "Gato.h"

int main() {
    std::vector<Mascota*> refugio;

    refugio.push_back(new Perro(1, "Kira", 4, "BorderCollie", true));
    refugio.push_back(new Gato(2, "Mishi", 2, "Gris", true));

    std::cout << "Listado de mascotas:" << std::endl;
    for (int i = 0; i < (int)refugio.size(); i++) {
        refugio[i]->imprimir();
    }

    std::cout << "Promedio de edad: " << 3.0 << " años (ejemplo)" << std::endl;

    for (int i = 0; i < (int)refugio.size(); i++) {
        delete refugio[i];
    }

    return 0;
}
