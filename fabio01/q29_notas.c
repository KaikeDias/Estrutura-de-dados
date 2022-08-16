#include <stdio.h>
#include <math.h>

int main(){
    int valor;

    printf("Valor: ");
    scanf("%i", &valor);

    int notas_50 = trunc(valor/50);
    int resto = valor % 50;
    int notas_20 = trunc(resto/20);
    resto = resto % 20;
    int notas_10 = trunc(resto/10);
    resto = resto % 10;
    int notas_5 = trunc(resto/5);
    resto = resto % 5;
    int notas_2 = trunc(resto/2);

    printf("Notas de 50: %i", notas_50);
    printf("\nNotas de 20: %i", notas_20);
    printf("\nNotas de 10: %i", notas_10);
    printf("\nNotas de 5: %i", notas_5);
    printf("\nNotas de 2: %i", notas_2);
}