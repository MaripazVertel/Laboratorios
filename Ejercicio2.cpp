#include <iostream>
using namespace std;

int Ejercicio2(){
    int bcincuenta = 50000;
    int bveinte= 20000;
    int bdiez= 10000;
    int bcinco=5000;
    int bdos= 2000;
    int bmil=1000;
    int mquinientos = 500;
    int mdocientos= 200;
    int mcien= 100;
    int mcincuenta = 50;
    int division =0;
    int resto = 0;

    int cantidad;
    cout << "Ingrese la cantidad de dinero: "<< endl ;
    cin >> cantidad;

    division = cantidad / bcincuenta;
    resto = cantidad % bcincuenta;
    cout << "50000:"<< division <<endl;
    cantidad = resto;

    division = cantidad / bveinte;
    resto = cantidad % bveinte;
    cout << "20000:"<< division <<endl;
    cantidad = resto;

    division = cantidad / bdiez;
    resto = cantidad % bdiez;
    cout << "10000:"<< division <<endl;
    cantidad = resto;

    division = cantidad / bcinco;
    resto = cantidad % bcinco;
    cout << "5000:"<< division <<endl;
    cantidad = resto;

    division = cantidad / bdos;
    resto = cantidad % bdos;
    cout << "2000:"<< division <<endl;
    cantidad = resto;

    division = cantidad / bmil;
    resto = cantidad % bmil;
    cout << "1000:"<< division <<endl;
    cantidad = resto;

    division = cantidad / mquinientos;
    resto = cantidad % mquinientos;
    cout << "500:"<< division <<endl;
    cantidad = resto;

    division = cantidad / mdocientos;
    resto = cantidad % mdocientos;
    cout << "200:"<< division <<endl;
    cantidad = resto;

    division = cantidad / mcien;
    resto = cantidad % mcien;
    cout << "100:"<< division <<endl;
    cantidad = resto;

    division = cantidad / mcincuenta;
    resto = cantidad % mcincuenta;
    cout << "50:"<< division <<endl;
    cantidad = resto;

    cout <<"Faltante:"<< cantidad << endl;
















}
