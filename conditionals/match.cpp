#include<iostream>

using namespace std;

int main(){

    int n1,n2,n3,n4;

    cout << "Por favor ingrese 3 numeros: ";
    cin >> n1 >> n2 >> n3;

    cout << "\nIngrese un cuarto numero: ";
    cin >> n4;

    if (n4 == n1)
    {
        cout << "El numero es igual al numero " << n1 << endl;
    }
    else if (n4 == n2)
    {
        cout << "El numero es igual al numero " << n2 << endl;
    }
    else if (n4 == n3)
    {
        cout << "El numero es igual al numero " << n3 << endl;
    }
    else
    {
        cout << "El numero no coincide con ninguno de los 3 primero numeros" << endl;
    }

    return 0;
}