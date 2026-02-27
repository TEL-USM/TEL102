#include <stdio.h>
#include <string.h>

#define MAX_SONGS 5
#define MAX_NAME 30

struct Cancion {
    char nombre[MAX_NAME];
    float duracion; // en minutos
};

// Prototipos
int agregarCancion(struct Cancion playlist[], int n);
void mostrarPlaylist(struct Cancion playlist[], int n);
float duracionTotal(struct Cancion playlist[], int n);   // *** FALTANTE ***
void buscarCancion(struct Cancion playlist[], int n, char nombre[]); // *** FALTANTE ***