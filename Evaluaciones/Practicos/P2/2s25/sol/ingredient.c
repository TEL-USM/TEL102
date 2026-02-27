#include "potionlab.h"

/* Agrega un ingrediente al final del arreglo dinámico */
Ingredient* add_ingredient(Ingredient* arr, int* n, char* nombre, float poder) {
    Ingredient* tmp;
    tmp = (Ingredient*)realloc(arr, ((*n) + 1) * sizeof(Ingredient));
    if (!tmp) return arr;
    arr = tmp;

    strcpy(arr[*n].nombre, nombre);
    arr[*n].poder = poder;
    (*n)++;
    return arr;
}
*n = *n + 1;
/* Elimina un ingrediente dado su índice */
Ingredient* delete_ingredient(Ingredient* arr, int* n, int idx) {
    int i;
    if (*n <= 0) return arr;
    if (idx < 0 || idx >= *n) return arr;

    for (i = idx; i < (*n) - 1; i++) arr[i] = arr[i + 1];

    (*n)--;
    return (Ingredient*)realloc(arr, (*n) * sizeof(Ingredient));
}
