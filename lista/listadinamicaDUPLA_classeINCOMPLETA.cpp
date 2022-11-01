#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class No{
	public:
		int num;
		char nome[23];
		No *prox;
		No *ant;
		No(int m,char n[23]){
			num=m;
			strcpy(nome,n);
			prox=NULL;
			ant=NULL;
		}
};

class Lista{
	public:
		No *inicio;
		No *fim;
	
	    Lista(){
	    	inicio = NULL;
	    	fim = NULL;
		}	
		void addToFinal(int m, char n[23]){
			No *novo= new No(m,n);
			if (fim==NULL && inicio == NULL){
				inicio = novo;
				fim = novo;
			}
			else{
				novo->ant = fim;
				fim->prox=novo;
				fim=novo;
			}
		}
		
		void addToIni(int m, char n[23]){
			No *novo= new No(m,n);
			if (fim==NULL && inicio == NULL){
				inicio = novo;
				fim = novo;
			}
			else{
				novo->prox = inicio;
				inicio->ant = novo;
				inicio = novo;
			}
		}
		
		void addOrd(int m, char n[23]){
   			No *novo = new No(m, n);
			No *atual = inicio;

			if(inicio == NULL && fim == NULL){
				inicio = novo;
				fim = novo;
			}else if(novo->num < inicio->num){
				this->addToIni(novo->num, novo->nome);
			}else if(novo->num > inicio->num){
				this->addToFinal(novo->num, novo->nome);
			}else{
				while(novo->num > atual->num && atual != NULL){
					atual = atual->prox;
				}

				if(atual == NULL){
					this->addToFinal(novo->num, novo->nome);
				}else{
					novo->ant = atual->ant;
					atual->ant->prox = novo;
					atual->ant = novo;
					novo->prox = atual;
				}
			}
		}
		
		//mostra todos os elementos do inicio ao final da lista
		void mostraIniFim(){
			No* noAux = inicio;
			cout << "\nALUNOS" << endl;

			if(noAux == NULL && fim == NULL){
				cout << "Lista vazia" << endl;
			}

			while(noAux != NULL){
				cout << "Matricula: " << noAux->num << endl;
				cout << "Nome: " << noAux->nome << endl;
				noAux = noAux->prox;
			}
		}
		
		// mostra todos os elementos do final ao inicio da lista
		void mostraFimIni(){
			No* noAux = fim;
			cout << "\nALUNOS" << endl;

			if(noAux == NULL && fim == NULL){
				cout << "Lista vazia" << endl;
			}

			while(noAux != NULL){
				cout << "Matricula: " << noAux->num << endl;
				cout << "Nome: " << noAux->nome << endl;
				noAux = noAux->ant;
			}
		}
		
		int removerFinal(){
			No* remove = fim;

			if(fim == NULL){
				return 0;
			}

			if(fim->prox == NULL && fim->ant == NULL){
				fim = NULL;
				inicio = NULL;
				free(remove);
			}else {
				fim = fim->ant;
				fim->prox = NULL;
				remove->ant = NULL;
				free(remove);
			}

			return 1;
		}
		
		int removerInicio(){
			No* remove = inicio;

			if(inicio == NULL){
				return 0;
			}

			if(inicio->prox == NULL && inicio->ant == NULL){
				inicio = NULL;
				fim = NULL;
				free(remove);
			}else {
				inicio = inicio->prox;
				inicio->ant = NULL;
				remove->prox = NULL;
				free(remove);
			}

			return 1;
		}

		int remover(int m){
			No* remove = inicio;

			if(fim == NULL && inicio == NULL){
				return 0;
			}

			while(remove->num != m){
				remove = remove->prox;

				if(remove == NULL){
					break;
					cout << 'Matricula inexistente no sistema' << endl;
				}
			}

			if(m == inicio->num){
				this->removerInicio();
			}else if(m == fim->num){
				this->removerFinal();
			}else {
				if(remove->prox == NULL && remove->ant == NULL){
					fim = NULL;
					inicio = NULL;
					free(remove);
				}else {
					remove->ant->prox = remove->prox;
					remove->prox->ant = remove->ant;

					remove->prox = NULL;
					remove->ant = NULL;
					free(remove);
				}

			}

			return 1;
    	}
};
main(){
   Lista *l=new Lista();
   
   l->addOrd(001,"Joana Oliveira");
   l->addOrd(10,"Cristiano Oliveira");
  // l->mostra();
   l->addOrd(8,"Joao");
   l->addOrd(4,"Fabio");
//    l->mostraIniFim(); 
	l->mostraFimIni();	
   if (l->remover(4)==1)
       cout<<"Elemento removido!!";
   else
       cout<<"Elemento nao encontrado!!";    
   l->mostraIniFim(); 
	
}
