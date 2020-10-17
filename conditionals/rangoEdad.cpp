#include<iostream>

using namespace std;

int main(){

    int edad;

    cout << "Ingrese su edad: "; cin >> edad;

    if ((edad >= 18) && (edad <= 25))
    {
        cout << "La edad esta en el rango [18-25] años" << endl;
    }
    else
    {
        cout << "Su edad no esta en el rango [18-25]" << endl;
    }
    

    return 0;
}