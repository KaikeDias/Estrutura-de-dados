#include <stdio.h>

int main(){
    int a,b,c,soma,diferenca; 

    printf("Digite 3 numeros: ");
    scanf("%i%i%i", &a, &b, &c);

    soma = a + b;
    diferenca = b - c;

    printf("Soma dos dois primeiros: %i", soma);
    printf("\nDiferenca dos dois ultimos: %i", diferenca);

    return 0;
}