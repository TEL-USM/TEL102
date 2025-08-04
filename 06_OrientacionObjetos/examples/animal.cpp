#include "animal.h"

Animal::Animal(std::string i_nombre){
    this->nombre = i_nombre;
    this->n_hijos = 0;
    this->edad_hijos=NULL;
}