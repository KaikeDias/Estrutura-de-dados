#include <iostream>
#include "Lista.hpp"

using namespace std;

Item buscarEnesimo(int posicao, Lista lista) {
    if (posicao < 1 || lista->prox == NULL) return -1;
    if(posicao == 1) return lista->item;
    else return buscarEnesimo(posicao - 1, lista->prox);
}

int main() {

    Lista lista = no(1, no(2, no(3, no(4, no(5, NULL)))));

    cout << buscarEnesimo(6, lista) << endl;
}