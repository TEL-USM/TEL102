#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME 32

typedef struct {
    char nombre[MAX_NAME];
    float precio;
} Producto;

/* Agrega un producto al final (puede cambiar la dirección por realloc). */
Producto* add_producto(Producto* arr, int* n, char* nombre, float precio);

/* Lista productos existentes. */
void list_productos(Producto* arr, int n);

/* Retorna nuevo arreglo con productos cuyo precio < umbral.
   Guarda el tamaño en *m. Si no hay, retorna NULL y *m=0. */
Producto* filtrar_baratos(Producto* arr, int n, float umbral, int* m);

#endif
