#include <stdio.h>
#include "pilha.c"

int main(){
    int tam;
    float num, aux;

    printf("Quantidade de numeros: ");
    scanf("%d", &tam);

    Pilha A = createP(tam);
    Pilha B = createP(tam);

    printf("numeros: ");
    for(int i = 0; i < tam; i++){
        scanf("%f", &num);
        push(B, num);
    }

    while(!isFull(A)){
        if(isEmpty(A) || A->item[A->topo] >= B->item[B->topo]){
            push(A, pop(B));
        }else{
            aux = pop(B);
            printf("aux: %.2f\n", aux);
            
            while(!isEmpty(A) && A->item[A->topo] < aux){
                push(B, pop(A));
            }

            push(A, aux);
        }
    }

    do{
        printf("%.2f ", pop(A));       
    }while(!isEmpty(A));

    return 0;
}

