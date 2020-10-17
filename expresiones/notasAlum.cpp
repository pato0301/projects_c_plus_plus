#include<iostream>

using namespace std;

int main(){

    // marks and avg of student
    float nota1,nota2,nota3, promedio;

    cout << "Ingrese notas 1 del alumno: "; cin >> nota1;
    cout << "Ingrese notas 2 del alumno: "; cin >> nota2;
    cout << "Ingrese notas 3 del alumno: "; cin >> nota3;

    nota1 *= 0.3;
    nota2 *= 0.6;
    nota3 *= 0.1;

    promedio = nota1 + nota2 + nota3;

    cout.precision(2);
    cout << "Tu nota final es: " << promedio << endl;

    return 0;
}