#include <iostream>
#include <string>

using namespace std;

int main() {
    int edad, anos_exp;
    string puesto;

    cout << "Ingrese la edad del candidato: ";
    cin >> edad;

    if (edad < 18) {
        cout << "El candidato es demasiado joven para postularse a cualquier puesto." << endl;
        return 0;
    }

    cout << "Ingrese los años de experiencia del candidato: ";
    cin >> anos_exp;

    if (anos_exp >= 5) {
        puesto = "director de proyecto senior";
    } else if (anos_exp >= 3) {
        puesto = "director de proyecto";
    } else {
        puesto = "coordinador de proyecto";
    }

    cout << "El candidato puede postularse al puesto de " << puesto << "." << endl;

    return 0;
}
