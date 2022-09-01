#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float m,km;

    cout << "Speed in m/s: ";
    cin >> m;

    km = m * 3.6;

    cout << "Speed in km/h: " << km;
}