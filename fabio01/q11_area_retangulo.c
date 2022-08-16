#include <stdio.h>

int main(){
    float base,altura;

    printf("Escreva a base e altura de um retangulo respectivamente: ");
    scanf("%f%f", &base, &altura);

    float area = base * altura;

    printf("Area do retangulo: %.2f", area);
}