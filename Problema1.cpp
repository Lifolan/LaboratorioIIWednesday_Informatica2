# include <iostream>

# include <cmath>


using namespace std;
void pedirmonto();
void cambiodebilletes(int *, int);
int monto;
int vec[]={50000,20000,10000,5000,2000,1000,500,200,100,50};
int tam=10;
int Ejercicio1a()
{
    pedirmonto();
    cambiodebilletes(vec,tam);


    return 0;
}

void pedirmonto(){
    cout<<"Ingrese el monto que desea cambiar: "<<endl;
    cin>>monto;
}

void cambiodebilletes(int *p,int tam){
    int billetes;    
    for(int i=0;i<tam;i++){
        billetes=monto/ *(p+i); // (*p+i)=vec[i]
        monto=monto% *(p+i);
        if (monto>=500)
        cout<<"Billetes de "<<*(p+i)<<" cantidad:"<<billetes<<endl<<endl;
        else
        cout<<"Monedas de "<<*(p+i)<<" cantidad:"<<billetes<<endl<<endl;



    }
    cout<<"el restante es:"<<monto<<endl;
    system("pause");
}
