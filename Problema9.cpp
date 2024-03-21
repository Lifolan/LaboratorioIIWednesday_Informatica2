#include <iostream>

using namespace std;


int Ejercicio9a()
{
    int n;
    int z;
    int suma;

    cout << "Ingrese el numero para sumar digitos: " << endl;
    cin >> n;
    cout << "Ingrese el numero para separar digitos: " << endl;
    cin >> z;

    if (z==1)
        z=10;
    else if(z==2)
        z=100;
    else if(z==3)
        z=1000;
    else if(z==4)
        z=10000;
    else if(z==5)
        z=100000;
    else if(z==6)
        z=1000000;

    while(n>0){

        suma+= n%z;
        n = n/z;
    }

    cout<< "La suma de los digitos separados en unidades de:  "<< z << " es: " << suma << endl;

}
