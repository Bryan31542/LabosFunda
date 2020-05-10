//Realizar un programa que reciba a, b, c y nos devuelva el resultado de la fórmula cuadrática

#include <iostream>
#include <cmath>

using namespace std;

int main(void){

    int a = 0, b = 0 ,c = 0;

    cout << "\nIngrese el valor de a: "; cin >> a;
    cout << "\nIngrese el valor de b: "; cin >> b;
    cout << "\nIngrese el valor de c: "; cin >> c;

    float resultado1 = 0, resultado2 = 0;

    
    resultado1 = (-b+sqrt(pow(b,2)-4*a*c)) / (2*a);

    resultado2 = (-b-sqrt(pow(b,2)-4*a*c)) / (2*a);
    

    cout << "\nEl resultado 1 es :" << resultado1 << endl;
    cout << "\nEl resultado 2 es :" << resultado2 << endl;
    cout << endl;

    return 0;
}
