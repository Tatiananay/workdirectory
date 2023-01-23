#include<iostream>
using namespace std;

void menuProce(int opc){
    int opc;
    cout<<"MENU DE SERIES" <<endl
        <<"1. Pares"       <<endl
        <<"2. Impares"     <<endl
        <<"3. Signos"      <<endl
        <<"0. Salir"       <<endl
        <<"Ingresa Opc."<<endl;
    cin>>opc;
    cout<<endl;      
}

int main(){

    int opc;
    do {
        menuProce(opc);
        switch(opc){
            case 1:

        }
    }
}