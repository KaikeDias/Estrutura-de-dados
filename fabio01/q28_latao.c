#include <stdio.h>

int main(){
    float latao;

    printf("Qtd de latao em kg: ");
    scanf("%f", &latao);

    float cobre = latao * 70/100;
    float zinco = latao * 30/100;

    printf("Serao necessarias %.2f gramas de cobre e %.2f gramas de zinco para criar %.2f kg de latao", cobre, zinco, latao);
}