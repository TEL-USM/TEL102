#include <iostream>

long y = 15; //Variable global: visible desde todos los archivos del proyecto.

// Para definir variables estáticas en cualquier ámbito
// utilizamos el calificador static.
// OJO: static no quiere decir constante!
// El valor de z PUEDE cambiar
static int z = 1; //static solo cambia la visibilidad;
                  //solo a este archivo.
// Cuando queremos acceder a variables globales
// creadas en otros archivos. El calificador
// extern es una manera de explícitamente indicarle
// al compilador que no estamos creando una variable
// sino que estamos accediendo a una variable
// ya creada
extern float pi; //no se crea, sino que accede a var
                 //global (no static) en otro archivo.

// El calificador const sí quiere decir constante.
// Variables definidas con const son variables que no 
// pueden cambiar su valor
const float val = 3.14159; // variable global que no puede ser modificada.

int fun(){
    int x = 0;
    static int y=0; //static va a memoria estática.
    x = y++;
    return x;
}