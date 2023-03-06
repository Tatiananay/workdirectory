#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo{

    int dato;
    Nodo *der;
    Nodo *izq;

};
//Prototipado;
void menu();
Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);
void mostrarArbol(Nodo *,int);
bool busqueda(Nodo*,int);

//inicializamos el arbol a 0
Nodo *arbol = NULL;

int main(){
    menu();
    getch();
    return 0;
}

void menu(){
    int dato,opcion,contador;
    do{
        cout<<"\tMENU: ."<<endl;
        cout<<"1. Insertar un nuevo nodo"<<endl;
        cout<<"2. Mostrar el arbol completo"<<endl;
        cout<<"3. Buscar un elemento"<<endl;
        cout<<"4.Salir"<<endl;
        cout<<"Opcion: ";
        cin>>opcion;
    
        switch (opcion){
        case 1: cout<<"Digite un numero: ";
                cin>> dato;
                insertarNodo(arbol,dato);
                cout<<endl;
                system("pause ");
                break;
        case 2: cout<<"Mostrando el arbol completo";
                mostrarArbol(arbol,contador);
                cout<<endl;
                system("pause");
                break;
        case 3: cout<<"\tDigite el numero a buscar";
                cin>>dato;
                if(busqueda(arbol,dato)==true)
                    cout<<"\n Elemento"<<dato<<"  ha sido encontrado en el arbol";
                else
                    cout<<"\nElemento no encontrado";
                cout<<endl;
                system ("pause");
        }       
    }while(opcion != 4);

}

Nodo *crearNodo(int n){

    Nodo *nuevoNodo = new Nodo();
    nuevoNodo -> dato =n;
    nuevoNodo -> der = NULL;
    nuevoNodo -> izq = NULL;

    return nuevoNodo;
}

//Funcion para insertar nodos

void insertarNodo(Nodo *&arbol, int n){
    if(arbol == NULL){
        Nodo *nuevoNodo = crearNodo(n);
        arbol = nuevoNodo;
    }else{
        int valorRaiz = arbol -> dato;
        if(n<valorRaiz){

            insertarNodo(arbol -> izq,n);
        }else{
            insertarNodo(arbol -> der,n);
        }
    }

}
    //Funcion para mostrar el arbol combrelo
void mostrarArbol(Nodo *arbol,int cont){
    if(arbol == NULL){ //si el arbol esta vacio
        return;
    } 
    else{
        mostrarArbol(arbol ->der,cont+1);
        for(int i=0;i<cont ; i++){
            cout<<"   ";
        }
        cout<<arbol->dato<<endl;
        mostrarArbol(arbol->izq,cont+1);

    }
}

bool busqueda(Nodo*arbol ,int n){
    if(arbol == NULL){
        return false;
    }else if(arbol-> dato == n){
        return true;
    }
    else if(n < arbol -> dato){
        return busqueda(arbol->izq,n);
    
    }else {
        return busqueda(arbol -> der,n);
    }

}
