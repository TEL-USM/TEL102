#ifndef POTIONLAB_H
#define POTIONLAB_H

// ¡¡NO MODIFICAR!!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 32

/* ---------------------------------------------------
   Estructuras de datos utilizadas en PotionLab
   --------------------------------------------------- */

/*
 * Representa un ingrediente con:
 * - nombre: cadena de texto sin espacios.
 * - poder: valor numérico (0..100) que indica su potencia.
 */
typedef struct {
    char nombre[MAX_NAME];
    float poder;      /* 0..100 */
} Ingredient;

/*
 * Representa una poción con:
 * - nombre: cadena de texto sin espacios.
 * - poder: valor numérico (0..100) que indica su efecto o potencia.
 */
typedef struct {
    char nombre[MAX_NAME];  
    float poder;
} Potion;

/* ---------------------------------------------------
   PARTE A - Estudiante A
   Funciones para manejar el arreglo dinámico de ingredientes
   --------------------------------------------------- */

/*
 * Agrega un nuevo ingrediente al final del arreglo dinámico.
 *
 * Parámetros:
 *  - arr: puntero al arreglo dinámico actual de ingredientes.
 *  - n: puntero a int que representa la cantidad actual de ingredientes almacenados.
 *  - nombre: nombre del nuevo ingrediente (sin espacios).
 *  - poder: valor numérico del poder del nuevo ingrediente.
 *
 * Retorno:
 *  - Devuelve un puntero al nuevo arreglo de ingredientes.
 *    Puede ser distinto al original si se usó realloc.
 *  - Si falla la asignación de memoria, devuelve el mismo puntero arr.
 */
Ingredient* add_ingredient(Ingredient* arr, int* n, char* nombre, float poder);

/*
 * Elimina un ingrediente según su índice en el arreglo.
 *
 * Parámetros:
 *  - arr: puntero al arreglo dinámico actual de ingredientes.
 *  - n: puntero a int que representa la cantidad actual de ingredientes almacenados.
 *  - idx: posición (0..*n-1) del elemento a eliminar.
 *
 * Funcionamiento:
 *  - Mueve los elementos posteriores una posición hacia atrás.
 *  - Reduce el tamaño del arreglo usando realloc.
 *
 * Retorno:
 *  - Devuelve un puntero al nuevo arreglo (puede cambiar por realloc).
 *  - Si falla realloc al reducir, devuelve el mismo puntero arr.
 */
Ingredient* delete_ingredient(Ingredient* arr, int* n, int idx);

/* ---------------------------------------------------
   PARTE A - Estudiante B
   Funciones para manejar el arreglo dinámico de pociones
   --------------------------------------------------- */

/*
 * Agrega una nueva poción al final del arreglo dinámico.
 *
 * Parámetros:
 *  - arr: puntero al arreglo dinámico actual de pociones.
 *  - n: puntero a int que representa la cantidad actual de pociones almacenadas.
 *  - nombre: nombre de la nueva poción (sin espacios).
 *  - poder: valor numérico del poder de la poción.
 *
 * Retorno:
 *  - Devuelve un puntero al nuevo arreglo de pociones.
 *    Puede ser distinto al original si se usó realloc.
 *  - Si falla la asignación de memoria, devuelve el mismo puntero arr.
 */
Potion* add_potion(Potion* arr, int* n, char* nombre, float poder);

/*
 * Elimina una poción según su índice en el arreglo.
 *
 * Parámetros:
 *  - arr: puntero al arreglo dinámico actual de pociones.
 *  - n: puntero a int que representa la cantidad actual de pociones almacenadas.
 *  - idx: posición (0..*n-1) del elemento a eliminar.
 *
 * Funcionamiento:
 *  - Mueve los elementos posteriores una posición hacia atrás.
 *  - Reduce el tamaño del arreglo usando realloc.
 *
 * Retorno:
 *  - Devuelve un puntero al nuevo arreglo (puede cambiar por realloc).
 *  - Si falla realloc al reducir, devuelve el mismo puntero arr.
 */
Potion* delete_potion(Potion* arr, int* n, int idx);

/* ---------------------------------------------------
   FUNCIONES DE LISTADO (ENTREGADAS)
   Estas funciones ya están implementadas y permiten
   mostrar en pantalla los contenidos de los arreglos.
   --------------------------------------------------- */

/*
 * Muestra por pantalla todos los ingredientes registrados.
 * Parámetros:
 *  - arr: puntero al arreglo de ingredientes.
 *  - n: cantidad de ingredientes almacenados.
 */
void list_ingredients(Ingredient* arr, int n);

/*
 * Muestra por pantalla todas las pociones registradas.
 * Parámetros:
 *  - arr: puntero al arreglo de pociones.
 *  - n: cantidad de pociones almacenadas.
 */
void list_potions(Potion* arr, int n);

#endif
