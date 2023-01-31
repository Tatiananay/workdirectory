#include<iostream>

using namespace std;


// void MatrizCaracteresG(int fila, int columna){
//      char matriz[fila][columna];

//     for(int f= 0; f < fila; f++){
//         for( int c=0; c < columna; c++){
//             matriz[f][c]='+';
//         }
//     }

//     for(int f= 0; f < fila; f++){
//         for( int c=0; c < columna; c++){
//             cout<<matriz[f][c]<<" ";
//         }
//         cout<<endl;
//     }
// }

void showMatriz(char matriz[][2],int fila, int columna){

 for(int f= 0; f < fila; f++){
        for( int c=0; c < columna; c++){
            cout<<matriz[f][c]<<" ";
        }
        cout<<endl;
    }
}

void MatrizCaracteres(){
    
    int fila = 3;
    int columna = 2;
    char matriz[3][2]={  {'a' , 'b'}
                        ,{'c' , 'd'}
                        ,{'e' , 'f'}};


    showMatriz(matriz,fila,columna);

    // for(int f= 0; f < fila; f++){
    //     for( int c=0; c < columna; c++){
    //         cout<<matriz[f][c];
    //     }
    //     cout<<endl;
    // }
}

int main(void){

    MatrizCaracteres();
    //MatrizCaracteresG(5,2);

    return 0;
}