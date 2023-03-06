#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
    Nodo *padre;
};
//Prototipado;
Nodo *crearNodo(int,Nodo*);
void menu();
void insertarNodo(Nodo *&, int,Nodo*);
void mostrarArbol(Nodo *,int);
void preOrden(Nodo *);
void InOrden(Nodo*);
void postOrden(Nodo*);
void eliminar(Nodo *,int);
void eliminarnodo(Nodo*);
bool busqueda(Nodo*,int);
Nodo *minimo(Nodo *);


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
        cout<<"4.Recorrer el Arbol en PreOrden"<<endl;
        cout<<"5.Recorrer el arbol en InOrden"<<endl;
        cout<<"6.Recorrido en profundidad PostOrden"<<endl;
        cout<<"7.Salir"<<endl;
        cout<<"Opcion: ";
        cin>>opcion;
    
        switch (opcion){
        case 1: cout<<"Digite un numero: ";
                cin>> dato;
                insertarNodo(arbol,dato,NULL);
                cout<<endl;
                system("pause ");
                break;
        case 2: cout<<"Mostrando el arbol completo";
                cout<<"\n\n\n\n";
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
                break;
        case 4: cout<<"\nRecorrido en Preorden:\n ";
                preOrden(arbol);
                cout<<endl<<endl;
                system("Pause");
                break;
        case 5: cout<<"Recorrido en InOrden:\n";
                InOrden(arbol);
                cout<<endl<<endl;
                system("Pause");
                break;
        case 6: cout<<"Recorrido en PostOrden: \n";
                postOrden(arbol);
                cout<<endl<<endl;
                system("Pause");
                break;
        }       
    }while(opcion != 7);

}

Nodo *crearNodo(int n,Nodo*padre){

    Nodo *nuevoNodo = new Nodo();
    nuevoNodo -> dato =n;
    nuevoNodo -> der = NULL;
    nuevoNodo -> izq = NULL;
    nuevoNodo -> padre = padre;

    return nuevoNodo;
}

//Funcion para insertar nodos

void insertarNodo(Nodo *&arbol, int n,Nodo*padre){
    if(arbol == NULL){
        Nodo *nuevoNodo = crearNodo(n,padre);
        arbol = nuevoNodo;
    }else{
        int valorRaiz = arbol -> dato;
        if(n<valorRaiz){

            insertarNodo(arbol -> izq,n,arbol);
        }else{
            insertarNodo(arbol -> der,n,arbol);
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

void preOrden(Nodo *arbol){

    if(arbol == NULL){
        return; 
    }else{
        cout<<arbol->dato<<" - ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}

void InOrden(Nodo*arbol){
    if(arbol == NULL){
        return;
    }else{
        InOrden(arbol->izq);
        cout<<arbol->dato<<" - ";
        InOrden(arbol->der);
    }

}

void postOrden(Nodo *arbol){
    if(arbol == NULL){
        return;
    }else{
       postOrden(arbol->izq);
       postOrden(arbol->der);
       cout<<arbol->dato<<" - "; 
    }
}

void eliminar(Nodo *arbol,int n){
    if(arbol == NULL){
        return;
    }else if(n < arbol->dato){
        eliminar(arbol->izq,n);
    }else if(n > arbol->dato){
        eliminar(arbol->der,n);
    }else{
        eliminarnodo(arbol);
    }

}

Nodo *minimo(Npdp *arbol){
    if(arbol == NULL ){
        return NULL;
    }
    if(arbol -> izq){
        return minimo(arbol->izq);
    }
    else{
        return arbol;
    }
}

void eliminarnodo(Nodo *nodoeliminar){
    if(nodoeliminar->izq && nodoeliminar ->der){
        Nodo *menor = minimo(nodoeliminar->der);
        nodoeliminar->dato = menor->dato;
        eliminarnodo(menor);
    }
}
