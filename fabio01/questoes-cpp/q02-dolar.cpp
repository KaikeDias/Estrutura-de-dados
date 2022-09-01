#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float dollarValue, value;

    cout << "Dollar value: ";
    cin >> dollarValue;

    cout << "Value: ";
    cin >> value;

    float reais = value * dollarValue;

    cout << setprecision(2) << fixed;
    cout << "Value in reais: " << reais;
}   