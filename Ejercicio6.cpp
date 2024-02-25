#include <iostream>
using namespace std;

int Ejercicio6() {
    int n;
    double e = 1.0, factorial = 1.0;

    cout << "Ingrese un numero: ";
    cin >> n;

    for(int i = 1; i < n; i++) {
        factorial *= i;
        e += 1 / factorial;
    }

    cout << "e es aproximadamente: "<< e << endl;

    return 0;
}
