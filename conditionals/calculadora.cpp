#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int opc, num;
    float numero, cubo;

    cout << "\tBienvenido al tu ATM" << endl;
    cout << "1. Cubo de un  numero" << endl;
    cout << "2. Numero es par o impar" << endl;
    cout << "3. Salir" << endl;
    cout << "Opcion: ";
    cin >> opc;

    switch (opc)
    {
    case 1:
        cout << "Ingrese un numero: ";
        cin >> numero;
        cubo = pow(numero,3);
        cout << "El cubo es: " << cubo << endl;
        break;
    case 2:
        cout << "Ingrese un numero: ";
        cin >> num;
        if (num%2== 0)
        {
            cout << "Tu numero es par" << endl;
        }
        else
        {
            cout << "Tu numero es impar" << endl;
        }
        break;
    case 3:
        cout << "Gracias!" << endl;
        break;
    default:
        break;
    }

    return 0;
}