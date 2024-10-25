#include"editorial.h"
#include"revista.h"
#include"libro.h"
#include<vector>

int main(){
    // Editorial creada
    Editorial *e = new Editorial("Planeta");

    // Publicaciones creadas y agregadas a la editorial
    Libro *l1 = new Libro("Libro 1", 2020);
    e->agregarPublicacion(l1);
    Libro *l2 = new Libro("Libro 2", 2015);
    e->agregarPublicacion(l2);
    Revista *r1 = new Revista("Revista", 3, "Agosto");
    e->agregarPublicacion(r1);
    
    // Se muestra la información de las publicaciones de dicha editorial
    e->showInfo();

    return 0;
}