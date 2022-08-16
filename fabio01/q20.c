#include <stdio.h>
#include <math.h>

int main(){
    int x,semanas,dias,horas;

    printf("Valor em horas: ");
    scanf("%i", &x);

    semanas = trunc(x/168);
    int resto = x % 168;
    dias = trunc(resto/24);
    resto = resto % 24;
    horas = resto;

    printf("%i semana(s) %i dia(s) %i hora(s)", semanas, dias, horas);
}