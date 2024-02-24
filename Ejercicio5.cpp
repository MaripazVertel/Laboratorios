#include <iostream>
using namespace std;

int Ejercicio5(){

    int i,j,filas;
    cout <<" Ingrese un numero impar: ";
    cin >> filas;

    // Primera parte: imprime de 1 a 'filas' asteriscos
    for(i=1; i<=filas; i+=2){
        for (j=0; j<i; j++){
            cout <<"*";
        }
        cout <<"\n";
    }

    // Segunda parte: imprime de 'filas'-2 a 1 asteriscos
    for(i=filas-2; i>0; i-=2){
        for(j=0; j<i; j++){
            cout <<"*";
        }
        cout <<"\n";
    }

    return 0;
}

