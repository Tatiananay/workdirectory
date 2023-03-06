#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarPila(Nodo *&,int);
void sacarPila(Nodo *&, int &);

int main(){
    Nodo *nodo_pila = NULL;
    int dato;
    char rsp;
    do{ 
        cout<<"Ingrese un numero a la PILA: ";
        cin>>dato;
        insertarPila(nodo_pila, dato);
        cout<<"Desea ingresar otro dato a PILA? (s/n): ";
        cin>>rsp;
    }while(rsp== 's' || rsp=='S');

    cout<<"\nSacando elementos de la PILA"<<endl;
    while(nodo_pila != NULL){
        sacarPila(nodo_pila,dato);
        if(nodo_pila != NULL){
            cout<<dato<<" , ";
        }else cout<<dato<<" . ";
    }

    getch();
    return 0;
}

void insertarPila(Nodo *& nodo_pila, int n){

    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = nodo_pila;
    nodo_pila = nuevo_nodo;
    cout<<n<<"  Ha sido ingresado a PILA"<<endl;
}

void sacarPila(Nodo *&nodo_pila, int &n){

    Nodo *aux = nodo_pila;
    n = nodo_pila->dato;
    nodo_pila = aux->siguiente;
    delete aux;
}