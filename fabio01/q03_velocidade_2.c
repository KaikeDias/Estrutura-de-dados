#include <stdio.h>

int main(){
    float metros,km;

    printf("Velocidade em km/h: ");
    scanf("%f", &km);

    metros = km / 3.6;

    printf("Velocidade em m/s: %.2f", metros);
}