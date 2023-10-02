#include "header_punto.h"
//Se puede explicitar el uso del namespace
//al inicio para todo el código
//using namespace xy;

int main(int argc, char** argv)
{
    using namespace xy;//o se puede inidcar aquí
	punto p1,p2;
	p1 = Ingresar(1);
    p2 = Ingresar(2);
    float r = Distancia(p1,p2);
    xy::ImprimirResultados(p1,p2,r);//se puede explicitar tmb
    cout<<"**********************************************"<< r <<endl;
    //Se puede explicitar si no se ha indicado
    //o si se quiere utilizar otro
    xyz::punto p3,p4;
	p3 = xyz::Ingresar(1);
    p4 = xyz::Ingresar(2);
    float r2 = xyz::Distancia(p3,p4);
    xyz::ImprimirResultados(p3,p4,r2);

	return 0;
}
