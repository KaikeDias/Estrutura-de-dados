#include <iostream>

using namespace std;

void insere(char elemento, char vetor[], int numElementos){
    while(numElementos > 0 && elemento < vetor[numElementos - 1]){
        vetor[numElementos] = vetor[numElementos-1];
        numElementos--;
    }

    vetor[numElementos] = elemento; 
}

void insertionSort(char vetor[], int numElementos){
    for(int i = 0; i < numElementos; i++){
        insere(vetor[i], vetor, i);
    }
}

int main(){
    char vetor[] = {'c', 'f', 'a', 'g', 'w', 'b'};
    int numElementos = sizeof(vetor) / sizeof(char);

    insertionSort(vetor, numElementos);

    for(int i = 0; i < numElementos; i++){
        cout << vetor[i] << endl;
    }

    return 0;
}