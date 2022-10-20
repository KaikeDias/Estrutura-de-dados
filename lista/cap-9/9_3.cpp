#include <iostream>
#include "Lista.hpp"

using namespace std;

Item ultimoItem(Lista lista) {
    if(lista == NULL) return -1;
    while (lista->prox != NULL) lista = lista->prox;
    return lista->item;
}

int main() {
    Lista lista = no(1, no(2, no(3, no(4, no(5, NULL)))));
    Lista lista2 = no(1, no(2, no(3, no(4, NULL))));
    Lista lista3 = no(1, NULL);

    cout << ultimoItem(lista) << endl;
    cout << ultimoItem(lista2) << endl;
    cout << ultimoItem(lista3) << endl;
}