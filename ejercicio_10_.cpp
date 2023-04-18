#include <iostream>
#include <string>

using namespace std;

int main() {
    int numHoteles;
    cout << "Ingrese el número de hoteles: ";
    cin >> numHoteles;
    
    string respuesta = to_string(numHoteles) + " Hoteles encontrados";
    
    cout << respuesta << endl;
    
    return 0;
}


