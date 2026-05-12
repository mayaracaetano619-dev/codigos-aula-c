#include <stdio.h>

int main() {
   
    float precos[3] = {12.0, 15.0, 18.0};

    int escolha;
    float total = 0.0;

    printf("Bem-vindo ao Marmitex Bot!\n");

    while (1) {
        printf("\nCardapio:\n");
        printf("0 - Marmita Pequena (R$ %.2f)\n", precos[0]);
        printf("1 - Marmita Media   (R$ %.2f)\n", precos[1]);
        printf("2 - Marmita Grande  (R$ %.2f)\n", precos[2]);
        printf("Digite o numero da marmita (-1 para sair): ");

        scanf("%d", &escolha);

        if (escolha == -1) {
            break;
        }

        if (escolha >= 0 && escolha < 3) {
            total += precos[escolha];
            printf("Item %d adicionado ao pedido!\n", escolha);
        } else {
            printf("Opcao invalida!\n");
        }
    }

    printf("\nTotal do pedido: R$ %.2f\n", total);
    printf("Obrigado pelo pedido!\n");

    return 0;
}
