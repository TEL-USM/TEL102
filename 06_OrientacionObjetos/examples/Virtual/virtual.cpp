#include <iostream>

class Animal {
public:
    virtual void come() { // Prueba quitar la palabra virtual y ve qué ocurre!
        std::cout << "Yo como como un animal!\n";
    }
};

class Lobo : public Animal {
public:
    void come() {
        std::cout << "Yo como como un lobo!\n";
    }
};

class Pez : public Animal {
    public:
    void come() {
        std::cout << "Yo como como un pez!\n";
    }
};

class OtroAnimal : public Animal{
    
};

int main() {
    Animal *unAnimal[4]; // Arreglo de puntero a  animales!
    unAnimal[0] = new Animal();
    unAnimal[1] = new Lobo();
    unAnimal[2] = new Pez();
    unAnimal[3] = new OtroAnimal();
    // Se recorre el arreglo de animales ejecutando en cada iteración
    // el método come()
    for(int i = 0; i < 4; i++)
        unAnimal[i]->come();
    for (int i = 0; i < 4; i++)
        delete unAnimal[i];
    return 0;
}