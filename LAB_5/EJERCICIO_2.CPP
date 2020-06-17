#include <iostream>

using namespace std;

int main(){

    cout << "\nCALCULE LA HORA UN SEGUNDO DESPUES" << endl;
    cout << "El formato es de 24 horas" << endl;

    int hora, minutos, segundos;

    cout << "\nIngrese la hora: ";
    cin >> hora;

    cout << "Ingrese los minutos: ";
    cin >> minutos;

    cout << "Ingrese los segundos: ";
    cin >> segundos;

    if (segundos >= 0 && segundos < 60 && minutos >=0 && minutos < 60 && hora >=0 && hora < 24){
        
        segundos++;
        if (segundos == 60){

            segundos = 00;
            minutos++;
        
            if(minutos == 60){

            minutos = 00;
            hora++;
            }
            if(hora == 24){

            hora = 00;
            }
            
        } 
        cout << "\nLa hora un segundo despues es: " << hora << ":"<< minutos << ":" << segundos << endl;
        
    }
    else{

        cout << "\nLa hora no esta dentro del formato indicado";
    }      

    return 0;
}