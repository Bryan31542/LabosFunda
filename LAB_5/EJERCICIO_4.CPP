#include <iostream>

using namespace std;

bool bisiesto(int year){

    if (year % 400 == 0){
        return true; // Es bisiesto
    } 
    if (year % 4 == 0 && year % 100 != 0){
        return true; // Es bisiesto
    } 
    else{
        return false; // No es bisiesto
    }
}

int fdias(int mes, int year){

    int diasdelmes = 0; 

    if (mes == 1 || mes == 3 || mes == 7 || mes == 8 || mes == 10 || mes == 12){ // Enero, marzo, mayo, julio, agosto, octubre y diciembre

    diasdelmes = 31;

    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){ //abril, junio, septiembre, noviembre

    diasdelmes = 30;

    }
    else if (mes == 2){
        if ((bisiesto)(year) == true){

            diasdelmes = 29;
        }
        else{
        diasdelmes = 28;
        }

    }
    return diasdelmes;
}

int main(){

    cout << "\nCALCULE LA FECHA UN DIA DESPUES" << endl;
    cout << "Debe ingresar el mes de acuerdo al numero que corresponde" << endl;

    int dia, mes, year;

    cout << "\nIngrese el dia: ";
    cin >> dia;
    cout << "Ingrese el mes: "; 
    cin >> mes;
    printf("Ingrese el a%co: ",164);
    cin >> year;

    cout << "\nSu fecha es " << dia << "/" << mes << "/" << year << endl;
    
    if (dia > 0 && dia <= fdias(mes, year) || mes > 0 && mes <= 12){
        dia++;
        if (dia > fdias(mes, year)){

            dia = 1;
            mes++;
            if (mes > 12){

                mes = 1;
                year ++;
            }
        }
    cout << "\nSu fecha el dia siguiente es: " << dia << "/" << mes << "/" << year << endl << endl;
    }
    else{
        cout << "\nError de digitacion" << endl << endl;
    }

    
    return 0;
}