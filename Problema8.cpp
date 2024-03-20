#include <iostream>
#include <cstdlib>

using namespace std;
char alfanumerico[80];
string numeros;
string texto;


int Ejercicio8a(){
    int a=0;
    char alfanumerico[80];
    cout << "Introduzca frase que incluya caracteres numericos y especiales: " << endl;
    cin >> alfanumerico;

    while(a<sizeof(alfanumerico)-1)
    {

        if (isdigit(alfanumerico[a])){

            numeros = numeros+alfanumerico[a];

        }
        else{

            texto += alfanumerico[a];
        }
        a++;
    }

    cout << "Los numeros son: " << numeros << endl;
    cout << "Los caracteres de texto son: " << texto << endl;

    return 0;

}
