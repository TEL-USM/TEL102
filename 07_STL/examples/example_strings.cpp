#include <string>
#include <iostream>
using namespace std;
int main(){
    // Creamos tres objetos de tipo string
    string a("abcd efg");
    string b("xyz ijk");
    string c;
    cout << a << " " << b << endl ; // Salida : abcd efg xyz ijk
    cout << " String vacío: " << c.empty() << endl ; // String vacío: 1 (true)
    c = a + b; // Concatenación
    cout << c << endl; // Salida: abcd efgxyz ijk
    cout << " String vacío: " << c.empty() << endl ;
    cout << "Largo: " << c.length() << endl; // Largo: 15
    string d = c; // Copia
    cout << d << endl; // Salida: abcd efgxyz ijk
    cout << "Primer caracter: " << c[0] << endl; // Salida: a
    string f("Otra forma de inicializar...");
    cout << "String f: " << f.append("ZZZ") << endl ; // Salida: String f: Otra forma de inicializar...ZZZ
    cout << "Find: " << f.find("for") << endl; // Find: 5. Si no encuentra, retorna la constante string::npos
    return 0;
}