//modelo de estructuras anidadas

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct info{

    char direccion[100];
    char nombre[100];
    int edad;

};

struct personal{
    double salario;
    struct info dir;
    char cancionfavorita[100];
}persona[2];

int main(){

    for(int i=0; i<2; i++){
        fflush(stdin);
        cout<<"Digite el nombre: ";
        cin.getline(persona[i].dir.nombre,100,'\n');
        cout<<"Digite su edad: ";
        cin>>persona[i].dir.edad;
        fflush(stdin);
        cout<<"Ingrese la direccion correspondiente: ";
        cin.getline(persona[i].dir.direccion,100,'\n');
        cout<<"Digite su salario: ";
        cin>>persona[i].salario;
        fflush(stdin);
         cout<<"Ingrese su cancion favorita: ";
        cin.getline(persona[i].cancionfavorita,100,'\n');
        cout<<endl;

        cout<<"Su nombre es: "<<persona[i].dir.nombre<<endl;
        cout<<"Su edad es: "<<persona[i].dir.edad<<endl;
        cout<<"Su direccion es: "<<persona[i].dir.direccion<<endl;
        cout<<"Su salario es: "<<persona[i].salario<<endl;
        cout<<"Su cancion favoita es: "<<persona[i].cancionfavorita<<endl;
    }
    getch();
    return 0;
}