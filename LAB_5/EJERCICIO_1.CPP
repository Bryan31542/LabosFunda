#include <iostream>

using namespace std;

int fcmd(int n1, int n2){

    int residuo;

    do{

        residuo = n1 % n2;

        if (residuo != 0){

            n1 = n2;
            n2 = residuo;

        }
    }
    while (residuo != 0);
    {
        return n2;
    }
}
int main(){

    int n1, n2;

    cout << "\nCALCULE EL MCD DE DOS NUMEROS" << endl << endl;

    cout << "Ingrese el valor del numero mayor: ";
    cin >> n1;

    cout << "Ingrese el valor del numero menor: ";
    cin >> n2;

    cout << "El MCD es: " << fcmd(n1,n2);

    return 0;
}