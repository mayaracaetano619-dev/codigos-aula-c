#include <stdio.h>

int main() {

    float notas[4];
    float media = 0;
    float total = 0;

    // Coletando informações
    for (int i=0; i < 4; i++) {
        printf("\nQuais nota do aluno? ");
        scanf("%f", &notas[i]);
    }
    // Calculo
    for (int i=0; i < 4; i++) {
        total += notas[i];
    }

    media = total / 4;

    printf("A sua media foi %.2f", media);

    return 0;
}