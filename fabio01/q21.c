#include <stdio.h>
#include <math.h>

int main(){
    int x, meses, anos;

    printf("Valor em meses: ");
    scanf("%i", &x);

    anos = trunc(x/12);
    meses = x % 12;

    printf("%i ano(s) e %i mese(s)", anos, meses);
}