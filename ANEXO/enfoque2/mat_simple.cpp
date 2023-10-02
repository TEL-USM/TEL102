#include "header_mat.h"

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