#include <iostream>
#include <string>
using namespace std;

int Ejercicio4(){
    string numero1;
    string numero2;
    int sumahora1;
    int sumahora2;
    int sumamin1;
    int sumamin2;
    string hora1;
    string min1;
    string hora2;
    string min2;
    cout << " Ingrese un numero:";
    cin >> numero1;
    cout << " Ingrese un numero:";
    cin >> numero2;

    //se calcula la longitud de los string
    int longitud = numero1.length();
    //cout << longitud << " Es la longitud"<< endl;

    int longitud2 = numero2.length();
    //cout << longitud2 << " Es la longitud"<< endl;


    if (longitud == 4){
        //se parte el string en 2 porciones horas y minutos
        hora1 = numero1.substr(0,2);
        min1 = numero1.substr(2,4);
    } else if (longitud == 3){
        hora1 = numero1.substr(0,1);
        min1 = numero1.substr(1,3);
    }

    if (longitud2 == 4){
        hora2 = numero2.substr(0,2);
        min2 = numero2.substr(2,2);
    } else if (longitud2 == 3){
        hora2 = numero2.substr(0,1);
        min2 = numero2.substr(1,2);
    }

    //convierto hora a numero entero
    int hora_1 = std::stoi(hora1);
    //cout <<hora_1 << " Hora1 ya en entero"<< endl;

    //convierto minutos a entero
    int min_1 = std::stoi(min1);
    //cout <<min_1 << " Minuto1 ya en entero"<< endl;

    int hora_2 = std::stoi(hora2);
    //cout <<hora_2 << " Hora2 ya en entero"<< endl;

    int min_2 = std::stoi(min2);
    //cout <<min_2 << " Minuto2 ya en entero"<< endl;

    //validacion
    if (hora_1 >= 1 && hora_1 <= 24){
        if (min_1 >= 1 && min_1 <= 60){
            sumamin1= min_1;
            sumahora1 = hora_1;
            //cout << " Hora lista para sumar :"<< sumahora1 << endl;
            //cout << " Min lista para sumar :"<< sumamin1 << endl;

        } else {
            cout <<numero1<<" es un tiempo invalido."<<endl;
        }
    } else {
        cout <<numero1<<" es un tiempo invalido."<<endl;
    }

    //validacion
    if (hora_2 >= 1 && hora_2 <= 24){
        if (min_2 >= 1 && min_2 <= 60){
            sumamin2= min_2;
            sumahora2 = hora_2;
            //cout << " Hora lista para sumar :"<< sumahora2 << endl;
            //cout << " Min lista para sumar :"<< sumamin2 << endl;
        } else {
            cout <<numero2<<" es un tiempo invalido."<<endl;
        }
    } else {
        cout <<numero2<<" es un tiempo invalido."<<endl;
    }

    //suma
    int sumah = sumahora1 + sumahora2;
    int sumam = sumamin1 + sumamin2;

    // Si la suma de los minutos es mayor a 60
    if (sumam >= 60) {
        sumah += sumam / 60;  // Agrega el exceso de minutos a las horas
        sumam = sumam % 60;  // Deja solo los minutos restantes
    }

    cout << " La hora es "<< sumah<<sumam <<"."<< endl;


    return 0;
}
