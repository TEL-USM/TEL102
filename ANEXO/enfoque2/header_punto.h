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

