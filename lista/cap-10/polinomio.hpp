#include <iostream>

using namespace std;

typedef struct poli {
    float coef;
    int expo;
    struct poli *prox;
} *Poli;

Poli termo(float c, int e, Poli p) {
    Poli n = (Poli)malloc(sizeof(struct poli));
    n->coef = c;
    n->expo = e;
    n->prox = p;
    return n;
}

void exibep(Poli P){
    if(P == NULL) return;
    printf("%+.1f", P->coef);

    if(P->expo != 0) printf("*x^%d", P->expo);
    exibep(P->prox);
}


void adt(float c, int e, Poli *P){
    if(*P == NULL || (*P)->expo < e){
        *P = termo(c, e, *P);
    } else if ((*P)->expo == e){
        (*P)->coef += c;
        if((*P)->coef == 0){
            Poli n = *P;
            *P = n->prox;
            free(n);
        }
    } else adt(c, e, &(*P)->prox);
}


Poli soma(Poli P, Poli Q){
    while(P != NULL){
        adt(P->coef, P->expo, &Q);
        P = P->prox;
    }

    return Q;
}