#include <iostream>
using namespace std;

int Ejercicio8(){
    int a, b, c;
    cout << "Ingrese los valores de a, b y c: ";
    cin >> a >> b >> c;

    int sum = 0;
    string cadenaA = "", cadenaB = "";

    int contA = 1, contB = 1;

    for (int i = a; i < c; i += a) {
        sum += i;
        cadenaA += "m1" + to_string (contA++) + " + ";
    }

    for (int i = b; i < c; i += b) {
        if (i % a != 0) {
            sum += i;
            cadenaB += "m2" + to_string(contB++) + " + ";
        }
    }

    cadenaA = cadenaA.substr(0, cadenaA.length() - 3);  // Eliminar el último " + "
    cadenaB = cadenaB.substr(0, cadenaB.length() - 3);  // Eliminar el último " + "

    std::cout << cadenaA << " + " << cadenaB << " = " << sum << std::endl;

    return 0;
}
