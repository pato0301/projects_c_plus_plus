#include<iostream>

using namespace std;

int main(){

    int x,y,aux;

    cout << "Ingrese variable X: ";cin >> x;
    cout << "Ingrese variable Y: ";cin >> y;

    aux = x;
    x = y;
    y = x;

    cout << "Ahora X vale: " << x << " e Y vale: " << y << endl;

    return 0;
}