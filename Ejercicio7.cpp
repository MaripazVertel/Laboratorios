#include <iostream>
using namespace std;

int Ejercicio7() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    //Variables para generar Fibonacci
    int a = 1, b = 1;
    int suma = 0;

    while (b < n) {
        //Si es par
        if (b % 2 == 0) {
            suma += b;
        }
        int temp = a;
        a = b;
        b = temp + b;
    }

    cout << "El resultado de la suma es: " << suma <<endl;

    return 0;
}
