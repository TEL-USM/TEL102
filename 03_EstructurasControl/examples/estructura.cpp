#include <iostream>
#include <cstring>

struct empleado{
    char nombre[40];
    float sueldo;
};


int main(){
    struct empleado e1;
    e1.sueldo = 5000;
    strcpy(e1.nombre, "Juancho");

    std::cout << "El empleado es " << e1.nombre << " y su sueldo es " << e1.sueldo;
    
    return 0;
}