#include <iostream>
#include <cstring>

// Creamos la definición de dicha clase
class Usuario{
    // Dentro de la definición indicamos sus atributos como variables internas
    // y sus métodos como funciones internas.

    // Atributos
    private: // Los atributos son privados en este caso, por lo que no se pueden acceder desde fuera
        int id;
        char passwd[20];

    public:
        // Método constructor
        Usuario(int n_id, char n_passwd[20]){
            // Con el constructor inicializamos los atributos internos de
            // nuestra clase. En este caso, el atributo id y el atributo passwd
            id = n_id;
            strcpy(passwd, n_passwd);
        }

        // Métodos
        void changePasswd(char n_passwd[20]){
            strcpy(passwd, n_passwd);
        }

        int getId(){
            return id;
        }

};

// Al igual que en las estructuras, cuando defines una clase estás creando un 
// nuevo tipo de dato

int main(){
    // A continuación crearemos un objeto a partir de la definición de la clase
    Usuario user(4, "Mipasssegura");
    // En este punto tenemos un objeto de la clase Usuario, el cual podemos utilizar
    // Mostremos el id del usuario creado

    std::cout << "El id de nuestro usuario es " << user.getId()  << std::endl;

    return 0;
}