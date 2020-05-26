// Realizar un programa que verifique si la palabra ingresada es mayor a 10 caracteres y si la longitud es par o impar

#include <iostream>
#include <string.h>

using namespace std;

int main(void){

    cout << "\nVERIFIQUE SI UNA PALABRA TIENE MAS DE 10 CARACTERES Y SI LA LONGITUD ES PAR O IMPAR" << endl << endl;

    char palabra[] = "";
    int longitud = 0;

    cout << "Ingrese la palabra a verificar: ";
    cin >> palabra;

    longitud = strlen(palabra);

    if (longitud > 10){
        
        cout << "\nLa palabra ingresada es mayor a 10 caracteres";

        if ((longitud % 2) == 0){

            cout << " y su longitud es: " << longitud << " por lo tanto es par" << endl;

        }

        else {

            cout << " y su longitud es: " << longitud << " por lo tanto es impar" << endl;
            
        }
    }

    else{
        
        cout << "\nLa palabra ingresada es menor o igual a 10 caracteres";

       if ((longitud % 2) == 0){

            cout << " y su longitud es: " << longitud << " por lo tanto es par" << endl;

        }

        else {

            cout << " y su longitud es: " << longitud << " por lo tanto es impar" << endl;

        } 
    
    }
    return 0;
}