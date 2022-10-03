#include <iostream>
#include "Fila.hpp"
#include <cctype>

using namespace std;

int main(){
    Fila* l1 = new Fila();
    Fila* l2 = new Fila();

    char letra;
    int cont = 0;
    int resp;

    do{
        cout << "Digite a letra: ";
        cin >> letra;

        if(l1->isEmpty() == true){
            l1->append(letra);
        }else{
            while(l1->isEmpty() == false){
                l2->append(l1->pop());
            }
            
            l1->append(letra);
            
            while(l2->isEmpty() == false){
                l1->append(l2->pop());
            }
        }

        cout << "Deseja continuar? (1- Sim 2- Nao)";
        cin >> resp;
        cont++;
    }while(resp == 1);

    for(int i = 0; i < cont; i++){
        cout << l1->pop() << endl;
    }
}