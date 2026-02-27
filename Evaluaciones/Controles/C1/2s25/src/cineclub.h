#ifndef CINECLUB_H
#define CINECLUB_H

#include <stdio.h>
#include <string.h>

#define MAX_MOVIES 10
#define MAX_STR    30

struct Pelicula {
    char titulo[MAX_STR];   // sin espacios
    int  duracion;          // en minutos
    int  anio;              // año de estreno
    int  genero;            // 1=Acción, 2=Drama, 3=Comedia, 4=Otro
};

/* Prototipos a implementar en cineclub.c */
int   agregarPelicula(struct Pelicula v[], int n);
void  listarPeliculas(struct Pelicula v[], int n);
int   buscarPorTitulo(struct Pelicula v[], int n, char titulo[]);
float promedioDuracion(struct Pelicula v[], int n);
int   contarLargometrajes(struct Pelicula v[], int n);     // usa contarMayoresQue(..., 60.0)
int   contarPorGenero(struct Pelicula v[], int n, int gen);  // usa contarIgualesA(..., gen)

/* Ambas funciones deben implementarse también en Parte B */
int contarMayoresQue(float v[], int n, float umbral);
int contarIgualesA(int v[], int n, int valor);

#endif