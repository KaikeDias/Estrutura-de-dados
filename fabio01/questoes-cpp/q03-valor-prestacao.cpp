#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    float valor,prestacao,entrada;

    cout << "Valor total: R$";
    cin >> valor;

    prestacao = trunc(valor/3);
    entrada = valor - prestacao * 2;

    cout << setprecision(2) << fixed;
    cout << "Entrada: R$" << entrada;
    cout << "\nPrestacoes: R$" << prestacao;
}