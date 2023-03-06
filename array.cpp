#include<iostream>
#include<conio.h>
using namespace std;

// int main(){
//     int n,numeros[100];

//     cout<<"Ingrese la extension del vector: "; cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<"Ingrese Los valores del vector: ";
//         cin>>numeros[i];
//     }

//     for(int i = 0; i < n; i++){
//         cout<<"posicion "<<i<<"-->"<<numeros[i]<<endl;    
//     }
//     getch();
//     return 0;
// }

int main(){
    int numeros [100],n;

    cout<<"Eu, digita la extension del vector: ";cin>>n;

    for(int i=0 ; i<n ; i++){
        cout<<"Digite los valores del vector: ";
        cin>>numeros[i];
    }

    for(int i = n-1; i>=0; i--){
        cout<<i<<"-->"<<numeros[i]<<endl;
    }

}