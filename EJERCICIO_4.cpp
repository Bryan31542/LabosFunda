//Realizar un programa que reciba un producto comprado (nombre, precio y cantidad comprada)

#include <iostream>

using namespace std;

int main (void){

    string nombre;
    int cantidad = 0;
    float precio = 0, gasto = 0;

    cout << "\nIngrese el nombre del producto: ";
    cin >> nombre;

    cout << "\nIngrese el precio del producto: ";
    cin >> precio;

    cout << "\nIngrese la cantidad de producto comprado: ";
    cin >> cantidad;

    gasto = cantidad * precio;

    cout << "\nSu gasto fue de: " << gasto;
    cout << " dolares" << endl;

    return 0;
}