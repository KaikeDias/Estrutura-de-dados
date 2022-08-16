#include <stdio.h>

int main(){
    int idade_anos, idade_meses, idade_dias1;

    printf("Idade em anos meses e dias: ");
    scanf("%i%i%i", &idade_anos, &idade_meses, &idade_dias1);

    int idade_dias2 = idade_anos*365 + idade_meses*30 + idade_dias1; 

    printf("Idade apenas em dias: %i", idade_dias2);
}