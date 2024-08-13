#include <iostream>

int main(){
    int x = 10;
    int y = 5;    

    // Precedencia: orden de prioridad al ejecutar múltiples operadores en una sentencia
    // Por precedencia la múltiplicación se ejecuta primera que la suma (revisar tabla)
    std::cout << x + y * x << std::endl;

    // Asociatividad: orden en que un operador individual opera sobre sus operandos.
    x = 20 + 12;
    // En el caso del operador +, la asociatividad es -> (tomo 20 y le sumo 12)
    // Para el operador =, la asociatividad es <- (resuelvo 20 + 12 y el resultado lo guardo en x)

    std::cout << x << std::endl;

    return 0;
}