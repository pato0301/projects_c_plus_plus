#include<iostream>

using namespace std;

int main(){
    //ingrese numero
    int n1,n2, suma = 0, resta = 0, mul = 0, div = 0;

    cout << "Ingrese un numero: "; cin >> n1;
    cout << "Ingrese un numero: "; cin >> n2;

    suma = n1 + n2;
    resta = n1 - n2;
    mul = n1 * n2;
    div = n1 / n2;

    //imprimo por consola el numero ingresado
    cout << "\n";
    cout << "Suma: " << suma << endl;
    cout << "Resta:" << resta << endl;
    cout << "Multiplicacion:" << mul << endl;
    cout << "Division:" << div << endl;

    return 0;
}