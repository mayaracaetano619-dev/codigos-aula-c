#include <stdio.h>

void gerarOrcamento(int opcao, int parcelas) {

    float placaVideo = 139.90;
    float caixaSom = 99.90;
    float kitMouseTeclado = 149.90;
    float monitor = 679.90;

    float total = placaVideo + caixaSom + kitMouseTeclado + monitor;
    

    if (opcao == 1) {

        float totalaVista = total * 0.85;
        float totalaVistaDividido6 = totalaVista / 6;

        printf("\nPagamento a vista\n");
        printf("Valor total (com 15%% de desconto): R$ %.2f\n", totalaVista);
        printf("Valor por pessoa (6 pessoas): R$ %.2f\n", totalaVistaDividido6);

    } else {

        if (parcelas >= 1 && parcelas <= 12) {
            float totalParcelado = total / parcelas;
            float totalDividido6 = totalParcelado / 6; 


            printf("\nPagamento parcelado\n");
            printf("Valor total: R$ %.2f\n", total);
            printf("%d vezes de R$ %.2f\n", parcelas, totalParcelado);
            printf("Valor dividido em 6: R$ %.2f\n", totalDividido6);

        }
        else {
            printf("Quantidade de parcelas invalida!\n");
        }

    }
}

int main() {

    int opcao;
    int parcelas = 0;
    float placaVideo = 139.90;
    float caixaSom = 99.90;
    float kitMouseTeclado = 149.90;
    float monitor = 679.90;

    float total = placaVideo + caixaSom + kitMouseTeclado + monitor;

    printf(\nO valor total foi: %.2f", total);

    printf("\n1 - Pagamento a vista (15%% de desconto)\n");
    printf("2 - Pagamento parcelado\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 2) {
        printf("Em quantas parcelas (1 a 12)? ");
        scanf("%d", &parcelas);
    }

    gerarOrcamento(opcao, parcelas);

    return 0;
}