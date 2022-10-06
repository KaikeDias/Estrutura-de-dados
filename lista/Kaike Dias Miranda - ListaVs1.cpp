#include <iostream>

using namespace std;

typedef struct aluno{
	int mat;
	string nome;	
}Aluno; 

Aluno lista[30];
int contarElementos = 0;

//retorna a posicao do elemento procurado
int procura(int mat){	
	int tam = contarElementos;
	bool existe = false;

	for(int i = 0; i < tam; i++){
		if(lista[i].mat == mat){
			return i;
		}
	}

	return -1;
}

void incluirDesordenado(Aluno e){
	if(procura(e.mat) == -1){
		lista[contarElementos] = e;
		contarElementos++;
	}
}

//recebe a posicao e imprime o elemento na tela
void mostrar(int pos){
	cout << "Aluno: " << lista[pos].nome << endl;
	cout << "Matricula: " << lista[pos].mat << endl;
}

//procura o elemento e depois mostra o elemento encontrado (se nao for encontrado informa q ele nao existe)
void consultar(int mat){
	int posicao = procura(mat);

	if(posicao != -1){
		mostrar(posicao);
	}else{
		cout << "Elemento inexsitente na lista" << endl;
	}
}

//estrat�gia 1: colocar o ultimo elemento da lista na posi��o do elemento removido
void remover00(int mat){
	int indice = procura(mat);

	lista[indice] = lista[contarElementos];
	free(&lista[contarElementos]);
	contarElementos--;
}

//estrat�gia 2: mover TODOS os elementos que est�o AP�S  o elemento que deve ser removido UMA POSI��O A FRENTE.
void remover01(int mat){
	int indice = procura(mat);

	for(int i = indice; i < contarElementos; i++){
		lista[i] = lista[i+1];
	}

	free(&lista[contarElementos]);
	contarElementos--;
}

main(){
	Aluno aluno1;
	Aluno aluno2;
	Aluno aluno3;
	Aluno aluno4;
	
	aluno1.mat = 1;
	aluno1.nome = "kaike";

	aluno2.mat = 2;
	aluno2.nome = "kelson";

	aluno3.mat = 3;
	aluno3.nome = "romero";

	aluno4.mat = 4;
	aluno4.nome = "igor";

	incluirDesordenado(aluno1);
	incluirDesordenado(aluno2);
	incluirDesordenado(aluno3);
	incluirDesordenado(aluno4);

	remover01(aluno1.mat);

	consultar(aluno1.mat);
	
	
}
	
	
	