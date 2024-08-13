#include <iostream>

// Esto permite escribir comentarios de una sola línea
// Por cada línea adicional, debes agregar nuevamente el //
int main(){
    /*
    Esto de acá corresponde a un comentario de múltiples líneas.
    Eso quiere decir, que mientras te mantengas entre los símbolos de comentario
    puedes escribir tantas líneas como desees, y estas serán ignoradas por el compilador.
    */

    int x = 3;
    float y = 5.7;

    std::cout << x+y << std::endl;

    return 0;
}