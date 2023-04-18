#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre, apellido;

    cout << "Ingrese su nombre y apellido separados por un espacio: ";
    cin >> nombre >> apellido;

    string nombre_completo = apellido + ", " + nombre;

    cout << "Nombre completo: " << nombre_completo << endl;

    return 0;
}
