#include <iostream>

int cont = 1; // variable global

int le_funcion(int a){ //parámetros -> variables locales
    int cont = a; // variable local
    cont++;    

    return cont;
}

int main(){
    int a = 4; // variable local
    if(a==5){
        cont++;
    }else{
        int cont = le_funcion(a); // Esta variable cont es local al else (ámbito)
        // Como este cont es local al else, una vez que termine el else,
        // se liberará 
    }
    std::cout << cont << std::endl;
    
    return 0;
} 