#include <iostream>
#include <string>

using namespace std;

int main() {
    string linea;
    getline(cin, linea);

    for (int i = 0; i < linea.length(); i++) {
        
        if ((i == 0 || linea[i-1] == ' ') && linea[i] != ' ') {
            cout << linea[i];
        }
    }
    
    return 0;
}

