#include<iostream>

using namespace std;

int main(){

    float a,b,c,d,e,f, resultado = 0;

    cout << "Ingrese parametro A: ", cin >> a;
    cout << "Ingrese parametro B: ", cin >> b;
    cout << "Ingrese parametro C: ", cin >> c;
    cout << "Ingrese parametro D: ", cin >> d;
    cout << "Ingrese parametro E: ", cin >> e;
    cout << "Ingrese parametro F: ", cin >> f;

    resultado = (a + (b/c)) / (d + (e/f));

    cout.precision(2);
    cout << "El resultado es: " << resultado << endl;

    return 0;
}