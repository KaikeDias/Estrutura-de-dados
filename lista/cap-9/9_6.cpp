#include <iostream>
#include "Lista.hpp"

using namespace std;

void substituirItem(Item item, Item substituto, Lista lista) {
    if(lista == NULL) return;
    
    if(lista->item == item) lista->item = substituto;
    return substituirItem(item, substituto, lista->prox);
}


int main() {
    Lista lista = no(1, no(2, no(1, no(3, no(1, NULL)))));
    substituirItem(1, 4, lista);

    printar(lista);
}