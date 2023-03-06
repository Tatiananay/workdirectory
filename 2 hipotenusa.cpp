#include<iostream>
#include<math.h>
using namespace std;

int main(){ 

    float a,b,c;
    cout<<"Se hara el calculo de la hipotenusa de un triangulo rectangulo"<<endl;

    cout<<"Ingrese el primer valor: ";cin>>a;
    cout<<"Ingrese el segundo valor: ";cin>>b;cout<<endl;

    c = sqrt(pow(a,2)+pow(b,2));

    cout<<"lahipotensa es: "<<c;
    return 0;
}