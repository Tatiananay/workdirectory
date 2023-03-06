#include <iostream>
#include <conio.h>

int array[100], *dir_array=array;

void pedir_datos();
void comprobar_menor(int);

int main(){
	pedir_datos();
	getch();
	return 0;
}

void pedir_datos(){
	int n_elementos;
	std::cout<<"Digite el numero de elementos dentro del arreglo: "; std::cin>>n_elementos;
	for(int i=0; i<n_elementos; i++){
		std::cout<<"Digite la posicion ["<<i+1<<"]: "; std::cin>>array[i];
	}
	comprobar_menor(n_elementos);
}

void comprobar_menor(int n_elementos){
	int menor=0;
	for(int i=0; i<n_elementos; i++){
		if(*dir_array<menor){
			menor=*dir_array;
		}
		dir_array++;
	}
	std::cout<<"El menor es: "<<menor;
}