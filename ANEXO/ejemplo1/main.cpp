#include <stdio.h>
#include <iostream>
using namespace std;


int main(int argc, char** argv)
{
    cout << "Valor 'argc': "<< argc << endl;
    if(argc > 1){
        for (int i = 0; i < argc; i++)
        {
            cout << "Valor 'argv["<<i<<"]': "<< argv[i] << endl;
        }
        
        int i = std::stoi(argv[1]); //https://cplusplus.com/reference/string/stoi/
        float ii = std::stof(argv[2]); //https://cplusplus.com/reference/string/stof/
        cout << "Valor i: "<< i << endl;
        cout << "Valor ii: "<< ii << endl;
        cout << "Valor i + ii: "<< i+ii << endl;
    }
    return 0;
}
