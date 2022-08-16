#include <stdio.h>
#include <math.h>

int main(){
    int metros,m,km;

    printf("Metros: ");
    scanf("%i", &metros);

    km = trunc(metros / 1000);
    m = metros % 1000;

    printf("%i km e %i metros", km, m);
}   
