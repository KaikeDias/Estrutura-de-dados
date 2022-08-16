#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    float quociente,resto;

    printf("A e B: ");
    scanf("%i%i", &a, &b);

    quociente = floor(a/b);
    resto = a % b;

    printf("Quociente: %.0f", quociente);
    printf("\nResto: %.0f", resto);

    return 0;
}