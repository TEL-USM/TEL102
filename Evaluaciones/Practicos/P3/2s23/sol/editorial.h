#ifndef EDITORIAL_H
#define EDITORIAL_H

#include<string>
#include<vector>
#include"publicacion.h"

class Editorial {
public:
    Editorial(std::string name){
        nombre = name;
    }

    void agregarPublicacion(Publicacion *pub){
        publicaciones.push_back(pub);
    }

    void showInfo(){
        std::cout << "Informacion de editorial " << nombre << std::endl;
        for(int i=0; i < publicaciones.size();i++){
            publicaciones[i]->showInfo();
        }
    }

private:
    std::string nombre;
    std::vector<Publicacion*> publicaciones;
};
#endif