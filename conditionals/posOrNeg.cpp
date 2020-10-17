#include<iostream>

using namespace std;

int main(){

    int x;

    cout << "Ingrese un numero" << endl;
    cin >> x;

    if (x > 0)
    {
        cout << "El numero es positivo" << endl;
    }
    else if (x == 0)
    {
        cout << "El numero es cero" << endl;
    }
    
    else
    {
        cout << "El numero es negatico" << endl;
    }

    return 0;
}