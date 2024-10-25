#ifndef LIBRO_H
#define LIBRO_H

#include "publicacion.h"
class Libro: public Publicacion {
public:
    Libro(std::string titulo, unsigned int a_publicacion):Publicacion(titulo), anioPublicacion(a_publicacion){}
    void showInfo(){
            std::cout << "Libro título: " << titulo << std::endl;
            std::cout << "Año de publicación: " << anioPublicacion << std::endl;
        }
private:
    unsigned int anioPublicacion;
};
#endif