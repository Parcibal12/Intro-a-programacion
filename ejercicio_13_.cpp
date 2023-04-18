#include <iostream>
#include <string>

using namespace std;

int main() {
    int num_docs;
    cin >> num_docs;

    string output;

    if (num_docs == 0) {
        output = "No se encontraron documentos";
    } else if (num_docs == 1) {
        output = "Se encontró un documento";
    } else {
        output = to_string(num_docs) + " documentos encontrados";
    }

    cout << output << endl;

    return 0;
}
