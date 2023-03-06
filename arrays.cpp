#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int n,numeros[100], mayor=1;
    cout<<"Ingresar la extension del vector: "; cin>>n;
    for(int i=0 ; i<n ; i++){
        cout<<i+1<< ".- Digite los valores del vector: ";
        cin>>numeros[i];
        if(numeros[i] >mayor){
            mayor = numeros[i];
        }
    }
    cout<<"El numero mayor es: "<< mayor;
    getch();
    return 0;
}