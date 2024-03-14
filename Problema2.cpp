# include <iostream>
# include <cstdlib>
# include <cmath>
# include <stdlib.h>
# include <time.h>
# include <stdio.h>
# define N 200


using namespace std;
void generararreglo();
void contararreglo(char* );
char VEC[N];

int Ejercicio2a()
{
    generararreglo();
    contararreglo(VEC);

    return 0;

}

void generararreglo()
{    
    srand(time(NULL));
    char VEC[N], Letras[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' '};
    int i, R;
    for (i=0; i<N; i++)
    {
        R=rand() % 26;
        printf("%c" , 'A' + rand() % 26);
    }
    VEC[i]=Letras[R];
    system("pause");
}

void contararreglo(char* )
{
    int conteo[26]={0}, VEC[N+1];
    for (int i=0; i<N; i++)
    {
        conteo[VEC[i]-('A')]++;
    }
    for (int i=0; i<27; i++)
    {
        std::cout<<char('A'+i)<<":"<<conteo[i]<<std::endl;
    }
}

