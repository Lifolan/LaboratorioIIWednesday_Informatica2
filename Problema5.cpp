#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void enteroastring(int numero, char cad[]){
    // se debe contar la cantidad de digitos del numero ingresado

    int nroDig = 0;
    int aux = numero;
    while(aux>0){
        aux = aux/10;
        nroDig++;
    }
    cad[nroDig] = '\0';
    aux = numero;
    int posicion = nroDig -1, dig;
    while(posicion>=0){
        dig = aux%10;
        aux = aux/10;
        cad[posicion]=dig + '0';
        posicion --;
    }
}

int Ejercicio5a()
{
    int numero;
    char cad[15];
    cout << "Ingrese el numero a convertir en cadena de caracteres: " << endl;
    cin>> numero;
    enteroastring(numero, cad);
    cout << "La cadena que representa al numero ingresado es: ''" << cad << "''"<< endl;

    getch ();

    return 0;

}
