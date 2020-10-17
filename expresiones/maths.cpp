#include<iostream>
#include<math.h>

using namespace std;

int main(){

    //inputs
    float x,y,result;

    cout << "Ingrese valor de X: ";cin >> x;
    cout << "Ingrese valor de Y: ";cin >> y;

    result = sqrt(x) / (pow(y,2)-1);

    cout.precision(2);
    cout << "El resultad es: " << result << endl;

    return 0;
}