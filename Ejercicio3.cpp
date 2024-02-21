#include <iostream>
using namespace std;

int Ejercicio3(){
    int mes = 0;
    int dia = 0;
    cout << "Ingrese un mes:";
    cin >> mes;
    cout << "Ingrese un dia:";
    cin >> dia;

    if (mes ==1||mes ==2||mes ==3||mes ==4 ||mes ==5||
        mes==6||mes ==7 || mes==8||mes==9||mes ==10||
        mes==11||mes==12){

        if (dia==1||dia==2||dia==3||dia==4||dia==5||dia==6||
            dia==7||dia==8||dia==9||dia==10||dia==11||dia==12||
            dia==13||dia==14||dia==15||dia==16||dia==17||dia==18||dia==19||dia==20
            ||dia==21||dia==22||dia==23||dia==24||dia==25||dia==26||dia==27||dia==28||
            dia==29||dia==30||dia==31){

            if (dia ==29 && mes ==2){
                cout<< dia << "/"<< mes<<" es valida en bisiesto."<< endl;
            }
            else {
                cout << dia << "/" << mes << " es una fecha valida." << endl;
            }
        }
        else {
            cout << dia << "/" << mes << " es una fecha invalida." << endl;
        }
    }
    else {
        cout << mes << "/"<< dia << " es una fecha invalida." << endl;
    }
}

