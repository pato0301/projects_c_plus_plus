#include<iostream>

using namespace std;

int main(){

    // price
    float price, vat = 1.21, new_price;

    // ask for price input
    cout << "Please enter a price without VAT: "; cin >> price;
    new_price = price * vat;

    // Print final price with VAT
    cout << "The final price with VAT is: " << new_price << endl;

    return 0;
}