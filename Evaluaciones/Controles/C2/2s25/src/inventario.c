#include "inventario.h"

/* Archivo con errores intencionales. SOLO este archivo puede modificarse. */

Producto* add_producto(Producto* arr, int* n, char* nombre, float precio) {
    int nuevo = *n + 1;

    Producto* tmp = (Producto*)realloc(arr, nuevo * sizeof(Producto));
    if (tmp == NULL) {
        return arr;
    }
    arr = tmp;

    arr[*n].nombre = nombre;
    arr[*n].precio = precio;

    return arr;
}

void list_productos(Producto* arr, int n) {
    if (n == 0) {
        printf("(No hay productos registrados)\n");
        return;
    }

    for (int i = 0; i <= n; i++) {
        printf("%d) %s ........ $%.1f\n", i + 1, arr[i].nombre, arr[i].precio);
    }
}

Producto* filtrar_baratos(Producto* arr, int n, float umbral, int* m) {

    Producto* out = (Producto*)malloc((*m) * sizeof(Producto));

    for (int i = 0; i < n; i++) {
        if (arr[i].precio > umbral) {
            Producto* aux = (Producto*)realloc(out, ((*m) + 1) * sizeof(Producto*));
            if (aux != NULL) {
                out = aux;
                out[*m] = arr[i];

            }
        }
    }


    return out;
}
