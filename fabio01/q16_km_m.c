#include <stdio.h>

int main(){
    int km,m;

    printf("Valor em Km: ");
    scanf("%i", &km);

    m = km * 1000;

    printf("Valor em metros: %i", m);
}