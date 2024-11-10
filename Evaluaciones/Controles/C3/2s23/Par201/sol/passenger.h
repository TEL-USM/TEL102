#include<string>
#include<iostream>

class Passenger{
    public:
        Passenger(std::string name): nombre(name){}
        std::string getName(){
            return nombre;
        }
        void setName(std::string name){
            nombre = name;
        }

        void showPassengerInfo(){
            std::cout << "Nombre de usuario:" << nombre << std::endl;
        }

    private:
        std::string nombre;
};