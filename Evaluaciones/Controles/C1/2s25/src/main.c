#include "cineclub.h"

int main() {
    struct Pelicula cartelera[MAX_MOVIES];
    int n = 0;
    int opcion;

    printf("CineClub\n");
    do {
        printf("\nMenú:\n");
        printf("1) Agregar película\n");
        printf("2) Listar cartelera\n");
        printf("3) Buscar por título\n");
        printf("4) Promedio de duración\n");
        printf("5) Contar largometrajes (> 60 min)\n");
        printf("6) Contar por género (1=Acción,2=Drama,3=Comedia,4=Otro)\n");
        printf("0) Salir\n");
        printf("Opción: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            n = agregarPelicula(cartelera, n);
        } else if (opcion == 2) {
            listarPeliculas(cartelera, n);
        } else if (opcion == 3) {
            char t[MAX_STR];
            printf("Título a buscar (sin espacios): ");
            scanf("%29s", t);
            int idx = buscarPorTitulo(cartelera, n, t);
            if (idx >= 0)
                printf("Película %s encontrada (%d min, año %d, genero %d)\n",
                       cartelera[idx].titulo, cartelera[idx].duracion,
                       cartelera[idx].anio, cartelera[idx].genero);
            else
                printf("Película no encontrada\n");
        } else if (opcion == 4) {
            float p = promedioDuracion(cartelera, n);
            printf("Promedio: %.2f min\n", p);
        } else if (opcion == 5) {
            int c = contarLargometrajes(cartelera, n);
            printf("Largometrajes (> 60 min): %d\n", c);
        } else if (opcion == 6) {
            int g;
            printf("Género a contar (1=Acción,2=Drama,3=Comedia,4=Otro): ");
            scanf("%d", &g);
            int c = contarPorGenero(cartelera, n, g);
            printf("Películas de genero %d: %d\n", g, c);
        } else if (opcion == 0) {
            printf("Fin.\n");
        } else {
            printf("Opción inválida.\n");
        }
    } while (opcion != 0);

    return 0;
}