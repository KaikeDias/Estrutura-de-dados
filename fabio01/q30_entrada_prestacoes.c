#include <stdio.h>
#include <math.h>

int main(){
    float valor,prestacao,entrada;

    printf("Valor: ");
    scanf("%f", &valor);

    prestacao = trunc(valor/3);
    entrada = valor - prestacao * 2;

    printf("Entrada: %.2f\n", entrada);
    printf("Prestacoes: %.2f", prestacao); 

    return 0;
}