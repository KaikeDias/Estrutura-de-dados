#include <stdio.h>

int main(){
    int kg,g;

    printf("Valor em Kg: ");
    scanf("%i", &kg);

    g= kg * 1000;

    printf("Valor em gramas: %i", g);
}