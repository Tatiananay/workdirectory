#include <iostream>
using namespace std;

struct Mascota
{
	string tipo;
	string nombre;
};
struct Alumno
{
	int id;
	int edad;
	char nombre[20];
	Mascota mascotita;
};

int main()
{
	Alumno a0; // no debe dejar
	Alumno a1 = {1,10,"pepe",{"perro","firulais"}};
    Alumno a2 = {2,20,"luis"};
    Alumno lst[]={a1,a2,3,100,"luisa",{"gato","firulais"} };

	a0.edad = 10;
	a1.edad = 12;
	a1.mascotita.nombre ="firulaiza";  //cambia el nombre.

    cout<<endl<<"[+]"
        <<endl<<" - "<<"id:"    <<a1.id
        <<endl<<" - "<<"edad:"  <<a1.edad
        <<endl<<" - "<<"nombre:"<<a1.nombre
        <<endl<<" - "<<"Mascota.tipo:"<<a1.mascotita.tipo
		<<endl<<" - "<<"Mascota.nombre: "<<a1.mascotita.nombre
		<<endl; 

	for(auto &&a : lst)
	cout<<endl<<"[+]"
		<<endl<<" - "<<"id:"    <<a.id
        <<endl<<" - "<<"edad:"  <<a.edad
        <<endl<<" - "<<"nombre:"<<a.nombre
		<<endl<<" - "<<"Mascota.tipo:"<<a.mascotita.tipo
		<<endl<<" - "<<"Mascota.nombre: "<<a.mascotita.nombre
		<<endl; 
}
