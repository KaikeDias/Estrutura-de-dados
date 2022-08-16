#include <stdio.h>

int main(){
    float f;

    printf("Temperatura em F: ");
    scanf("%f", &f);

    float c = (5 * f - 160)/9;

    printf("Temperatura em celcius: %.2f", c);
}