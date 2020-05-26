// Realizar un programa que verifique si un numero es positivo, negativo o cero

#include <iostream>

using namespace std;

int main(void){

    cout << "\nVERIFIQUE SI UN NUMERO ES POSITIVO, NEGATIVO O CERO" << endl << endl;

    int a;

    cout << "Ingrese el valor del numero a verificar: ";
    cin >> a;

    if (a > 0){

        cout << "El numero " << a << " es positivo" << endl;

    }

    else if (a < 0){

        cout << "El numero " << a << " es negativo" << endl;

    }

    else {

        cout << "El numero es cero" << endl;

    }

    cout << endl;

    return 0;
}