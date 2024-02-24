#include <iostream>
using namespace std;

int Ejercicio13() {
    int numero, i, j, primo, suma = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    for(i = 2; i <= numero; i++) {
        primo = 1;
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                primo = 0;
                break;
            }
        }

        if(primo == 1) {
            suma = suma + i;
        }
    }

    cout << "El resultado de la suma es: " << suma << endl;

    return 0;
}
