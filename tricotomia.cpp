#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Ingrese un número: "; cin>>n;

    if(n < 0){

        cout<<"el numero es negativo";
    }else if(n > 0){
        cout<<"El numero es positivo";
    }else cout<<"El numero es 0";

    return 0;
}