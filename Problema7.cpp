#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <string>

using namespace std;

string subcadenaIzq(string s, int posicion){
    string resultado="";
    for(int i=0; i<posicion; i++){
        resultado[i]=s[i];
    }
    for(int i=posicion+1; i<s.length(); i++){
        resultado = resultado+s[i];
    }
    return resultado;
}

string EliminarRepetidas(string s){
    int i=1;
    char actual;
    char letraanterior;
    string resultado = "";
    resultado = resultado+s[0];
    int tam = s.length();
    cout << "el tamano de la cadena es: " << tam << endl;
    while(i<s.length()){
        letraanterior=s[i-1];
        actual=s[i];
        if (actual==letraanterior){
            cout << "hay caracteres repetidos" << endl;
        }
        else {
            resultado = resultado+s[i];
            cout << resultado << endl;
        }
        i++;
    }
    return resultado;
}

int Ejercicio7a() {

    string frase;
    string frReducida;
    string resultado;
    cout << "Introduzca palabra con caracteres repetidos: " << endl;
    cin >> frase;
    frReducida=EliminarRepetidas(frase);
    cout<<"La cadena recortada es: "<< resultado +frReducida << endl;

    return 0;
}
