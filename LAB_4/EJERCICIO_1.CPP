// Realizar un programa que verifique si un número es divisible entre otro

#include <iostream>

using namespace std;

int main(void){

    float a, b;

    cout << "\nVERIFICAR SI UN NUMERO ES DIVISIBLE ENTRE OTRO" << endl << endl;

    cout << "Ingrese el valor del numerador: ";
    cin >> a;

    cout << "Ingrese el valor del denominador: ";
    cin >> b;

    if (b == 0){

        cout << "\nNo es posible dividir entre cero" << endl << endl;

    }
    else {

        cout << "\nSon divisibles entre si" << endl;
        cout << "El resultado de la division es: " << a / b << endl << endl; 

    }

    return 0;
}