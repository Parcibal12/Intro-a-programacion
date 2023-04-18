#include <iostream>

using namespace std;

int main() {
	double num1, num2, quotient;

	cout << "Coloca el dividendo: ";
	cin >> num1;

	cout << "Coloca el divisor: ";
	cin >> num2;

	quotient = num1 / num2;

	cout << "Resultado " << quotient << endl;

	return 0;
}
