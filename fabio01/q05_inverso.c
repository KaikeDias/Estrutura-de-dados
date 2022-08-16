#include <stdio.h>
#include <math.h>

int main(){
    char numero[3]; 

    printf("Numero inteiro de 3 digitos: ");
    scanf("%s", &numero);

    char centena = numero[0];
    char dezena = numero[1];
    char unidade = numero[2];

    printf("Inverso: %c%c%c", unidade, dezena, centena);
}