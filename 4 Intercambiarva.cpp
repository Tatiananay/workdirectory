#include<iostream>
using namespace std;

int main(){

    int a,b, aux;
    
    cout<<"Ingrese el primer numero ";
    cin>>a;
    cout<<endl;

    cout<<"Ingrese el segundo numero ";
    cin>>b;
    cout<<endl;

    cout<<"Ahora intercambiaremos los números pedidos."<<endl;

    aux = a;
    a=b;
    b=aux;
    cout<<"el valor deprimer termino es: "<<a;
    cout<<endl;
    cout<<"el valor del segundo número es: "<<b<<endl;
    return 0;
}