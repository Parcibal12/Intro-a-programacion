#include <iostream>

using namespace std;

int main (){
    string casa1, casa2, casa3, transeunte_casa;
    int pisos1, pisos2, pisos3, transeunte_pisos;
    int posicion1 = 1, posicion2 = 2, posicion3 = 3;
    
    cin >> casa1 >> pisos1 >> casa2 >> pisos2 >> casa3 >> pisos3 >>transeunte_casa >> transeunte_pisos;
    
    if (transeunte_casa == "?" || transeunte_pisos == -1){ //Declaramos la condicionales si el traseunte dice que no se acuerda el color o el numero de pisos de la casa
        if (transeunte_casa == casa1){
            cout<< posicion1 << endl;
        }
        if (transeunte_casa == casa2){
            cout << posicion2 << endl;
        }
        if (transeunte_casa == casa3){
            cout << posicion3 << endl;
        }
        if (transeunte_pisos == pisos1){
            cout << posicion1 << endl;
        }
        if (transeunte_pisos == pisos2){
            cout << posicion2 << endl;
        }
        if (transeunte_pisos == pisos3){
            cout << posicion3 << endl;
        }
        if (transeunte_casa == "?" && transeunte_pisos == -1){ //Si el transeunte no se acuerda de nada, al poner la informacion al programa le pedira que le de mas datos
            cout << "Necesito mas informacion para poder ayudarte"<< endl;
        }
    } 
    if (transeunte_casa == casa1 && transeunte_pisos == pisos1){ //Si los dos datos de la casa coinciden con algun color de casa y algun piso entonces que me devuelva su posicion
        cout << posicion1 << endl;
    } 
    if (transeunte_casa == casa2 && transeunte_pisos == pisos2){
        cout << posicion2 << endl;
    }
    if (transeunte_casa == casa3 && transeunte_pisos == pisos3){
        cout << posicion3 << endl;
    }
    return 0;
