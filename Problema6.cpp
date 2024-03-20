#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void converMayus(char cad[]){
    int i=0;
    while(cad[i]!='\0'){
        if(cad[i]>='a' && cad[i]<='z' ){
            cad[i] = cad[i]-('a'-'A');
        }
        i++;
    }
}

int Ejercicio6a() {
    char frase[80];
    cout << "Introduzca frase con caracteres que incluya caracteres numericos y especiales: " << endl;
    cin.getline(frase, 80);

    converMayus(frase);
    cout<<"La cadena con consonantes mayusculas es: " << frase << endl;

    return 0;
}
