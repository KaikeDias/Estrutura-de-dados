#include <stdio.h>

int main(){
    int a,b,soma,sub;
    float div;

    printf("Dois numeros: ");
    scanf("%i%i", &a, &b);

    soma = a + b;
    sub = a - b;
    div = soma / sub;

    printf("A divisao da soma pela subtracao: %.1f", div);

    return 0;
}