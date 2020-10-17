#include<iostream>

using namespace std;

int main(){

    int edad; char sexo[10]; float altura;

    cout << "Ingrese su edad: " ; cin >> edad;
    cout << "Ingrese su sexo: " ; cin >> sexo;
    cout << "Ingrese su altura: " ; cin >> altura;

    cout << "Usted tiene " << edad << " años, su genero es " << sexo << " y mide " << altura << " de altura" << endl; 

    return 0;
}