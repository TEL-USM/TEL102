#include "potionlab.h"

// ¡¡NO MODIFICAR!!

void list_ingredients(Ingredient* arr, int n) {
    int i;
    if (n == 0) { printf("(Sin ingredientes)\n"); return; }
    for (i = 0; i < n; i++)
        printf("%d) %-15s [%.1f]\n", i + 1, arr[i].nombre, arr[i].poder);
}

void list_potions(Potion* arr, int n) {
    int i;
    if (n == 0) { printf("(Sin pociones)\n"); return; }
    for (i = 0; i < n; i++)
        printf("%d) %-15s [%.1f]\n", i + 1, arr[i].nombre, arr[i].poder);
}

int main() {
    // Creación de puntero para arreglo de ingredientes y número de ingredientes actual
    Ingredient* ingredientes = NULL; int nIng = 0;
    // Creación de puntero para arreglo de pociones y número de pociones actual
    Potion* pociones = NULL; int nPot = 0;
    // Variables para detección de operación e índice (cuando corresponda)
    int op, idx;
    // Nombre y poder del elemento guardado
    char nombre[MAX_NAME];
    float poder;

    printf("=== PotionLab ===\n");

    do {
        printf("\n1. Agregar ingrediente\n2. Eliminar ingrediente\n3. Listar ingredientes\n");
        printf("4. Agregar pocion\n5. Eliminar pocion\n6. Listar pociones\n0. Salir\n> ");
        scanf("%d", &op);

        if (op == 1) { // Agregar ingrediente
            printf("Nombre: "); scanf("%31s", nombre);
            printf("Poder: "); scanf("%f", &poder);
            ingredientes = add_ingredient(ingredientes, &nIng, nombre, poder);
        }
        else if (op == 2) { // Borrar ingrediente
            list_ingredients(ingredientes, nIng);
            printf("Indice: "); scanf("%d", &idx);
            ingredientes = delete_ingredient(ingredientes, &nIng, idx - 1);
        }
        else if (op == 3) list_ingredients(ingredientes, nIng); // Listar ingredientes
        else if (op == 4) { // Agregar poción
            printf("Nombre pocion: "); scanf("%31s", nombre);
            printf("Poder: "); scanf("%f", &poder);
            pociones = add_potion(pociones, &nPot, nombre, poder);
        }
        else if (op == 5) { // Borrar poción
            list_potions(pociones, nPot);
            printf("Indice: "); scanf("%d", &idx);
            pociones = delete_potion(pociones, &nPot, idx - 1);
        }
        else if (op == 6) list_potions(pociones, nPot); // Listar pociones
    } while (op != 0); // Opción 0, salir

    // Liberación de elementos
    free(ingredientes);
    free(pociones);
    ingredientes = NULL;
    pociones = NULL;
    return 0;
}
