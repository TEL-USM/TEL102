#include <iostream>

int main(){
    int i = 1, num;
    std::cin >> num;

    do{
        std::cout << i << std::endl;
        i++;
    }while(i<=num);
    
    return 0;
}