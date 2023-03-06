#include<iostream>
#include<conio.h>

using namespace std;

struct canciones
{
    string nombre;
    string albun;
    int canciones;
}c1,c2,c3;

int ingresarDatos(){
    cout<<"Ingrese el nombre del artista: ";
    getline(cin,c1.nombre);
    cout<<"Ingrese el albun: ";
    getline(cin,c1.albun);

    cout<<"Presentando datos: "<<endl;
    cout<<"Nombre: "<<c1.nombre<<endl;
    cout<<"Album: "<<c1.albun;
    return 0;
}

int main(){

    ingresarDatos();
    getch();
    return 0;
}