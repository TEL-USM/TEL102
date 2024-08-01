#include <iostream>

int main(){

    // La variable a es una variable de tipo arreglo "normal" (es decir
    // una variable creada en el stack)
    int a[10]; //reserva 10 ints en el stack.

    // Esta variable de tipo puntero también es creada en el stack   
    int *p = NULL; // puntero a int
    p = a; //esto C/C++ lo interpreta como p=&a[0]
           //vale decir la dirección de memoria del primer elemento de a.
    
    for(int i=0;i<10;i++){
        p[i]=(i*i); //asignación como si fuese un arreglo.
        std::cout << a[i] << std::endl; //a se ve modificado.
    }
    //no es necesario liberar memoria -> a está en stack
    
    return 0;
}