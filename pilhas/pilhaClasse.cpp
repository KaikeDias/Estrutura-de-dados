#include <iostream>
#include <string>

using namespace std;

typedef int Itemp;

class No{
	public:
		Itemp numero;
		No *prox;
		No(Itemp n){
			numero = n;
			prox = NULL;
		}
};

class Pilha{
	public:
		No *topo;
		
		Pilha(){
			topo = NULL;
		}
		
		void push(char n){
            No *item = new No(n);
            item->prox = topo;

            topo = item;
		}
		
		Itemp pop(){
            Itemp itemRemovido = topo->numero;
			No *remover = topo;
            topo = remover->prox;
            
            return itemRemovido;
		}
		
		bool isEmpty(){
			return topo == NULL;
		}

        void popAll(Pilha *p){
            while(!(p->isEmpty())){
                cout << p->pop() << endl;
                
            }

            free(p);
            free(topo);
        }
};

int main(){
    Pilha *pilha = new Pilha();

    pilha->push(5);
    pilha->push(4);
    pilha->push(3);
    pilha->push(2);
    pilha->push(1);

    pilha->popAll(pilha);
}
