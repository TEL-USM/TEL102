#include "sonify.h"

int main() {
    struct Cancion playlist[MAX_SONGS];
    int n = 0; // cantidad actual de canciones
    int opcion;
    char nombreBuscado[MAX_NAME];

    printf("Bienvenido a Sonify\n");

    do {
        printf("\nMenú:\n");
        printf("1. Agregar canción\n");
        printf("2. Mostrar playlist\n");
        printf("3. Duración total\n");
        printf("4. Buscar canción\n");
        printf("0. Salir\n");
        printf("Seleccione opción: ");
        scanf("%d", &opcion);
        getchar(); // limpiar '\n' pendiente

        switch (opcion) {
            case 1:
                if (n < MAX_SONGS) {
                    n = agregarCancion(playlist, n);
                } else {
                    printf("La playlist está llena.\n");
                }
                break;
            case 2:
                mostrarPlaylist(playlist, n);
                break;
            case 3:
                printf("Duración total: %.2f min\n", duracionTotal(playlist, n));
                break;
            case 4:
                printf("Ingrese nombre a buscar (sin espacios): ");
                scanf("%s", nombreBuscado);
                buscarCancion(playlist, n, nombreBuscado);
                break;
            case 0:
                printf("Gracias por usar Sonify.\n");
                break;
            default:
                printf("Opción inválida.\n");
        }
    } while (opcion != 0);

    return 0;
}