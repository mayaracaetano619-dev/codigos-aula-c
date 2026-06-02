#include <stdio.h>
#include <locale.h>

void conta(int tabuada, int resultado){
    for (int t = 8; t <= 12; t++) {
        resultado = tabuada * t; 
        printf("\n%i x %i = %i", tabuada, t, resultado );
    }
}

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int tabuada = 0;
    int resultado = 0;

    printf("Qual tabuada voce dejesa fazer? ");
    scanf("%i", &tabuada);

    conta(tabuada, resultado);

    return 0;
}
    
