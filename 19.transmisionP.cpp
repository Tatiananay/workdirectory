//Transmision de dirreccion

//Ejemplo : Vamos a cambiar el valor de 2 variables

#include<iostream>
#include<stdlib.h>
using namespace std;

void intercambio(float *, float *);//Prototipo

int main()
{
    float numero1, numero2;

    cout<<endl<<"Digite el numero 1: ";
    cin>>numero1;
    cout<<endl<<"Digite el numero 2: ";
    cin>>numero2;

    intercambio(&numero1,&numero2); //SIEMPRE EL AMPERSAND ANTE DEL NOMBRE DE LA VARIABLE


    system("pause");
    return 0;
}

void intercambio(float *dir_num1, float *dir_num2){

    
}