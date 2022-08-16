#include <stdio.h>

int main(){
    int n1,n2,n3; 

    printf("Digite 3 numeros: ");
    scanf("%i%i%i", &n1, &n2, &n3);

    int soma = n1 + n2 + n3;
    float media = soma / 3;

    printf("Media: %.2f", media);
}