#include <iostream>
#include <string>

using namespace std;

int main() {
    string title1, title2, title3;

    // Lectura de títulos de libros
    getline(cin, title1);
    getline(cin, title2);
    getline(cin, title3);

    // Impresión en orden inverso
    cout << title3 << endl;
    cout << title2 << endl;
    cout << title1 << endl;

    return 0;
}
