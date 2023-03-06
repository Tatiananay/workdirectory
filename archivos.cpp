#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

void escribir();
void lectura();
int main(){
    lectura();

    //escribir();

    system("pause");
    return 0;
}
void escribir(){
    ofstream archivo;

    archivo.open("prueba.txt",ios::out); //abiendo el archivo
    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    archivo<<"Hola que tal?";
    archivo.close();
}

void lectura(){
    ifstream archivo;
    string texto;
    archivo.open("prueba.txt",ios::in);
    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;
    }archivo.close();

}