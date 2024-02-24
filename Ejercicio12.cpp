#include <iostream>
using namespace std;


int Ejercicio12() {
    int n;
    cout << "Introduce un numero: ";
    cin >> n;

    int maxFactor = -1;

    while (n % 2 == 0) {
        maxFactor = 2;
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxFactor = i;
            n /= i;
        }
    }

    if (n > 2)
        maxFactor = n;

    cout << "El mayor factor primo es: " << maxFactor << endl;
    return 0;
}
