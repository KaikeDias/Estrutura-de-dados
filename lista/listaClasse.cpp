#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class No{
	public:
		int mat;
		char nome[23];
		No *prox;
		No(int m,char n[23]){
			mat=m;
			strcpy(nome,n);			
			prox=NULL;
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
			if (fim==NULL){
				inicio = novo;
				fim = novo;
			}
			else{
				fim->prox=novo;
				fim=novo;
			}
		}
		
			
		bool lst_vazia(){
			return inicio==NULL;
		}

		void addToInicio(int m,char n[23]){
			No *novoNo = new No(m, n);
			novoNo->prox = inicio;
			inicio = novoNo;
			
			if(this->lst_vazia()){
				fim = novoNo;
			}
		}

		void mostra(){
			if (lst_vazia()){
				cout<<"\nLista vazia!!!";
			}
			else{
				No *noAux = inicio;

				cout << "Lista:" << endl;

				while(noAux != NULL){
					cout << "Nome: " << noAux->nome << "|| Matricula: " << noAux->mat << endl;
					noAux = noAux->prox;
				}
			}
		}
		
		bool remove(int mat){
			 if(this->lst_vazia()){
				cout << "Lista vazia" << endl;
			 }else{
				No *noAux = inicio;
				No *anterior = NULL;

				while(noAux != NULL){
					if(noAux->mat == mat){
						if(fim == noAux){
							fim = anterior;
						}
						anterior->prox = noAux->prox;
						free(noAux);
						return true;
					}
					anterior = noAux;
					noAux = noAux->prox;
				}
				cout << "Elemento nao encontrado" << endl;
			 }

			 return false;
		}
		
		// auxiliar no metodo remove, vai 
		//retornar o endereco do anterior
		No *busca(int mat){
			if(this->lst_vazia()){
				cout << "Lista vazia" << endl;
			 }else{
				No *noAux = inicio;

				while(noAux != NULL){
					if(noAux->mat == mat){
						return noAux;
					}
					noAux = noAux->prox;
				}
				cout << "Elemento nao encontrado" << endl;
			 }

			 return NULL;
		}
		
		void removeTodos(){
			No *atual=inicio;
			No *proximo=NULL;
			while (atual!=NULL){
					proximo=atual->prox;
					cout<<"\n Apaga:"<<atual->nome;
					free(atual);
					atual=proximo;						
			}
			inicio=atual;
		}
		
		// criar uma nova lista que seja o inverso da primeira
		Lista* crialistainversa(){
			if(this->lst_vazia()){
				cout << "Lista vazia" << endl;
			}else{
				Lista *lista2 = new Lista();

				No *atual = inicio;
				No *prox = inicio->prox;
				lista2->addToInicio(inicio->mat, inicio->nome);

				while(atual->prox != NULL){
					atual = prox;
					prox = atual->prox;
					lista2->addToInicio(inicio->mat, inicio->nome);
				}

				return lista2;
			}
		}
		
		//inverter a propria lista
		void listainvertida(){
			if(this->lst_vazia()){
				cout << "Lista vazia" << endl;
			}else{
				No *atual = inicio;
				No *prox = atual->prox;

				No *anterior = NULL;
				atual->prox = NULL;
				fim = inicio;

				while(prox != NULL){
					anterior = atual;
					atual = prox;
					prox = atual->prox;

					atual->prox = anterior;

					if(prox == NULL){
						inicio = atual;
					}
				}
			}
		}
};

int main(){
   	Lista *l=new Lista();
   
   	l->addToFinal(1,"Joao");
   	l->addToFinal(2,"Gabriela");
   	l->addToFinal(3,"Fabiola");
   	l->addToInicio(5,"Joana Oliveira");
   	l->addToInicio(6,"Cristiano Oliveira");
   	l->mostra();
 
  	l->listainvertida();
  	l->mostra();

	return 0;

}
