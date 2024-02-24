#include <iostream>
using namespace std;

int Ejercicio11() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    int mcm = 1;
    while (true) {
        int i;
        for (i = 1; i <= n; i++) {
            if (mcm % i != 0) {
                break;
            }
        }
        if (i == n + 1) {
            break;
        }
        mcm++;
    }

    cout << "El minimo comun multiplo es: " << mcm << endl;
    return 0;
}
