#include "refugio.h"
#include <stdio.h>

int main() {
    struct Refugio refugio;

    if (!refugio_inicializar(&refugio, 3)) {
        printf("Error al reservar memoria.\n");
        return 1;
    }

    for (int i = 0; i < refugio.capacidad; i++) {
        struct Mascota nueva;
        printf("\n--- Registro de Mascota %d ---\n", i + 1);
        printf("ID: ");
        scanf("%d", &nueva.id);
        printf("Nombre: ");
        scanf("%31s", nueva.nombre);
        printf("Tipo (Perro o Gato): ");
        scanf("%15s", nueva.tipo);
        printf("Edad: ");
        scanf("%d", &nueva.edad);

        if (!refugio_agregar(&refugio, nueva)) {
            printf("No hay espacio disponible.\n");
            break;
        }
    }

    printf("\nMascotas registradas: %d\n", refugio.cantidad);
    for (int i = 0; i < refugio.cantidad; i++) {
        printf("%d) %s, %s, %d años\n",
               refugio.lista[i].id,
               refugio.lista[i].nombre,
               refugio.lista[i].tipo,
               refugio.lista[i].edad);
    }

    double promedio = refugio_promedio_edad(&refugio);
    printf("\nPromedio de edad: %.2f años\n", promedio);

    refugio_liberar(&refugio);
    return 0;
}
