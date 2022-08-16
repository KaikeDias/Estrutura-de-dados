#include <stdio.h>

int main(){
    int horas,minutos;

    printf("Horas: ");
    scanf("%i", &horas);

    minutos = horas * 60;

    printf("%i horas equivalem a %i minutos",horas, minutos);

    return 0;
}