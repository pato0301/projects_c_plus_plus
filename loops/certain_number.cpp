// Enter values between 20 and 30 or 0. Return the sum of
// all values greater than zero.
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int numero,sum = 0;

    do
    {
        cout<<"Enter  a number: ";
        cin>>numero;

        if (numero > 0)
        {
            sum+=numero;
        }
        
    } while ((numero < 20 || numero > 30) && (numero !=0));
    
    cout<<"\nThe sum is:"<<sum<<endl;

    return 0;
}