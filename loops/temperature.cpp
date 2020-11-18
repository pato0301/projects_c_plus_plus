// Takes temperature every for hours
// In Celsius
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    float temp, avg = 0,sumTot = 0,max=0,min=999;

    for (int i = 0; i < 24; i+=4)
    {
        cout<<"Enter temperature hour "<<i<<": ";
        cin>>temp;

        sumTot += temp;

        if (temp > max)
        {   
            max = temp;
        }
        if (temp < min)
        {   
            min = temp;
        }

        avg = sumTot/6;
    }
    
    
    cout<<"Averga temperature: "<<avg<<endl;
    cout<<"Max temperature: "<<max<<endl;
    cout<<"Min temperature: "<<min<<endl;

    return 0;
}