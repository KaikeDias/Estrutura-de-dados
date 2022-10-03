#include <iostream>
#include <string>

using namespace std;

typedef char Itemp;

class Node{
	public:
		Itemp letra;
		Node *prox;
		Node(Itemp n){
			letra = n;
			prox = NULL;
		}
};

class Pilha{
	public:
		Node *topo;
		
		Pilha(){
			topo = NULL;
		}
		
		void push(char n){
            Node *item = new Node(n);
            item->prox = topo;

            topo = item;
		}
		
		Itemp pop(){
            Itemp itemRemovido = topo->letra;
			Node *remover = topo;
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