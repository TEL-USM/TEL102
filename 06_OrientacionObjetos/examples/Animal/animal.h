#include <string>

class Animal {
    public:
        //Prototipos de constructores:
        // Constructor con lista de inicialización, la cual
        // inicializa los atributos internos edad_hijos y n_hijos
        Animal(): edad_hijos(NULL), n_hijos(0) {}
        // Este es el prototipo de un constructor, por lo tanto
        // la implementación estará en otro lugar
        Animal(std::string i_nombre);

        ~Animal(); //Prototipo de destructor

        //Prototipos de metodos:
        void asigna_edad_hijo(int i, int edad);
        int edad_hijo(int i);
        
        //Implementacion de método:
        void crea_hijos(int num) {
            // Pregunta si num es mayor o igual que cero
            // (no puedo tener hijos negativos)
            n_hijos = num <= 0 ? 0 : num;
            // Ahora preguntamos si el puntero a entero
            // edad_hijos ya está siendo utilizado, para borrarlo
            if(edad_hijos) delete[] edad_hijos;
            // Y ahora, si num > 0, creamos un arreglo de para almacenar las
            // edades de cada hijo de tamaño num
            edad_hijos = num ? new int[num] : NULL;
        }

        //Atributos:
        std::string nombre;
        
    private:
        int *edad_hijos;
        int n_hijos;
};