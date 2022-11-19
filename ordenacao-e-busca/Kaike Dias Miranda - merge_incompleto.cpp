#include<iostream>
using namespace std;
void intercala(int vetor[], int inicio, int meio, int fim) {
   int* tamanho = (int*)malloc((inicio+fim+1)*sizeof(int));
   if (tamanho == NULL) {
      abort();
   }
   int i = inicio;
   int j = meio + 1;
   int k = 0;
   while (i <= meio && j <= fim) {
      if (vetor[i] < vetor[j]) {
         tamanho[k++] = vetor[i++];
      } else {
         tamanho[k++] = vetor[j++];
      }
   }
   while (i <= meio) {
      tamanho[k++] = vetor[i++];
   }
   while (j <= fim) {
      tamanho[k++] = vetor[j++];
   }
   for (k = 0; k <= fim - inicio; k++) {
      vetor[inicio+k] = tamanho[k];
   }
}

void merge_sort(int vetor[],int inicio, int fim) {
   if (inicio == fim) {
      return;
   }
   int meio = (inicio+fim)/2;
   merge_sort(vetor, inicio, meio);
   merge_sort(vetor, meio+1, fim);
   intercala(vetor, inicio, meio, fim);
}

int main(){
   int vetor[6] = {7, 9, 4, 3,6,1};
   int i;   


   merge_sort(vetor, 0, 5);
   printf("\n2.Vetor ordenado:\n");
   for(i = 0; i <= 5; i++){
      printf("%d ", vetor[i]);
   }
   printf("\n");   
}


