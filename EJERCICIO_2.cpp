// Realizar un programa que reciba el radio de un círculo y calcular su área y perímetro

#include <iostream>
#include <cmath>
#define M_PI

using namespace std;

int main(void){

    float radio, area, perimetro;

    //Recibir datos de radio
    cout<<"\nIngrese el radio de un circulo: ";
    cin>>radio;

    //Calcular area

    area = pow(radio,2) * 3.14;

    cout << "\nEl area del circulo es: " << area << endl;

    //Calcular perimetro 

    perimetro = 2 * 3.14 * radio;

    cout << "\nEl perimetro del circulo es: " << perimetro << endl;
    cout << endl;
    return 0;
}