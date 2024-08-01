#include <iostream>
#include <cstring>

int main(){
    
    char str1[10] = "hola ";
    char str2[10] = "mundo";
    std::cout << strlen(str1) << std::endl;
    std::cout << strcat(str1, str2) << std::endl;
    strcpy(str1, "chao");
    std::cout << str1 << std::endl;
    
    return 0;
}