#include <iostream>
 
using namespace std;

typedef int itemF;

class No {
 
	public:
 
		itemF valor;
		No* prox;
 
		No(itemF n){
			valor = n;
			prox = NULL;
		}
};
 
class Fila {
 
	public:
 
		No* inicio;
		No* fim;
 
		Fila() {
			inicio = NULL;
			fim = NULL;
		}
 
		void append(itemF n) {
			if(isEmpty()) {
                inicio = new No(n);
                fim = inicio;
			} else {
                No* novoNo = new No(n);
                fim->prox = novoNo;
                fim = novoNo;
			}
		}
 
		itemF pop() {
			if(!isEmpty()) {
                itemF valor = inicio->valor;
                No* aux = inicio;
                inicio = inicio->prox;
                free(aux);
                return valor;
			} else return '\0';
		}
 
		bool isEmpty() {
			return (inicio == NULL);
		}
 
		void popAll() {
			while(!isEmpty()) {
				pop();
			}
		}
};