#include<iostream>

using namespace std;

int main(){

    int n1,n2,n3;

    cout << "Ingrese 3 numeros: ";
    cin >> n1 >> n2 >> n3;

    if ((n1 > n2) && (n1 > n3))
    {
        cout << n1 <<" es el numero mas grande " << endl;
    }
    else if ((n1 == n2) && (n1 == n3))
    {
        cout << " los tres numeros son iguales " << endl;
    }
    else if ((n3 > n2) && (n1 < n3))
    {
        cout << n3 <<" es el numero mas grande " << endl;
    }
    else if ((n1 < n2) && (n3 < n2))
    {
        cout << n2 <<" es el numero mas grande " << endl;
    }
    else
    {
        cout << "Hay dos numeros iguales " << endl;
    }
    
    return 0;
}