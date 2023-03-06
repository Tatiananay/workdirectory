#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"ingrese 3 numeros: "; cin>>a>>b>>c;

    if(a>b && a>c){
        cout<<"a es el mayor de los numeros";
    }else if(b>a && b>c){
        cout<<"b es el mayor de los numeros";
    }else if(c>a && c>b){ 
        cout<<"c es el mayor de  los numeros";
    }else cout<<"Los numeros son iguales";
    return 0;
}