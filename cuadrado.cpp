#include<iostream>
using namespace std;

int main(){

    int tamanio;
    cout<<"Ingrese el tamanio del cuadradod eseado";
    cin>>tamanio;
    for(int i=0; i<tamanio;i++)
        for(int j =0; j<tamanio;j++)
            if(j%2==0){
                cout<<"+";
            }else cout <<"-";
            cout<<endl;

    return 0;
}