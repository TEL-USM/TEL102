#include "refugio.h"
#include <stdlib.h>

int refugio_inicializar(struct Refugio* r, int capacidad) {
    r->lista = (struct Mascota*)malloc(sizeof(struct Mascota) * capacidad);
    if (r->lista == NULL) {
        r->cantidad = 0;
        r->capacidad = 0;
        return 0;
    }
    r->cantidad = 0;
    r->capacidad = capacidad;
    return 1;
}

void refugio_liberar(struct Refugio* r) {
    free(r->lista);
    r->lista = NULL;
    r->cantidad = 0;
    r->capacidad = 0;
}

int refugio_agregar(struct Refugio* r, struct Mascota m) {
    if (r->cantidad >= r->capacidad) return 0;
    r->lista[r->cantidad] = m;
    r->cantidad = r->cantidad + 1;
    return 1;
}

double refugio_promedio_edad(struct Refugio* r) {
    if (r->cantidad == 0) return 0.0;
    int i = 0;
    long suma = 0;
    while (i < r->cantidad) {
        suma = suma + r->lista[i].edad;
        i = i + 1;
    }
    return (double)suma / (double)r->cantidad;
}