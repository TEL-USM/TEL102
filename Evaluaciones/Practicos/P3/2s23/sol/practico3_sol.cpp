#include"editorial.h"
#include"revista.h"
#include"libro.h"
#include<vector>

int main(){
    Editorial *e = new Editorial("Planeta");

    Libro *l1 = new Libro("Libro 1", 2020);
    e->agregarPublicacion(l1);
    Libro *l2 = new Libro("Libro 2", 2015);
    e->agregarPublicacion(l2);
    Revista *r1 = new Revista("Revista", 3, "Agosto");
    e->agregarPublicacion(r1);
    
    e->showInfo();

    return 0;
}