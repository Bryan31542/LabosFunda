#include <iostream>

using namespace std;

float apromedio(int array[], float promedio, int longitud){

    float suma = 0;

    for (int i = 0; i < longitud; i++){

        int numero = array[i];
        suma += numero;
    }

    promedio = suma / longitud;

    return promedio;
}

int main(){

    int ndatos = 0;

    cout << "\nIngresa la cantidad de datos que introduciras: ";
    cin >> ndatos;
    int array[ndatos];

    int n = 0;
    cout << endl;
    for(int i = 0; i < ndatos; i++){

        int dato = 0;
        n++;
        cout << "Ingrese el dato numero " << n << ": ";
        cin >> dato;

        array[i] = dato;
        dato = 0;

    }
    int longitud = sizeof(array)/sizeof(ndatos);
    cout << "\nTus datos son: " << endl;

    for (int i = 0; i < ndatos; i++){

        cout << array[i] << endl;

    }
    float promedio;
    cout << "\nY el promedio de tus datos es: " << apromedio(array, promedio, longitud);

    return 0;
}