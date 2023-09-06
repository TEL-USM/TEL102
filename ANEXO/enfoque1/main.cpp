#include <stdio.h>
#include <iostream>
using namespace std;

struct punto{
    int x;
    int y;
};

punto Ingresar()
{
    punto p;
    cout << "Ingresar el valor de x: ";
    cin >> p.x;
    cout << "Ingresar el valor de y: ";
    cin >> p.y;
    return p;
}

float Elevar(int,int);
float RaizCuadrada(int);

float ValorAbsoluto(float valor){
    if(valor < 0)
        return -1*valor;
    return valor;
}


float Elevar(int base, int exponente)
{
    if(exponente == 0)
        return 1;

    float result = base;
    
    while(--exponente > 0)// Equivale a usar solo exponente y decrecer antes de terminar el while
        result = result * base;

    return (float)result;
}

float RaizCuadrada(int x)
{
    float i = 1;
    float dif = ValorAbsoluto(x - Elevar(i,2));
    while(dif > ValorAbsoluto(x - Elevar(i+1,2))){
        dif = ValorAbsoluto(x - Elevar(++i,2));
    }
    float resultado = (x+Elevar(i,2))/(2*i); 
    return resultado;
}

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
