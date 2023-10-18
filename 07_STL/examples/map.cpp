#include <map>
#include <iostream>

int main(){
    // Declaración <clave, valor>
    std::map <std::string, double> lista_notas;
    // Agregando elementos a través de pares llave/valor
    lista_notas["Pedro"] = 3.5;
    lista_notas["Ana"] = 4.6;
    lista_notas["Jose"] = 4.7;
    lista_notas["Maria"] = 3.6;
    // Imprimir nota de Maria:
    std::cout << lista_notas["Maria"] << std::endl; // Salida: 3.6
    // Borrar según clave (borra a maria):
    lista_notas.erase("Maria");
    std::cout << " Largo : " << lista_notas.size() << std::endl; // Largo :3
    // Find retorna iterador si encuentra y grade_list.end() sino
    if(lista_notas.find("Juan") == lista_notas.end())
        std :: cout << "Juan no esta !" << std::endl;
    // Iterator: Recorrer secuencialmente la lista
    std::map <std::string,double>::iterator iter;
    for(iter = lista_notas.begin(); iter != lista_notas.end(); iter++)
        // Derreferencia iterador y muestra cada para "llave: valor" (ej. Pedro: 3.5)
        std::cout << (*iter).first << ":" << (*iter).second << std::endl;
    // Borra lista
    lista_notas.clear();
    return 0;
}