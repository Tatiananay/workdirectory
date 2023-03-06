#include<iostream>
using namespace std;

int main(){
     char caracter;
    cout<<"Ingrese un caracter: "; cin>>caracter;

    switch (caracter)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':cout<<"Es una vocal minuscula";break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U': cout<<"l es una vocal mayuscula"; break; 
    default: cout<<"no es una vocal";break;
    }

    return 0;
}