//Author: Leiva Nayeli
//Date  : 29/01/2023

#include<iostream>
#include<windows.h>
#define color SetConsoleTextAttribute                  
using namespace std;

void menuProced(int &opc)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  //Función propia de la librería windows.h 
    color(hConsole, 3);                                 //Presenta color a la consola (Aguamarina)

	opc=0;
    cout<< "\n\n\t\t MENU DE SERIE "                                    <<endl;
    color(hConsole, 8);                                 //Presenta color gris a la consola
    cout<< " 1. Salir  "                                                <<endl
        << " 2.  0/2  1/4  1/6  2/8  3/10  5/12  8/14  13/16 "          <<endl
        << " 3. Piramide de arteriscos "                                <<endl
        <<"      *         "                                            <<endl
        <<"     ***        "                                            <<endl
        <<"    *****       "                                            <<endl
        <<"   *******      "                                            <<endl
        <<"  *********     "                                            <<endl
        <<"    ...         "                                            <<endl
        <<"4. Eliminar letras de una frase:      "                      <<endl
        <<"Ingresa Opc:   ";
    cin>>opc;
    cout<<endl;        
}

int leivaSerie04(int a){

    system("cls");                                                  //Función para limpiar la pantalla
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);              
    color(hConsole, 3);
    int b=1,c,n;
    cout <<  "\n\n\t\t SERIE: 0/2 1/4 1/6 2/8 3/10...." <<endl;
    color(hConsole, 8);
    cout<<"Ingrese la cantidad de la serie: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        c=a+b;
        color(hConsole, 5);
        cout<<c<<"/"<<(i*2)<<" ";
        a=b;
        b=c;
    }
    color(hConsole, 8);
    return c;
}

int leivaSerie14(int j,int i){
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    color(hConsole, 3);
    int n;
    cout <<  "\n\n\t\t SERIE 14: " <<endl<<endl;
    color(hConsole, 8);
    cout<<"pedir niveles"<<endl;
    color(hConsole, 5);
    cout<<"      *         "<<endl
        <<"     ***        "<<endl
        <<"    *****       "<<endl
        <<"   *******      "<<endl
        <<"  *********     "<<endl
        <<"     ...        "<<endl;
    color(hConsole, 8);
    cout<<"Ingrese la cantidad de niveles que desee:  ";
    cin>>n;
    int e = n-i;
    for(i=1;i<=n;i++){
        for(int k=0;k<e;k++){
            cout<<" ";
        }
        for(j=1;j<=(i*2-1);j++){
            color(hConsole, 5);             //Presenta color púrpura en la consola
            cout<<"*";
        }
        cout<<endl;
        e--;
    }
    color(hConsole, 8);
    cout<<"Usted a ingresado "<<n<<" niveles";
    return n;
}

int leivaSerie24(int i){

    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    color(hConsole, 3);
    string palabra;
    char letra;
    cout<<"\n\n\t\t ELIMINAR LETRAS DE UNA PALABRA"<<endl;
    color(hConsole, 4);
    cout<<"\n\nInstrucciones:                                                           "<<endl     
        <<"Pedir una frase y una letra, eliminar la letra ingresada de la frase.        "<<endl
        <<"Ejemplo:     frase : ballena azul                                            "<<endl
        <<"             Letra: l                                                        "<<endl
        <<"             salida: ba  ena azu                                             "<<endl<<endl;
    color(hConsole, 8);
    cout<<"Ingrese una palabra: "<<flush;           //liberar el buffer
    cin.ignore();                                   //ignorar el buffer
    getline(cin,palabra);                           //Permite ingresar una línea de caracteres con espacios
    color(hConsole, 5);
    cout<<"Has ingresado: "<<palabra<<endl;
    color(hConsole, 8);
    cout<<"Ingrese la letra a eliminar: ";
    cin>>letra;
    for(i=0;i<=palabra.length();i++){               //Permite medir la longitud del string.

        if (palabra[i]==letra)
            palabra[i]=' ';
        color(hConsole, 5);
        cout << palabra[i];
    }
    color(hConsole, 8);
    return 0;
}

void mainMenu(){

    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    color(hConsole, 3);
    cout<<"\n\n\t\t DATOS DEL ESTUDIANTE ";
    color(hConsole, 8);
    cout<<endl<<endl<<"Estudiante : Nayeli Leiva"<<endl<<endl
        <<"# de cedula: 1750452334  "<<endl<<endl;
    system("pause");                                           //Pausa el programa y al aplastar otra tecla este avanza 
    system("cls");
	int opc;
	do
	{  
		menuProced(opc);
		switch(opc)
		{
			case 1: exit(0);
					break;
			case 2: leivaSerie04(-1);                       //uso de parámetros en las funciones.
					break;  
			case 3: leivaSerie14(1,1);
					break;
			case 4: leivaSerie24(0);              
					break;
			default: cout<<"Intentalo de nuevo..."<<endl;   
					break;
		}
		cout<<endl<<endl;
		system("pause");
        system("cls");
	}while(true);
}

int main()
{
    mainMenu();
	return 0;
}