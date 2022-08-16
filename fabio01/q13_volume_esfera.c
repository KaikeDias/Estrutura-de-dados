#include <stdio.h>
#include <math.h>

int main(){
    float raio;

    printf("Comprimento: ");
    scanf("%f", &raio);

    float pi = 3.14;

    float volume = 4 * pi * pow(raio,3.0);
    
    printf("Volume: %.2f", volume);
}   