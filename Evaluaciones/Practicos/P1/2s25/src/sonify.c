#include "sonify.h"

// Implementaciones completas
int agregarCancion(struct Cancion playlist[], int n) {
    printf("Ingrese nombre (sin espacios): ");
    scanf("%s", playlist[n].nombre);

    printf("Ingrese duración (min): ");
    scanf("%f", &playlist[n].duracion);
    getchar(); // limpiar '\n' pendiente

    printf("Canción agregada.\n");
    return n + 1;
}

void mostrarPlaylist(struct Cancion playlist[], int n) {
    if (n == 0) {
        printf("La playlist está vacía.\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%d. %s - %.2f min\n", i + 1, playlist[i].nombre, playlist[i].duracion);
    }
}

// *** FUNCIONES FALTANTES (resuélvalas primero en papel) ***

float duracionTotal(struct Cancion playlist[], int n) {
    // TODO: implementar
}

void buscarCancion(struct Cancion playlist[], int n, char nombre[]) {
    // TODO: implementar
}