/* Realizar un programa en C++ que devuelva el promedio de 3 números enteros
ingresados por el usuario */

#include <iostream>

using namespace std;

int main(void){

    int n1, n2, n3, aux, resultado = 0;

    cout<<"\nDigite el primer numero: "; cin>>n1;
    cout<<"\nDigite el segundo numero: "; cin>>n2;
    cout<<"\nDigite el tercer numero: "; cin>>n3;

    aux = n1 + n2 + n3;
    resultado = aux / 3;

    cout<<"\nEl promedio de los tres numeros que ingreso es: "<<resultado<<endl<<endl;

    return 0;
}