#include <stdio.h>

int main(){
    float velocidade_m, velocidade_km;

    printf("Velocidade em metros/s: ");
    scanf("%f", &velocidade_m);

    velocidade_km = velocidade_m * 3.6;

    printf("Velocidade em km/h: %.1f", velocidade_km);

    return 0;
}