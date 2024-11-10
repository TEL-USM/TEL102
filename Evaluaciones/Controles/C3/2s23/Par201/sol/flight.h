#include<string>
#include<iostream>

class Flight{
    public:
        Flight(std::string flightNumber, std::string departure, std::string destination):
        nVuelo(flightNumber), ciudadSalida(departure), ciudadLlegada(destination){}

        void showFlightInfo(){
            // TODO: Agregar Informacion de Flight
            std::cout << "Información del vuelo" << std::endl;
            std::cout<< "Número de vuelo: " << nVuelo << std::endl;
            std::cout<< "Ciudad de salida: " << ciudadSalida << std::endl;
            std::cout<< "Ciudad de llegada: " << ciudadLlegada << std::endl;
        }
        

    private:
        std::string nVuelo;
        std::string ciudadSalida;
        std::string ciudadLlegada;
};