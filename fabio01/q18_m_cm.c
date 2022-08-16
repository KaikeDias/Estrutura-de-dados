#include <stdio.h>

int main(){
    int metros,cm; 

    printf("Metros: ");
    scanf("%i", &metros);

    cm = metros * 100;

    printf("Centimetros: %i", cm);
}