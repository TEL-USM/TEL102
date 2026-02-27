#include "cineclub.h"

// Agregar película a la cartelera
int agregarPelicula(struct Pelicula v[], int n) {
    if (n >= MAX_MOVIES) {
        printf("No se pueden agregar más películas (máximo %d).\n", MAX_MOVIES);
        return n;
    }

    struct Pelicula p;
    printf("Título (sin espacios): ");
    scanf("%29s", p.titulo);
    printf("Duración (minutos): ");
    scanf("%d", &p.duracion);
    printf("Año: ");
    scanf("%d", &p.anio);
    printf("Género (1=Acción, 2=Drama, 3=Comedia, 4=Otro): ");
    scanf("%d", &p.genero);

    v[n] = p;
    return n + 1;
}

// Listar todas las películas
void listarPeliculas(struct Pelicula v[], int n) {
    if (n == 0) {
        printf("No hay películas en la cartelera.\n");
        return;
    }

    printf("\nCartelera:\n");
    for (int i = 0; i < n; i++) {
        printf("%d) %s (%d min, %d, genero %d)\n",
               i + 1,
               v[i].titulo,
               v[i].duracion,
               v[i].anio,
               v[i].genero);
    }
}

// Buscar película por título
int buscarPorTitulo(struct Pelicula v[], int n, char titulo[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(v[i].titulo, titulo) == 0) {
            return i;
        }
    }
    return -1;
}

// Calcular promedio de duración
float promedioDuracion(struct Pelicula v[], int n) {
    if (n == 0) return 0.0;

    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += v[i].duracion;
    }
    return (float)suma / n;
}

// Contar largometrajes (> 60 min)
int contarLargometrajes(struct Pelicula v[], int n) {
    float duraciones[MAX_MOVIES];
    for (int i = 0; i < n; i++) {
        duraciones[i] = (float)v[i].duracion;
    }
    return contarMayoresQue(duraciones, n, 60.0);
}

// Contar películas de un género específico
int contarPorGenero(struct Pelicula v[], int n, int gen) {
    int generos[MAX_MOVIES];
    for (int i = 0; i < n; i++) {
        generos[i] = v[i].genero;
    }
    return contarIgualesA(generos, n, gen);
}

// Función genérica: contar mayores que un umbral
int contarMayoresQue(float v[], int n, float umbral) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > umbral) c++;
    }
    return c;
}

// Función genérica: contar valores iguales a un dado
int contarIgualesA(int v[], int n, int valor) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == valor) c++;
    }
    return c;
}
