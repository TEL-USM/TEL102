#include <iostream>

int main(){
    
    // Almacenamos en el puntero p, la dirección de memoria
    // retornada por el operador new.
    // Sin embargo, en este caso, new NO está reservando un único
    // espacio en memoria de tipo entero.
    // La notación int[10] indica que estamos reservando
    // espacio para 10 elementos de tamaño entero (int).
    int *p = new int[10]; //reserva 10 ints en el heap.
                          //(int *) malloc(sizeof(int)*10)
    
    for(int i=0;i<10;i++){
        p[i]=(i+1); //asignación como si fuese un arreglo.
        // El equivalente de esta asignación con notación de punteros
        // sería 
        // *(p + i) = (i+1);
        std::cout << "El valor de p en la posición " << i << " es " << p[i] << std::endl;
    }
    delete p;
    
    return 0;
}