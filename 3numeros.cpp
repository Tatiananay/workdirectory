#include<iostream>
using namespace std;

int main(){

    int n1,n2,n3,n4;

    cout<<"Ingrese 3 numeros: "; cin>>n1>>n2>>n3;
    cout<<"Ingrese un cuarto numero"; cin>>n4;
    if(n4 == n1 || n4 == n2 || n3 == n4)
        cout<<" el numero coincide con uno de los anteriores";
    else cout<<"El numero no coincide";    
    return 0;
}