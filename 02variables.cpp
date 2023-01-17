#include<iostream>
using namespace std;

void saludar(string nombre, char sexo){
    // variable local 
    //string nombre="naye";
    //cout<<"Ingrese su nombre:   ";
    //cin>>nombre;

    if(toupper (sexo) == 'F')
         cout<<"holi "+ nombre<< "!"<<endl;
    if (toupper(sexo)== 'M') 
         cout<<"qui ubo "+ nombre<< "!"<<endl;
}

void saludarRaro(string nombre, char sexo){
      if(toupper (sexo) == 'F')
         cout<<"holi "+ nombre<< "!"<<endl;
      else
         cout<<"qui ubo "+ nombre<< "!"<<endl;
}

int menu(){
    int opcion;
    cout<<"MENU DE SERIES" <<endl
        <<"1. Pares"       <<endl
        <<"2. Impares"     <<endl
        <<"3. Signos"      <<endl
        <<"0. Salir"       <<endl
        <<"Ingresa Opc."<<endl;
    cin>>opcion;
    cout<<endl;
    return opcion;        
}

int main(){

    int opcion = menu();
    cout<<"tu seleccionaste: "<<opcion;

    /*saludarRaro("pepe lucho",'m');
    saludar("pepe lucho",'m');
    saludarRaro("juanita",'f');
    saludar("juanita",'f');
    saludarRaro("simon",' ');
    saludar("simon",' ');
    saludarRaro("Nayelita",'f');
    saludar("Nayelita",'f');*/

    return 0; 
}