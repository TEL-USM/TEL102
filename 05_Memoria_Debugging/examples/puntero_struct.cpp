#include<iostream>
#include<cstring>

typedef struct character{
    char nom[30];
    char clase[30];
    int intel;
    int agi;
    int str;
    int mp;
    int def;
    int att;
} pj;

int main(){
    
    pj *player1 = new pj; //puntero a struct + reserva de memoria
    
    strcpy((*player1).nom, "Juanito"); // (*ptr).var equivale. ptr->var
    strcpy(player1->clase, "Warrior");
    
    std::cout << player1->nom << " " << (*player1).clase << std::endl;

    //¿Como añadirían valores al resto de los atributos?
    (*player1).intel = 10;
    player1->agi=7;


    delete player1;
    return 0;
}