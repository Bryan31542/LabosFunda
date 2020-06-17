#include <iostream>

using namespace std;

bool bisiesto(int year){

    if (year % 400 == 0){
        return true;
    } 
    if (year % 4 == 0 && year % 100 != 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    printf("\nQUIERES SABER SI UN A%cO ES BISIESTO?",165); //Se añade la Ñ por medio de la tabla ASCII
    cout << endl;

    int year;

    printf("\nIngrese el a%co a verificar: ",164); //Se añade la ñ por medio de la tabla ASCII
    cin >> year;

    if ((bisiesto)(year) == true){

        printf("\nEl a%co es bisiesto",164); //Se añade la ñ por medio de la tabla ASCII

    }
    else {

        printf("\nEl a%co no es bisiesto",164); //Se añade la ñ por medio de la tabla ASCII

    }

    return 0;
}