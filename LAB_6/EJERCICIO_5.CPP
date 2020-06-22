#include <iostream>

using namespace std;

int main(){

    cout << "\nPRIMEROS 100 NUMEROS IMPARES DE MANERA DESCENDENTE" << endl << endl;

    int array[100], num = 0;

    for (int i = 1; i <= 200; i++){

        if(i % 2 != 0){

            array[num] = i;
            num++;
        }
 
    }

        for(int x = num-1; x > -1; (x--)+1){

            cout << array[x] << endl;

        }

    return 0;
}