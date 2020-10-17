#include<iostream>

using namespace std;

int main(){

    int n1,n2;

    cout << "Ingrese 2 numeros: ";
    cin >> n1 >> n2;

    if (n1 > n2)
    {
        cout << n1 <<" es mayor que " << n2 << endl;
    }
    else if (n1 == n2)
    {
        cout << n1 << " es igual a " << n2 << endl;
    }
    else
    {
        cout << n1 << " es menor que " << n2 << endl;
    }
    
    return 0;
}