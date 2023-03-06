#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int columnas,filas, numeros[100][100];
    
    cout<<"Ingrese el numero de filas: ";cin>>filas;
    cout<<"Ingrese el numero de columnas: "; cin>>columnas;

    for(int i =0; i < filas; i++){
        for(int j=0; j<columnas; j++){
            // cout<<"Ingrese los datos:["<< i <<"] ["<<j<<"]";
            // cin>>numeros[i][j];
            numeros[i][j]= 2;
        }
    }

    for(int i =0; i < filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<numeros[i][j]<<"";
        }
        cout<<endl;
    }

    getch();
    return 0;
}