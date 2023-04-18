#include <iostream>
#include <string>

using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int suma = num1 + num2;
    int num_digitos = to_string(suma).length();
    int producto = suma * num_digitos;

    cout << producto << endl;


    return 0;
}
