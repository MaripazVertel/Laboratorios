#include <iostream>
using namespace std;

int Ejercicio1(){
    char letra;
    cout << "Ingrese una letra:"<< endl;
    cin >> letra;

    if (letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'||
       letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U'){
       cout <<letra <<" Es una vocal " << endl;
    }

    else if (letra == 'b'||letra == 'c'||letra =='f'||letra == 'g'||
            letra=='h'||letra=='j'||letra =='k'||letra == 'l'||letra =='m'||
             letra=='n'||letra=='p'||letra=='q'|| letra=='r'||letra=='s'||
             letra=='t'||letra=='v'||letra=='w'||letra=='x'||letra=='y'||letra =='z'||
             letra == 'B'||letra == 'C'||letra =='F'||letra == 'G'||
            letra=='H'||letra=='J'||letra =='K'||letra == 'L'||letra =='M'||
             letra=='N'||letra=='P'||letra=='Q'|| letra=='R'||letra=='S'||
             letra=='T'||letra=='V'||letra=='W'||letra=='X'||letra=='Y'||letra =='Z'){
        cout << letra <<" Es una consonante"<< endl;

    }

    else {
        cout << " No es una letra"<< endl;
    }

    return 0;

}

