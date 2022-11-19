#include<iostream>

using namespace std;

#define troca(a,b) { int x=a; a=b; b=x;}

int seleciona(int vetor[], int numElementos) {
    int i = 0;
    for(int j = 1; j < numElementos; j++){
        if(vetor[i] < vetor[j]) {
            i = j;
        }
    }
    return i;
}

void selectionSort(int v[], int n){
    if(n == 0) return;
    troca(v[seleciona(v, n)], v[n-1]);
    n--;
    selectionSort(v, n);    
}

int pesquisa_linear(int valor,int vetor[], int tamanho) {
   for (int i = 0; i < tamanho; i++) {
      if (vetor[i] == valor) {
         return 1;
      }
   }
   return 0;
}

int pesquisa_binaria(int valor,int vetor[], int tamanho) {
   int inicio = 0;
   int fim = tamanho - 1;

   while (inicio <= fim) {
      int meio = (inicio + fim)/2;

      if (vetor[meio] == valor) {
         return 1;
      }

      if (vetor[meio] > valor) {
         fim = meio - 1;
      }

      if (vetor[meio] < valor) {
         inicio = meio + 1;
      }
   }
   return 0;
}

int main(){
   int vetor[4] = {};
   int tamanho = sizeof(vetor)/sizeof(vetor[0]);

   // A. Leia os valores atrav�s do teclado
   int valor;
   for (int i = 0; i < tamanho; i++) {
      cout << "Digite um numero: " << endl;
   // B. Armazene os valores no vetor de dados
      cin >> valor;
      vetor[i] = valor;
   }

   // C. leia o valor que deseja procurar
   int numeroProcurado;
   cout << "Digite o numero procurado: " << endl;
   cin >> numeroProcurado;

   // D. Aplique a pesquisa linear
   int resultadoPesquisaLinear = pesquisa_linear(numeroProcurado, vetor, tamanho);

   // E. Apresente o resultado
   cout << "True/False - Pesquisa Linear: " << resultadoPesquisaLinear << endl;

   // F. Aplique a pesquisa bin�ria
   selectionSort(vetor, tamanho);
   int resultadoPesquisaBinaria = pesquisa_binaria(numeroProcurado, vetor, tamanho);

   // // G. Apresente o resultado
   cout << "True/False - Pesquisa Binaria: " << resultadoPesquisaBinaria << endl;

}


