#include <stdio.h>
#include <math.h>

int main(){
    int x,dias,horas,minutos;

    printf("Valor em minutos: ");
    scanf("%i", &x);

    dias = trunc(x/1440);
    int resto = x % 1440;
    horas = trunc(resto / 60);
    resto = resto % 60;
    minutos = resto;

    printf("%i dia(s) %i hora(s) e %i minuto(s)", dias, horas, minutos);
}