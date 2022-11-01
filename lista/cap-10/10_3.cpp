#include <iostream>
#include "listaDupla.hpp"

void insSR(int x, Lista* L){
    if(L->busca(x)){
        cout << "O item ja esta na lista" << endl;
    }else{
        L->addOrd(x);
    }
}

int main(){
    Lista* lista = new Lista();

    lista->addOrd(1);
    insSR(1, lista);
    insSR(2, lista);

    lista->mostraIniFim();

    return 0;
}