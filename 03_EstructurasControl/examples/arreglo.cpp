#include <iostream>

int main(){
    int arreglo[10]; // Arreglo estático de 10 elementos enteros
    for(int i=0; i<10; i++){ // for para recorrer arreglo usando índice
        arreglo[i] = i*i; // Asignación de cada posición con un valor
    }

    for(int j=0; j<10; j++){ // Mostrar elementos en el arreglo
        std::cout << "Elemento en la posición " << j << " es " << arreglo[j] << std::endl;
    }
    
    return 0;
}