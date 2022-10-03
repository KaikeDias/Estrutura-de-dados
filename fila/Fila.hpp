#include <iostream>
 
using namespace std;
 
class No {
 
	public:
 
		char valor;
		No* prox;
 
		No(char n){
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
 
		void append(char n) {
			if(isEmpty()) {
                inicio = new No(n);
                fim = inicio;
			} else {
                No* novoNo = new No(n);
                fim->prox = novoNo;
                fim = novoNo;
			}
		}
 
		char pop() {
			if(!isEmpty()) {
                char valor = inicio->valor;
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