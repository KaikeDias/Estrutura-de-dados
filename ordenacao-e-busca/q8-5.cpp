#include <iostream>

using namespace std;

void insere(char elemento, int vetor[], int numElementos){
    while(numElementos > 0 && elemento < vetor[numElementos - 1]){
        vetor[numElementos] = vetor[numElementos-1];
        numElementos--;
    }

    vetor[numElementos] = elemento; 
}

void insertionSort(int vetor[], int numElementos, int i){
    if(i == numElementos) return;
    insere(vetor[i], vetor, i);
    insertionSort(vetor, numElementos, i+1);
}

int main() {
    int vetor[] = {15, 2, 25, -32, 48, 5};
    insertionSort(vetor, 6, 0);

    for(int i = 0; i < 6; i++) {
        cout << vetor[i] << endl;
    }

    return 0;
}