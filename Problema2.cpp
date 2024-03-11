# include <iostream>

# include <cmath>

# include <stdlib.h>
# include <time.h>
# include <stdio.h>
# define N 5
using namespace std;

int Ejercicio2a()
{
    srand(time(NULL));
    for (int i=0; i<N; i++)
    {
        printf("%c" , 'A' + rand() % 10);
    }

    system("pause");
    return 0;
}
