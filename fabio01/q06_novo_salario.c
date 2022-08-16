#include <stdio.h>

int main(){
    double salario;
    
    printf("Salario: ");
    scanf("%d", &salario);
    
    double novo_salario = salario + salario * 0.25;

    printf("Novo salario: %.2d", novo_salario);
}