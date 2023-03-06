#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void sacarpila(Nodo *&,int &);

int main(){
    Nodo *pila = NULL;
    int dato;
    cout<<"Digite un numero a la pila: ";
    cin>>dato;
    agregarPila(pila,dato); 
    cout<<"Digite un numero a la pila: ";
    cin>>dato;
    agregarPila(pila,dato); 

    cout<<"Sacando los elementos de la PILA: ";
    while(pila != NULL){ //mientras no sea el final de la pila
        sacarpila(pila,dato);
        if(pila != NULL){
            cout<<dato<<" , ";
        }else cout<<dato<<" . ";
    }
    getch();
    return 0;
}
void agregarPila(Nodo *&pila, int n){

    Nodo *nuevo_nodo = new Nodo();  //Almacena espacio
    nuevo_nodo -> dato = n;         //
    nuevo_nodo -> siguiente = pila;
    pila = nuevo_nodo;
    cout<<"El numero "<<n<<" ha sido agregado correctamente a la pila."<<endl;
}

void sacarpila(Nodo *&pila,int &n){
    Nodo *aux = pila;
    n = pila ->dato;
    pila = aux->siguiente;
    delete aux;
}