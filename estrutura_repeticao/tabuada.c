#include <stdio.h>

int main () {
    int tabuada = 0;
    int resultado = 0;

    printf("Qual tabuada voce dejesa fazer? ");
    scanf("%i", &tabuada);

     for (int t = 0; t <= 10; t++) {
        resultado = tabuada * t; 
        printf("\n%i x %i = %i", tabuada, t, resultado );
    }

    return 0;
}