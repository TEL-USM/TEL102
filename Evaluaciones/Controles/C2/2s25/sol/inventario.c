#include "inventario.h"
#include <string.h>

Producto* add_producto(Producto* arr, int* n, char* nombre, float precio) {
    int nuevo = *n + 1;
    Producto* tmp = (Producto*)realloc(arr, (nuevo) * sizeof(Producto));
    if (tmp == NULL) {
        return arr;
    }
    arr = tmp;

    strcpy(arr[*n].nombre, nombre);
    arr[*n].precio = precio;
    (*n)++;

    return arr;
}

void list_productos(Producto* arr, int n) {
    if (n == 0) {
        printf("(No hay productos registrados)\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%d) %s ........ $%.1f\n", i + 1, arr[i].nombre, arr[i].precio);
    }
}

Producto* filtrar_baratos(Producto* arr, int n, float umbral, int* m) {
    *m = 0;  // corregido: inicializar contador

    Producto* out = (Producto*)malloc((*m) * sizeof(Producto));  // malloc(0) válido

    for (int i = 0; i < n; i++) {  // corregido: límite del for
        if (arr[i].precio < umbral) {  // corregido: condición según enunciado
            Producto* aux = (Producto*)realloc(out, ((*m) + 1) * sizeof(Producto));  // corregido sizeof
            if (aux != NULL) {
                out = aux;
                out[*m] = arr[i];
                (*m)++;  // corregido: incrementar contador
            }
        }
    }

    if (*m == 0) {  // corregido: manejo de caso vacío
        free(out);
        return NULL;
    }

    return out;
}
