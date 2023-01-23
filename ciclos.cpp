#include<iostream>
using namespace std;

void signosalternos(){
    int num;
    cout<<"ingrese la cantidad de signos que desee: ";
    cin>>num;
    int i;
    do{
        cout<<((i%2)?"+":"-")<<"\t";i++;
    }
    while(i<num);
}

void signosalternoswhile(){
    int num;
    cout<<"ingrese la cantidad de signos que desee: ";
    cin>>num;
    int i;
    while(i<num);
        cout<<((i%2)?"+":"-")<<"\t";i++;
}

void signosalternoscantidadfor(){
    int n;
    cout<<"\n\n\n[+] GENERAR SERIES: + -- +++ ---- +++++ ..."<<endl;
    cout<<"cuantos terminos deseas?";
    cin>>n;
    for(int i= 1; i <=n ;i++)
    {
        for(int r=0;r<i; r++)
            cout<<((i%2==0)?"+":"-");
     }
}

void signosalternoscantidaddo(){
    int n;
    cout<<"\n\n\n[+] GENERAR SERIES: + -- +++ ---- +++++ ..."<<endl;
    cout<<"cuantos terminos deseas?";
    cin>>n;
    int i=1;
    do
    {
        int r=0;
        do{
            cout<<((i%2==0)?"+":"-");
            r++;
        }while(r<i);
        cout<<" ";
        i++;
    } while (i<=n);    
}

void signosalternoscantidadwhile(){
    int n;
    cout<<"\n\n\n[+] GENERAR SERIES: + -- +++ ---- +++++ ..."<<endl;
    cout<<"cuantos terminos deseas?";
    cin>>n;
    int i=1;
    while(i<=n){
    int r=0;
        while(r<i){
             cout<<((i%2==0)?"+":"-");
            r++;
        }
        cout<<" ";
        i++;
    }
}

void sumaAnterior(){
    int n;
    cout<<"digite el numero para la serie: ";
    cin>>n;

    for(int i=0; i<n;i++){

        for(int r=0;r<i; r++)
            cout<<" "<<(i+=n);
        }
}

void serieFibo()
{
    int n=0, a=0, b=1,c=0;
 
    cout<<"Cuantos numeros de la serie de Fibonacci desea: ";
    cin>>n;
    cout<<"0 1 ";
 
    for (int i=0; i <n-2;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}

void serieFibosignos()
{
    int n=0, a=0, b=1,c=0;
 
    cout<<"Cuantos numeros de la serie de Fibonacci desea: ";
    cin>>n;
    cout<<"+";
 
    for (int i=0; i <n-2;i++){
        c=a+b;
        a=b;
        b=
        c;
        cout<<c<<"+";
    }
}



int main(){
    //signosalternos();
    //signosalternoswhile();
    // signosalternoscantidadfor();
    //signosalternoscantidaddo();
    //signosalternoscantidadwhile();
    //serieFibo();
    serieFibosignos();

}