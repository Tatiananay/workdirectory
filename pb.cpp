#include<iostream>
#include<conio.h>
#include<string.h>
#include<windows.h>
using namespace std;

void correo(char vec[],char){
    int longitud;
    longitud = strlen(vec);
    for(int i =0; i<=longitud; i++){
        cout<<endl;
        cout<<vec[i];
        Sleep(45);
    }
}

// void progresbar(){
//     cout<<"[";
//     for(int i=0; i<23;i++){
//         cout<<"*";
//         Sleep(60);
//         cout<<"]";
//         cout<<"\t\t\t loading "<<i;
//     }
//         cout<<"\n";
// }

int main(){

    //char vec[100]="nayeli.leiva@epn.edu.ec";
    //correo(vec,100);
    //progresbar();
}