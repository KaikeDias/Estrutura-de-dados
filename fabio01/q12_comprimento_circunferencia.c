#include <stdio.h>

int main(){
    float raio;

    printf("Comprimento: ");
    scanf("%f", &raio);

    float pi = 3.14;

    float comprimento = 2 * pi * raio;

    printf("Comprimento: %.2f", comprimento);
}

