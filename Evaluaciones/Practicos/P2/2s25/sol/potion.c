#include "potionlab.h"

/* Agrega una poción ya calculada (nombre y poder entregados) */
Potion* add_potion(Potion* arr, int* n, char* nombre, float poder) {
    Potion* tmp;
    tmp = (Potion*)realloc(arr, ((*n) + 1) * sizeof(Potion));
    if (!tmp) return arr;
    arr = tmp;

    strcpy(arr[*n].nombre, nombre);
    arr[*n].poder = poder;
    (*n)++;
    return arr;
}

/* Elimina una poción dado su índice */
Potion* delete_potion(Potion* arr, int* n, int idx) {
    int i;
    if (*n <= 0) return arr;
    if (idx < 0 || idx >= *n) return arr;

    for (i = idx; i < (*n) - 1; i++) arr[i] = arr[i + 1];

    (*n)--;
    return (Potion*)realloc(arr, (*n) * sizeof(Potion));
}
