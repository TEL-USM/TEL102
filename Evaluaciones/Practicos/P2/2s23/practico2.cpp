#include<iostream>

struct book{
	char book_name[100]; // Nombre del libro
	unsigned int year_pub; // Fecha de publicación
};

struct author{
	char author_name[100]; // Nombre del autor
	int n_books; // Número de libros publicados
	struct book *author_books; // Arreglo para almacenar los libros publicados
};

// Agregue aquı́ sus funciones

int main(){
   // Agregue aquı́ su código principal

    return 0;
}
