#include<iostream>
using namespace std;

int Ejercicio10() {
    int n, i = 3, cont, c;

    cout << "Ingrese un numero: ";
    cin >> n;

    int ultimoPrimo = 2;

    for (cont = 2; cont <= n; i++) {
        for (c = 2; c < i; c++) {
            if (i%c == 0)
                break;
        }
        if (c == i) {
            ultimoPrimo = i;
            cont++;
        }
    }

    cout << "El primo numero " << n << " es: " << ultimoPrimo << endl;

    return 0;
}
