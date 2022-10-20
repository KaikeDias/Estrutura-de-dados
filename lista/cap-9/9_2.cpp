#include <iostream>
#include "Lista.hpp"

using namespace std;

int ocorrencias(Item item, Lista lista) {
    if(lista == NULL) return 0;
    int contador = 0;

    while (lista != NULL) {
        if(item == lista->item) contador++;
        lista = lista->prox;
    }
    return contador;
}


int main() {
    Lista lista = no(1, no(2, no(1, no(4, no(1, NULL)))));

    cout << ocorrencias(1, lista) << endl;
    cout << ocorrencias(2, lista) << endl;
    cout << ocorrencias(5, lista) << endl;
}