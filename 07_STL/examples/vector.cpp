#include<vector>
#include<iostream>

int main(){
    // Instanciación vacı́a:
    std::vector<double> a1;
    // Instanciación con 4 elementos:
    std::vector<double> a2(4);
    // El método push_back permite agregar elementos al final del vector
    a2.push_back(2.5);
    a2.push_back(3);
    a2.push_back(5);
    a2.push_back(5);
    a2.push_back(5);
    // a2.size() es el método que retorna el tamaño actual del vector
    for(int i=0; i<a2.size(); i++)
        std::cout << a2[i] << std::endl;

    // Chequea la capacidad de memoria ( siempre mayor que size ):
    std::cout << a2.capacity() << std::endl;
    // Reescalar tamaño del arreglo. Elimina último elemento de a2:
    a2.resize(3);
    for(int i=0; i<a2.size(); i++)
        std::cout << a2[i] << std::endl;
    // Reescalar tamaño del arreglo. Agrega 10 elementos a a1 (constructor):
    a1.resize(10);
    std::cout << "Contenido de vector a1" << std::endl;
    for(int i=0; i<a1.size(); i++)
        std::cout << a1[i] << std::endl;
    // Reescalar capacidad del arreglo (memoria). Aumenta el tamaño de la memoria para poder almacenar 
    // 20 elementos en a1 (constructor). No crea los objetos:
    a1.reserve(20);
    std::cout<<"Elementos de a1 luego de reserve" << std::endl;
    for(int i=0; i<a1.size(); i++)
        std::cout << a1[i] << std::endl;
    // Reescalar capacidad del arreglo (memoria).
    // Ningún efecto en a2, pues nuevo valor < que capacidad actual:
    a2.reserve(3);
    std::cout<<"Elementos de a2 luego de reserve" << std::endl;
    for(int i=0; i<a2.size(); i++)
        std::cout << a2[i] << std::endl;


    return 0;
}