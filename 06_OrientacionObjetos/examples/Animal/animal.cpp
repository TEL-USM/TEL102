// Con este include hacemos el enlace entre el archivo de cabecera
// (que contiene la definición de la clase) y la implementación de sus
// métodos 
#include "animal.h"
#include <iostream>

// A continuación implementaremos cada uno de los métodos que solo prototipamos
// en la clase Animal
Animal::Animal(std::string i_nombre) : n_hijos(0), edad_hijos(NULL), nombre(i_nombre) {}

// El destructor se encarga en este caso de liberar la memoria dinámica que haya
// sido solicitada por animal durante su ejecución
Animal::~Animal() {
    // Si el puntero está en uso (es distinto de NULL)
    if(edad_hijos)
        // borramos el puntero y la memoria que tenga asignada
        delete[] edad_hijos;
    }

// A continuación implementaremos los métodos que nos quedan pendientes de la definición 
// de la clase
// El método edad_hijo recibe una posición y retorna la edad del hijo en esa posición
int Animal::edad_hijo(int i) {
    // Corroboramos que i represente una posición "válida" dentro del arreglo
    if(i < 0 || i >= this->n_hijos)
        return 0;
    // Si es una posición válida, retornamos la edad del hijo en la posición i
    return edad_hijos[i];
}

// Método asigna_edad_hijo, asigna una edad al elemento del arreglo en la posición
// i.
void Animal::asigna_edad_hijo(int i, int edad) {
    // Corroboramos si es una posición válida nuevamentes
    if(i < 0 || i >= this->n_hijos) {
        std::cerr << "Indice " << i << " fuera de límites..." << std::endl;
        return;
    }
    edad_hijos[i] = edad;
}