#include <stdio.h>

int main(){
    float preco_fabrica; 

    printf("Preco de fabrica: ");
    scanf("%f", &preco_fabrica);

    float imposto = preco_fabrica * 45/100;
    float percentagem_distribuidor = preco_fabrica * 28/100;
    float preco_final = preco_fabrica + imposto + percentagem_distribuidor;

    printf("O preco final sera: %.2f", preco_final);
}