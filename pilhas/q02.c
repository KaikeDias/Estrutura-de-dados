#include <stdio.h>
#include "pilha.c"

int main(){
    char c[16];
    Pilha p = createP(16);

    printf("Frase: ");
    gets(c);

    for(int i = 0; i < 16; i++){
        push(p, c[i]);
    }

    do{
        printf("%c", pop(p));
    }while(isEmpty(p) != 1);

    destroy(p);
}
