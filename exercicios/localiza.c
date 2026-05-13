#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int km = 0;
    int dias = 0;
    char nome[30];
    char carro [30];
    float totalPorKm = 0;
    float totalPorDia = 0;
    const float VALOR_POR_KM = 1.25;
    const float VALOR_POR_DIA = 99.50;
    const char cupons [3][30] = {
        "MDSC_10", "MDSC_20", "MDSC_30"
    };
    char cupomCliente[30];
    int temCupom = 0;
    float valorDesconto = 0;

    printf("Olá seja bem vindo, qual seu nome? ");
    scanf("%s", nome);

    printf("Obrigado por escolher nossa loja, %s", nome);

    printf("\n%s, qual carro você deseja alugar?", nome);
    scanf("%s", carro);

    printf("\nQuantos KMs com o %s você vai rodar? ", carro);
    scanf("%i", &km);

    printf("\nPara mostrar um relatório detalhado, diga quantos dias vai precisar do carro: ");
    scanf("%i", &dias);

    printf("%s, tem cupom de desconto? 1->sim, 0->não", nome);
    scanf("%i", &temCupom);

    if (temCupom == 1) {
        printf("Digite o código: ");
        scanf("%s", cupomCliente);

        for (int i=0; i < 3; i++){
            if(strcmp(cupomCliente, "MDSC_10") == 0){
               valorDesconto = 10;
            }
            if(strcmp(cupomCliente, "MDSC_20") == 0){
               valorDesconto = 20;
            }
            if(strcmp(cupomCliente, "MDSC_30") == 0){
               valorDesconto =30;
            }
        }
    }

    totalPorKm = (km * VALOR_POR_KM) - valorDesconto;
    totalPorDia = (dias * VALOR_POR_DIA) - valorDesconto;

    printf("\n%s, segue um relatório detalhado", nome);
    printf("\nTotal por KM: R$ %.2f", totalPorKm);
    printf("\nTotal por Dia: R$ %.2f", totalPorDia);

    if (temCupom == 1) {
        printf("\nVocê teve desconto de R$ %.2f", valorDesconto);
    }

    if (totalPorDia < totalPorKm) {
        printf("\nSugerimos usar o plano por dia");
    } else {
        printf("\nSugerimos usar o plano por KM");
    }

    printf("\nTenha uma ótima tarde.");
    printf("\n Desenvolvido por Mayara Caetano");

    return 0;
}