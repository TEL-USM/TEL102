#include <stdio.h>
#include <stdlib.h>
#include "inventario.h"

int main(void) {
    Producto* inventario = NULL;
    int n = 0;
    int op;
    char nombre[MAX_NAME];
    float precio;
    float umbral;

    printf("=== ChipHouse ===\n");
    do {
        printf("1. Agregar producto\n");
        printf("2. Listar productos\n");
        printf("3. Filtrar productos baratos\n");
        printf("0. Salir\n> ");
        if (scanf("%d", &op) != 1) return 0;

        if (op == 1) {
            printf("Nombre: "); scanf("%31s", nombre);
            printf("Precio: "); scanf("%f", &precio);
            inventario = add_producto(inventario, &n, nombre, precio);
        }
        else if (op == 2) {
            list_productos(inventario, n);
        }
        else if (op == 3) {
            printf("Ingrese precio maximo: "); scanf("%f", &umbral);
            int* m = (int*)malloc(sizeof(int));
            if (!m) { fprintf(stderr, "Error: sin memoria\n"); break; }
            Producto* baratos = filtrar_baratos(inventario, n, umbral, m);

            if (baratos == NULL || *m == 0) {
                printf("(Sin productos bajo %.2f)\n", umbral);
            } else {
                printf("Productos bajo %.2f:\n", umbral);
                for (int i = 0; i < *m; i++) {
                    printf("- %s ($%.1f)\n", baratos[i].nombre, baratos[i].precio);
                }
            }
            free(baratos);
            free(m);
        }
    } while (op != 0);

    free(inventario);
    inventario = NULL;
    return 0;
}
