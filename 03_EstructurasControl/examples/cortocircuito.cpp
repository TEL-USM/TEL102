#include <iostream>

int main(){
    int x = 1;
    
    if(x==1 || x++) { //|| -> or de python, && -> and de python
        std::cout << "El valor de x es " << x << std::endl;
    }
    
    return 0;
}