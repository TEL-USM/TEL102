#include "animal.h"
#include <iostream>

// Crearemos un código de ejemplo que permite utilizar la clase Animal
// que creamos anteriormente
int main() {
    // Creación de objetos
    Animal un_animal; //Un objeto (estático/stack).
    Animal *referencia_a_otro = new Animal; //Un puntero al objeto.
    Animal *referencia_a_otro_mas = new Animal("Marcos");
    
    //Un puntero a un arreglo dinámico de 10 animales:
    Animal *un_arreglo = new Animal[10];

    //Acceso a átributo de objeto:
    un_animal.nombre = "Marcos Z."; 
    // Ojo, dejar atributos públicos NO es recomendado. Utilizado solo con
    // fines pedagógicos

    //Acceso a atributo de objeto (algun error?):
    // std::cout << referencia_a_otro->n_hijos << std::endl;
    std::cout << referencia_a_otro_mas->nombre << std::endl;
    // Notación anterior es equivalente a (*referencia_a_otro_mas).nombre

    //Borrado de puntero (se llama a destructor)
    delete referencia_a_otro;
    delete[] un_arreglo;

    // Animal un_error(); //Analizador sintactico interpreta
    //como prototipo de funcion.
    return 0;
}