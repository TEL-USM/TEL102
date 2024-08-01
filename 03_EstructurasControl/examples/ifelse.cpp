#include <iostream>

int main(){
    // Creamos una variable de tipo entero
    int x;
    // Utilizando cin leemos la entrada de un usuario
    // la que luego se almacena en la variable x
    std::cin >> x;

    // A continuación evaluamos nuestra variable x en una
    // sentencia if-else
    if(x<0){
        std::cout << "Este es un número negativo" << std::endl;
    }else if(x==0){
        std::cout << "Este número es igual a cero" << std::endl;
    }else{
        std::cout << "Este es un número positivo" << std::endl;
    }
    
    return 0;
}