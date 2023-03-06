/*#include<iostream>
using namespace std;*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
int x,y,elevacion=1;

cout<<"Digite el valor de x: ";cin>>x;
cout<<"Digite el valor de y: ";cin>>y;

for(int i=1;i<=y;i++){
elevacion *= x;
}

cout<<"\nEl resultado de la elevacion es: "<<elevacion;

getch();
return 0;
}
/*int main(){
    int x,y=1; 
    int resultado = 1;

    cout<<"ingrese una base mayor que 0: ";cin>>y;
    cout<<endl;
    cout<<"ingrese el exponente para la base mayor que 0: "; cin>>x;

    for(int i = 1; i<= x; x++){
         resultado = resultado * y;
    }
     cout<<resultado;
     getch();
     return resultado;
    }
*/