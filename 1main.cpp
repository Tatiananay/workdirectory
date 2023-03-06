#include<iostream>
using namespace std;

int main(){

	int numeros[6]={};
	char letras[6]={};

	for(int i; i <= 5; i++){
		cout<<"Ingrese un número: ";
		cin>>numeros[i];
		cout<<"Ingrese una letra: ";
		cin>>letras[i];
		}

	for(int i; i <= 5; i++){
		cout<<numeros[i];
		}

	for( int i; i<= 5; i++){
		cout<<letras[i];
		}
	return 0;
}