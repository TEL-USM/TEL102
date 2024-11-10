#include"passenger.h"
#include"flight.h"

class Reservation{
    public:
        Reservation(Flight* flight, Passenger* passenger):vuelo(flight), pasajero(passenger){}

        Flight* getFlight(){return vuelo;}
        Passenger* getPassenger(){return pasajero;}

        void showReservationInfo(){
            std::cout << "Información de reserva:" << std::endl;
            vuelo->showFlightInfo();
            pasajero->showPassengerInfo();
        }

    private:
        Flight *vuelo;
        Passenger *pasajero;
};