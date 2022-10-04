#include <iostream>
#include "Fila.hpp"
#define tempo 3

using namespace std;

int main(){
    Fila* F = new Fila();
    F->append(17);
    F->append(25);
    F->append(39);
    F->append(46);

    while(F->isEmpty() == false){
        int x = F->pop();
        int p = x/10;
        int t = x%10;

        if(t > 3){
            F->append(p*10+(t-tempo));
        }else{
            cout << x << "  Processo concluido" << endl;
        }
    }
    
    //Ordem de conclusão 22 >> 43 >> 11 >> 33 que significa respectivamente 17 >> 25 >> 46 >> 39 
}