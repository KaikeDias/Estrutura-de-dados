#include <stdio.h>
#include <math.h>

int main(){
    int ano,dias,qtd,total;
    float preco,gasto;

    printf("A quantos anos voce fuma: ");
    scanf("%i", &ano);

    printf("Quantos cigarros fuma por dia: ");
    scanf("%i", &qtd);

    printf("Preço do cigarro: ");
    scanf("%f", &preco);

    dias = ano * 365;
    total = dias * qtd;
    gasto = floor(total/20) * preco;

    printf("Total gasto: %.2f", gasto);

    return 0;
}