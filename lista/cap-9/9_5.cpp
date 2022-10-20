#include <iostream>
#include "Lista.hpp"

using namespace std;

int soma(Lista lista) {
    if(lista == NULL) return 0;
    return lista->item + soma(lista->prox);
}

int main() {
    Lista lista = no(1, no(2, no(3, no(4, no(5, NULL)))));

    cout << soma(lista) << endl;
}