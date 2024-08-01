#include <iostream>

int main(){
    int x;
    std::cin >> x;
    switch(x){
        case 1:
            std::cout << "x vale 1" << std::endl;
            break;
        case 2:
            std::cout << "x vale 2" << std::endl;
            break;
        case 3:
            std::cout << "x vale 3" << std::endl;
            break;
        default:
            std::cout << "x no vale ni 1, ni 2 ni 3" << std::endl;
    }
    
    return 0;
} // ¿Qué ocurre si no escribimos break?