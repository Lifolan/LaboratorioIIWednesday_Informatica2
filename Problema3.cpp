#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int Ejercicio3a(){

    char palabra1[10], palabra2[10], respuesta='s';

    while(respuesta=='s' || respuesta=='S'){

    printf("Ingrese la palabra 1 a comparar \n");
    scanf("%s",palabra1);

    printf("Ingrese la palabra 2 a comparar \n");
    scanf("%s",palabra2);

    if(strcmp(palabra1,palabra2)==0){

        printf("Las palabras ingresadas son iguales \n");

    }else{
        printf("Las palabras ingresadas no son iguales \n");
        }

        printf("Desea ingresar otra vez SI(S) NO(N) \n");
        scanf("%c",respuesta);
    }
    system("pause");
    return 0;
}
