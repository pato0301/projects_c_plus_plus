#include<iostream>

using namespace std;

int main(){

    int opc;
    float extra, saldo = 1000, retiro;

    cout << "\tBienvenido al tu ATM" << endl;
    cout << "1. Ingresar dinero a la cuenta" << endl;
    cout << "2. Retirar dinero de la cuenta" << endl;
    cout << "3. Salir" << endl;
    cout << "Opcion: ";
    cin >> opc;

    // Option in the ATM
    switch (opc)
    {
    case 1:
        cout << "Cantidad de dinero a ingresar: ";
        cin >> extra;
        saldo = saldo + extra;
        cout << "Dinero en la cuenta: " << saldo << endl;
        break;
    case 2:
        cout << "Cantidad de dinero a retirar: ";
        cin >> retiro;
        if (retiro > saldo)
        {
            cout << "No tiene suficiente dinero en la cuenta" << endl;
        }
        else
        {
            saldo = saldo - retiro;
            cout << "Dinero en la cuenta: " << saldo << endl;
        }
        break;
    case 3:
        cout << "Tu saldo es: " << saldo;
        cout << "\nGracias!" << endl;
        break;
    default:
        break;
    }

    return 0;
}