#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<cstdlib>

using namespace std;

int Ejercicio4a()
{
    char cadena[10];
    int numero, prueba;
    cout << "Introduzca la cadena con caracteres numericos: " << cadena << endl;
    cin >> cadena;

    numero = atoi(cadena);
    prueba = numero + 100;
    cout << "el numero convertido es: " << numero << " Y la prueba que es un entero: " << prueba << endl;
    return 0;
}

