struct Mascota {
    int id;
    char nombre[32];
    char tipo[16];   /* "Perro" o "Gato" */
    int edad;
};

struct Refugio {
    struct Mascota* lista;
    int cantidad;
    int capacidad;
};

/* Reserva memoria para 'capacidad' mascotas. Retorna 1 si OK, 0 si falla. */
int refugio_inicializar(struct Refugio* r, int capacidad);

/* Libera memoria y deja el refugio en estado vacío. */
void refugio_liberar(struct Refugio* r);

/* Agrega una mascota si hay espacio. Retorna 1 si OK, 0 si está lleno. */
int refugio_agregar(struct Refugio* r, struct Mascota m);

/* Retorna el promedio de edad; si no hay mascotas, retorna 0.0. */
double refugio_promedio_edad(struct Refugio* r);