#include <iostream>

// Estructura para almacenar información de aplicaciones de celulares
struct aplicacion{
    char nombre[100]; // Nombre aplicación
    float version; // Versión en formato flotante (ej. 1.0, 2.4, etc.)
};

// Estructura para almacenar información de cada dispositivo móvil
struct celular{
    char marca[100]; // Marca y modelo del dispositivo móvil
    int n_apps; // Número de aplicaciones que serán instaladas
    aplicacion *apps; // Puntero para almacenar arreglo de aplicaciones instaladas
};

// Escriba aquí el código de las funciones solicitadas

int main(){

    // Escriba aquí el código main solicitado

    return 0;
}