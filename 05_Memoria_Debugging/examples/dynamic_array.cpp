#include <iostream>

int main(){
    
    int *p = new int[10]; //reserva 10 ints en el heap.
                          //(int *) malloc(sizeof(int)*10)
    
    for(int i=0;i<10;i++)
        p[i]=(i+1); //asignación como si fuese un arreglo.
    
    std::cout << "Arreglos dinamicos" << std::endl;

    int * p2 = p+2;

    delete p;
    std::cout << *p2 << std::endl;
    
    return 0;
}