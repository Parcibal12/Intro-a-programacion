#include <iostream>
using namespace std;

int main() {
  char c;
  cin >> c;

  if (isupper(c)) {
    cout << "el caracter esta en mayusculas" << endl;
  } else if (islower(c)) {
    cout << "el caracter esta en minusculas" << endl;
  } else {
    cout << "No es un caracter" << endl;
  }

  return 0;
}
