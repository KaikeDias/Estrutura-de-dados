#include <stdio.h>
#include <stdbool.h>

typedef char Itemp;

typedef struct pilha{
    int max;
    int topo;
    Itemp *item;
} *Pilha;  

Pilha createP(int m){
    Pilha p = malloc(sizeof(struct pilha));
    p->topo = -1;
    p->max = m;
    p->item = malloc(m*sizeof(Itemp));

    return p;
}

bool isEmpty(Pilha p){
    return p->topo == -1;
}

bool isFull(Pilha p){    
    return p->topo == p->max-1;
}

void push(Pilha p, Itemp x){
    if(isFull(p)){
        puts("Pilha cheia");
    }else{
        p->topo++;
        p->item[p->topo] = x;
    }
}

Itemp pop(Pilha p){
    if(isEmpty(p)){
        puts("Pilha vazia");
    }else{
        Itemp x = p->item[p->topo];
        p->topo--;
        return x;
    }
}

Itemp topo(Pilha p){
    if(isEmpty(p)){
        puts("Pilha vazia");
    }else{
        return p->item[p->topo];
    }
}

void destroy(Pilha *Q){
    free((*Q)->item);
    free(*Q);
    *Q = NULL;
}