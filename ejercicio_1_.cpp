#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float num1, num2, suma;
    

    cout << "coloca el primer n�mero:";
    cin >> num1;

    cout << "coloca el segundo n�mero ";
    cin >> num2;

    suma = num1 + num2;

    cout << "La suma es: " << static_cast<int>(round(suma)) << endl;
    

    return 0;
}
