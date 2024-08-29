#include <iostream>

int main(){
    int x; // Esta variable se utilizará para guardar datos desde la consola

    std::cout << "Ingrese su número entero" << std::endl;
    std::cin >> x; // De esta manera leemos datos desde la consola y los almacenamos

    if(x < 5){
        std::cout << "Entramos al primer if" << std::endl;
    }else if(x >= 5 && x < 10){
        std::cout << "Entramos al segundo if" << std::endl;
    }else{
        std::cout << "Entramos al else" << std::endl;
    }

    return 0;
}