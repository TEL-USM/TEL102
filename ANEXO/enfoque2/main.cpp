#include "header_mat.h"
#include "header_punto.h"

float Distancia(punto p1, punto p2){
    float sumax = (float)p2.x - (float)p1.x;
    float sumay = (float)p2.y - (float)p1.y;
    float base = Elevar(sumax,2) +Elevar(sumay,2);
    return RaizCuadrada(base); 
}

int main(int argc, char** argv)
{
	punto p1,p2;
	cout << "Ingrese punto 1: " << endl;
    p1 = Ingresar();
    cout << "Ingrese punto 2: " << endl;
    p2 = Ingresar();
    float r = Distancia(p1,p2);
    cout<<"\t Resultados para p1: ("<<p1.x<<","<<p1.y<<")"<<endl;
    cout<<"\t Resultados para p2: ("<<p2.x<<","<<p2.y<<")"<<endl;
    cout<<"\t Distancia: "<< r <<endl;
	return 0;
}
