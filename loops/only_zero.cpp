#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int numero,count = 0;

    do
    {
        cout<<"Enter  a number: ";
        cin>>numero;

        if (numero > 0)
        {
            count++;
        }
        
    } while (numero != 0);
    
    cout<<"\nThe number of time you try number above 0 is:"<<count<<endl;

    return 0;
}