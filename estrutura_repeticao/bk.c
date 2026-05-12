#include <stdio.h>

    int main () {
        printf("Vamos calcular a conta do bk");

        int pessoas = 0;
        float valor = 0;
        float total =0;

        printf("\n Quantas pessoas vao? ");
        scanf("%i", &pessoas);

        for (int i = 0; i < pessoas; i++) {
            printf("\n Qual o  valor do pedido de cada pessoa? ");
            scanf("%f", &valor);

            total = total + valor;
        }

        printf(" e %.2f", valor);

    if (valor >= 6) {
        printf("Parabens, voce foi aprovado");
    } else {
        printf("\n Que pena, voce foi reprovado");
    }


    return 0;
    }