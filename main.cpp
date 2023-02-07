#include <iostream>
#include<windows.h>
#define color SetConsoleTextAttribute      
using namespace std;

int funcion(int valor){
	valor= valor +10;
	return valor;
}

int funcionpunteros(int* valor){  //const protege el procesod de escritura

	*valor = *valor + 10;
	return *valor;
}

int main()
{
	int numero =10;

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  //Función propia de la librería windows.h 
    color(hConsole, 3);
					                                   //Presenta color a la consola (Aguamarina)
	cout << "Antes de la funcion:	"<<numero<<endl;
	funcion(numero);
	color(hConsole, 3);  
	cout << "Despues de la funcion:	"<<numero<<endl<<endl;


	color(hConsole, 5);  
	cout << "Antes de la funcionpuntero:	"<<numero<<endl;
	color(hConsole, 5);  
	funcionpunteros(&numero);
	cout << "Despues de la funcionpuntero:	"<<numero<<endl;
}