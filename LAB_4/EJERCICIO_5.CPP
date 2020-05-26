// Realizar un programa que verifique si la palabra ingresada inicia y finaliza con la misma letra

#include <iostream>
#include <string.h>

using namespace std;

int main(void){

    cout << "\nVERIFIQUE SI UNA PALABRA EMPIEZA Y TERMINA CON LA MISMA  LETRA" << endl << endl;

    string palabra, ultimo;

    cout << "Ingrese la palabra a verificar: ";
    cin >> palabra;

    cout << "\nLa palabra es: " << palabra << endl;

    cout << "Inicia con la letra: " << palabra[0] << endl;

    cout << "Termina con la letra: " << palabra[palabra.length()-1] << endl;

    if (palabra[0] == palabra[palabra.length()-1]){

        cout << "\nPor lo tanto la primera letra y la ultima son iguales" << endl << endl;

    }else{

        cout << "\nPor lo tanto la primera y la ultima letra son diferentes" << endl << endl;
    }

    return 0;
}