#include <stdio.h>

int main(){
    float base,altura;

    printf("Escreva a base e altura de um triangulo respectivamente: ");
    scanf("%f%f", &base, &altura);

    float area = base * altura / 2;

    printf("Area do triangulo: %.2f", area);
}