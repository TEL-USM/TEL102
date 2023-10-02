#include <iostream>
using namespace std;
#include "header_mat.h"

namespace xy
{
    struct punto{
        int x;
        int y;
    };

    punto Ingresar(int orden)
    {
        cout << "Ingrese punto " << orden << ": " << endl;
        punto p;
        cout << "Ingresar el valor de x: ";
        cin >> p.x;
        cout << "Ingresar el valor de y: ";
        cin >> p.y;
        return p;
    }

    float Distancia(punto p1, punto p2){
        float sumax = (float)p2.x - (float)p1.x;
        float sumay = (float)p2.y - (float)p1.y;
        float base = Elevar(sumax,2) +Elevar(sumay,2);
        return RaizCuadrada(base); 
    }

    void ImprimirResultados(punto p1, punto p2, float distancia)
    {
        cout<<"\t Resultados para p1: ("<<p1.x<<","<<p1.y<<")"<<endl;
        cout<<"\t Resultados para p2: ("<<p2.x<<","<<p2.y<<")"<<endl;
        cout<<"\t Distancia: "<< distancia <<endl;
    }
}
 
namespace xyz
{
    struct punto{
        int x;
        int y;
        int z;
    };

    punto Ingresar(int orden)
    {
        cout << "Ingrese punto " << orden << ": " << endl;
        punto p;
        cout << "Ingresar el valor de x: ";
        cin >> p.x;
        cout << "Ingresar el valor de y: ";
        cin >> p.y;
        cout << "Ingresar el valor de z: ";
        cin >> p.z;
        return p;
    }

    float Distancia(punto p1, punto p2){
        float sumax = (float)p2.x - (float)p1.x;
        float sumay = (float)p2.y - (float)p1.y;
        float sumaz = (float)p2.z - (float)p1.z;
        float base = Elevar(sumax,2) + Elevar(sumay,2) + Elevar(sumaz,2);
        return RaizCuadrada(base); 
    }

    void ImprimirResultados(punto p1, punto p2, float distancia)
    {
        cout<<"\t Resultados para p1: ("<<p1.x<<","<<p1.y<<","<<p1.z<<")"<<endl;
        cout<<"\t Resultados para p2: ("<<p2.x<<","<<p2.y<<","<<p2.z<<")"<<endl;
        cout<<"\t Distancia: "<< distancia <<endl;
    }

}