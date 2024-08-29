#include <iostream>
#include <cstring>

// Pauta Control 1 Paralelo 200
// Descuentos por sintáxis o por no seguir instrucciones (cabecera de función, funcionamiento, etc.), según gravedad
struct team {
    char sport[20]; // Deporte del equipo
    unsigned int players; // Cantidad de jugadores
    double rating; // Calificación del equipo
};

// 20pts - Pregunta 1
team createTeam(){
    // 5pts - Creación de elemento team 
    team equipo;
    // 10pts - Llenado de información correcto
    std::cout << "Ingrese deporte del equipo: ";
    std::cin >> equipo.sport;
    std::cout << "Ingrese cantidad de jugadores: ";
    std::cin >> equipo.players;
    std::cout << "Ingrese la calificación del equipo: ";
    std::cin >> equipo.rating;

    // 5pts - retorno de variable equipo
    return equipo;  
}

// 20pts - Pregunta 2
void showTeamsInfo(team equipos[], int n_equipos){
    // 5pts - Estructura iterativa para recorrer los equipos (for-while-do while)
    for(int i=0; i<n_equipos; i++){ // 5pts - Utilización de la variable n_equipos para obtener cantidad de equipos
    	// 10pts - Se muestra información según lo solicitado
        std::cout << "Equipo número " << i+1 << std::endl; 
        std::cout << "Deporte del equipo: " << equipos[i].sport << std::endl;
        std::cout << "Cantidad de jugadores: " << equipos[i].players << std::endl;
        std::cout << "Calificación del equipo: " << equipos[i].rating << std::endl;
    }
}

// 30pts - Pregunta 3
void teamComparison(team equipo1, team equipo2){
    // 5pts - Utilización de variables equipo1 y equipo2
    // 10pts - Comparación de equipos utilizando strcmp
    if(strcmp(equipo1.sport, equipo2.sport)==0){
        // 5pts - Comparación de ratings para evaluar qué equipo es mejor y estructura de ifs correcta 
        // 5pts - Mensajes según cada caso
        if(equipo1.rating > equipo2.rating){
            std::cout << "El equipo 1 es mejor" << std::endl;
        }else if(equipo1.rating < equipo2.rating){
            std::cout << "El equipo 2 es mejor" << std::endl;
        }else{
            std::cout << "Ambos equipos     teamComparison(equipos[0], equipos[2]);
    teamComparison(equipos[0], equipos[3]);son iguales" << std::endl;
        }
    }else{
        // 5pts - Mensaje en caso de no ser el mismo deporte
        std::cout << "Los equipos no se pueden enfrentar pues son de diferentes deportes" << std::endl;
    }

}


int main() {
    // 30pts - Pregunta 4
    
    // 10pts - Creación de la variable arreglo de equipos con 5 espacios para equipos
    int n_teams=5;
    team equipos[n_teams];

    // 10pts - Creación de equipos
    for(int i=0; i < n_teams; i++){
        equipos[i] = createTeam();
    }

    // 5pts - Se muestra información de equipos
    showTeamsInfo(equipos, n_teams);

    // 5pts - Se comparan el primer y segundo equipo del arreglo
    teamComparison(equipos[0], equipos[1]);

    return 0;
}
