#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int sum = 0,square;

    for (int i = 1; i <= 10; i++)
    {
        square= i * i;
        sum += square;
    }
    
    
    cout<<"\nThe square sum of the 10 first numbers is:"<<sum<<endl;

    return 0;
}