#include <iostream>
using namespace std;

#include <iostream>

int Ejercicio9() {
    int N;
    cout << "Por favor, ingrese un numero entero: ";
    cin >> N;

    int suma = 0;
    while (N > 0) {
        //Extrae el ultimo digito de N
        int digito = N % 10;
        int potencia = 1;
        for(int i = 0; i < digito; ++i) {
            potencia *= digito;
        }
        suma += potencia;
        //Elimina el ultimo digito
        N /= 10;
    }

    cout << "El resultado de la suma es: " << suma << endl;

    return 0;
}
