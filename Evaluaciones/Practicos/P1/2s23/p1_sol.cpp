#include<iostream>
#include<cstring>

struct book{
    char book_name[100]; // Nombre del libro
    char author[100]; // Nombre del autor
    unsigned int year_pub; // Fecha de publicación
};

book fillBook(){
    book libro;
    std::cout << "Ingrese nombre del libro: ";
    std::cin.getline(libro.book_name, 100, '\n');
    std::cout << "Ingrese nombre del autor: ";
    std::cin.getline(libro.author,100, '\n');
    std::cout << "Ingrese Fecha de publicación: ";
    std::cin >> libro.year_pub;
    std::cin.ignore();

    return libro;
}

unsigned int recentBook(book libros[3]){
    int year = 0;
    for(int i = 0; i<3; i++){
        if(year<libros[i].year_pub){
            year = libros[i].year_pub;
        }
    }
    return year;
}

void showBooksInfo(book libros[3]){
    for(int i=0; i<3; i++){
        std::cout << "Libro número " << i+1 << std::endl;
        std::cout << "Nombre del libro: " << libros[i].book_name << std::endl;
        std::cout << "Nombre del autor: " << libros[i].author << std::endl;
        std::cout << "Fecha de publicación: " << libros[i].year_pub << std::endl;
    }
}

int main(){
    book libros[3];
    for(int i=0; i<3; i++)
        libros[i] = fillBook();

    showBooksInfo(libros);

    std::cout << "La fecha de publicación más reciente es " << recentBook(libros) << std::endl;

    return 0;
}
