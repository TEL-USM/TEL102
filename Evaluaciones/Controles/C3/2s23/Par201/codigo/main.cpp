	#include "flight.h"
	#include "passenger.h"
	#include "reservation.h"
	
	int main(){
		
		// Creación de vuelos y reservaciones
		Flight* flight1 = new Flight("FA101", "New York", "Paris");
		Reservation* reservation1 = new Reservation(flight1, new Passenger("Alice"));
		
		Flight* flight2 = new Flight("FA102", "Paris", "Tokyo");
		Reservation* reservation2 = new Reservation(flight2, new Passenger("Bob"));

        // Mostrar reservas
        reservation1->showReservationInfo();
        reservation2->showReservationInfo();

		return 0;
	}
