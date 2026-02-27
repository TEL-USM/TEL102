// cineclub.c
#include "cineclub.h"

/* Agrega una película si hay espacio. Retorna el nuevo n. */
int agregarPelicula(struct Pelicula v[], int n) {
    if (n >= MAX_MOVIES) {
        printf("Cartelera llena.\n");
        return n;
    }

    printf("Ingrese título (sin espacios): ");
    scanf("%s", v[n].titulo);

    printf("Ingrese duración (min): ");
    scanf("%d", &v[n].duracion);

    printf("Ingrese año: ");
    scanf("%d", &v[n].anio);

    printf("Género (1=Acción, 2=Drama, 3=Comedia, 4=Otro): ");
    scanf("%d", &v[n].genero);

    printf("Película agregada.\n");
    return n + 1;
}

/* Lista todas las películas cargadas. */
void listarPeliculas(struct Pelicula v[], int n) {
    if (n == 0) {
        printf("No hay películas.\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%d) %s - %d min - %d - género %d\n",
               i + 1, v[i].titulo, v[i].duracion, v[i].anio, v[i].genero);
    }
}

/* Devuelve el índice del título exacto, o -1 si no existe. */
int buscarPorTitulo(struct Pelicula v[], int n, char titulo[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(v[i].titulo, titulo) == 0) {
            return i;
        }
    }
    return -1;
}

/* Retorna el promedio de duración (minutos). Para n=0 retorna 0.0. */
float promedioDuracion(struct Pelicula v[], int n) {
    if (n == 0) return 0.0;
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += v[i].duracion;
    }
    return (float)suma / (float)n;
}

/* ---- Funciones genéricas requeridas también en Parte B ---- */
/* Cuenta valores estrictamente mayores que 'umbral'. */
int contarMayoresQue(float v[], int n, float umbral) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > umbral) c++;
    }
    return c;
}

/* Cuenta valores exactamente iguales a 'valor'. */
int contarIgualesA(int v[], int n, int valor) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == valor) c++;
    }
    return c;
}

/* ---- Funciones del contexto que reutilizan las genéricas ---- */
/* Cuenta películas con duración > 60 usando contarMayoresQue. */
int contarLargometrajes(struct Pelicula v[], int n) {
    float duraciones[MAX_MOVIES];
    for (int i = 0; i < n; i++) {
        duraciones[i] = (float)v[i].duracion;
    }
    return contarMayoresQue(duraciones, n, 60.0);
}

/* Cuenta películas del género 'gen' (1..4) usando contarIgualesA. */
int contarPorGenero(struct Pelicula v[], int n, int gen) {
    int generos[MAX_MOVIES];
    for (int i = 0; i < n; i++) {
        generos[i] = v[i].genero;
    }
    return contarIgualesA(generos, n, gen);
}