#include<iostream>
#include<conio.h>
#include<stdlib.h>   //función new y delate;

using namespace std;
//crear un procedimiento en cual pida notas

void pedir_notas();
void mostrar_notas();
int notas, *dir_notas;

int main(){
    pedir_notas();
    mostrar_notas();
    delete[] dir_notas;
    getch();
    return 0;
}

void pedir_notas(){

    cout<<"\t\tIngrese la cantidad de notas: ";cin>>notas;
    dir_notas = new int[notas];

    for(int i=0;i<*dir_notas;i++){
        cout<<"Ingrese la nota["<<i+1<<"]: ";
        cin>>dir_notas[i];
    }
    *dir_notas++;
}

void mostrar_notas(){
    
    for (int i = 0; i < notas; i++){
        cout<<dir_notas[i];
    }   
}