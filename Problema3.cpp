#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

using namespace std;

int Ejercicio3a(){

    char palabra1[10], palabra2[10], respuesta='s';

    while(respuesta=='s' || respuesta=='S'){

    cout << "Ingrese la palabra 1 a comparar \n"<< endl;
    cin >> palabra1;

    cout << "Ingrese la palabra 2 a comparar \n" << endl;
    cin >>palabra2;

    if(strcmp(palabra1,palabra2)==0){

        cout<< "Las palabras ingresadas son iguales \n" << endl;

    }else{
        cout << "Las palabras ingresadas no son iguales \n" << endl;
        }

        cout << "Desea ingresar otra vez SI(S) NO(N) \n" << endl;
        cin >> respuesta;
    }

    return 0;
}
