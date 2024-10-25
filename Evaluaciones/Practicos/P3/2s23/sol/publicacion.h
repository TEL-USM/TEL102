#include <iostream>
#ifndef PUBLICACION_H
#define PUBLICACION_H

#include <string>
#include <iostream>

class Publicacion{
    public:
        Publicacion(std::string title){
            titulo = title;
        }
    
        virtual void showInfo(){
            std::cout << "Publicación Genérica" << std::endl;
            std::cout << "Titulo: " << titulo << std::endl;
        }

    protected:
        std::string titulo;
};

#endif