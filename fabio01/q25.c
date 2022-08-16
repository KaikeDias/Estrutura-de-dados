#include <stdio.h>
#include <math.h>

int main(){
    int x,km,m;

    printf("Numero: ");
    scanf("%i", &x);

    km = floor(x/1000);
    m = x%1000;

    printf("%i quilometro(s) e %i metro(s)", km, m);

    return 0;
}