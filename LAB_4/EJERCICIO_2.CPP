// Realizar un programa que verifique si un numero es par o impar

#include <iostream>

using namespace std;

int main(void){

    cout << "\nVERIFIQUE SI UN NUMERO ES PAR O IMPAR" << endl << endl;

    int a;

    cout << "Ingrese el valor del numero a verificar: ";
    cin >> a;

    if ( (a % 2) == 0){

        cout << "El numero " << a << " es par" << endl;

    } 

    else {

        cout << "El numero " << a << " es impar" << endl;

    }

    return 0;
}