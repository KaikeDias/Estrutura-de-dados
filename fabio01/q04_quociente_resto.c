#include <stdio.h>
#include <math.h>

int main(){
    int n1,n2;

    printf("Escreva dois numeros: ");
    scanf("%i%i", &n1, &n2);

    int quociente = trunc(n1/n2);
    int resto = n1 % n2;

    printf("Quociente: %i", quociente);
    printf("\nResto: %i", resto);
}
