#include<iostream>

struct book{
	char book_name[100]; // Nombre del libro
	unsigned int year_pub; // Fecha de publicación
};


struct author{
    char author_name[100];
    int n_books;
    struct book *author_books;
};

author createAuthor(){
    author new_author;
    std::cout << "Ingrese nombre autor: ";
    std::cin.getline(new_author.author_name, 100, '\n');
    std::cout << "Ingrese número de libros publicados:";
    std::cin >> new_author.n_books;
    new_author.author_books = new book[new_author.n_books];
    std::cin.ignore();

    return new_author;
}

void fillBookAuthor(author &autor, int pos){
    book libro;

    std::cout << "Ingrese nombre del libro: ";
    std::cin.getline(libro.book_name, 100, '\n');
    std::cout << "Ingrese Fecha de publicación: ";
    std::cin >> libro.year_pub;
    std::cin.ignore();

    autor.author_books[pos] = libro;
}

void showAuthorInfo(author *autores, int pos){
    std::cout << "Mostrando la información del autor" << pos + 1 << std::endl;
    std::cout << "Nombre autor: " << autores[pos].author_name << std::endl;
    std::cout << "Número de libros: " << autores[pos].n_books << std::endl;
    std::cout << "Libros publicados: " << std::endl;
    for(int i=0; i < autores[pos].n_books; i++){
        std::cout << "Libro número " << i + 1 << std::endl;
        std::cout << "Nombre del libro: " << autores[pos].author_books[i].book_name << std::endl;
        std::cout << "Fecha de publicación del libro: " << autores[pos].author_books[i].year_pub << std::endl;
    }
}

int main(){
    // Número de autores
    int n_authors;
    std::cout << "Ingrese el número de autores a ingresar";
    std::cin >> n_authors;
    std::cin.ignore();
    // Se crea un arreglo de autores en memoria dinámica
    author *autores = new author[n_authors]; 

    for(int i=0; i < n_authors; i++){
        autores[i] = createAuthor();
        for(int j=0; j< autores[i].n_books; j++)
            fillBookAuthor(autores[i], j);
    }

    for(int i=0; i<n_authors; i++){
        showAuthorInfo(autores, i);
        delete[] autores[i].author_books;
    }

    delete[] autores;

    return 0;
}