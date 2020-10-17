#include<iostream>
#include<math.h>

using namespace std;

int main(){

    // input two sizes of a triangule
    float a,b, result;

    cout << "Ingrese el lado A: "; cin >> a;
    cout << "Ingrese el lado B: "; cin >> b;

    result = sqrt(pow(a,2)+pow(b,2));

    cout.precision(2);
    cout << "El resultado es: " << result << endl;

    return 0;
}