#ifndef REVISTA_H
#define REVISTA_H

#include<string>
#include"publicacion.h"

class Revista: public Publicacion{
    public:
        Revista(std::string titulo, int n_revista, std::string m_publicacion):
        Publicacion(titulo), numeroRevista(n_revista), mesPublicacion(m_publicacion){}
        void showInfo(){
            std::cout << "Título revista: " << titulo << std::endl;
            std::cout << "Número de revista: " << numeroRevista << std::endl;
            std::cout << "Mes de publicación: " << mesPublicacion << std::endl; 
        }
    private:
        int numeroRevista;
        std::string mesPublicacion; 
};
#endif