#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char nome[30];
    char imovel [30];
    char veiculo[30];
    int servico = 0;
    int parcelas = 0;
    float valorParcelas = 0;
    float rendaMensal = 0;
    float valorImovel = 0;
    float valorVeiculo = 0;
    float taxaMensal = 0;
    float totalJurosRS = 0;
    float totalJuros = 0;
    float totalFinanca = 0;
    const float jurosVeiculos = 1.5;
    const float jurosImoves = 0.5;



 printf("Olá seja bem vindo, qual seu nome? ");
    scanf("%s", nome);

    printf("Obrigado por escolher nossa loja, %s", nome);

    printf("\n%s, Qual tipo de finaciamento deseja fazer? (Digite 1 - imovél e 2 - veículo)", nome);
    scanf("%i", &servico);

    printf("\nQual a sua renda mensal?");
    scanf("%f", &rendaMensal);

    if (servico == 1) {
        printf("===========Opções de Parcela============");
        printf("\nCasa: 150 até 360 meses");
        printf("\nApartamento: 100 até 300 meses");

        printf("\nQual imovél voce deseja financiar?");
        scanf ("%s", imovel);
    
        printf("\nEm quantas parcelas você deseja financiar?");
        scanf("%i", &parcelas);

    } else {
        printf("===========Opções de Parcelas============");
        printf("\nCaminhão: 100 até 200 meses");
        printf("\nCarros: 6 até 48 meses");
        printf("\nMotos: 3 até 24 meses");

        printf("\nQual veículo voce deseja financiar?");
        scanf ("%s", veiculo);

        printf("\nEm quantas parcelas você deseja financiar?");
        scanf("%i", &parcelas);
    }
    
    float valorEntrada = 0;
    float valorInicial = 0;
    
    switch (servico){
    case 1:
       printf("\nQual o valor do imovél?");
       scanf("%f", &valorInicial);
       printf("\nQual o valor de entrada? (Caso não tenha, digite 0) ");
       scanf("%i", &valorEntrada);

       valorImovel = valorInicial - valorEntrada;
       totalJuros = (parcelas * jurosImoves) / 100;
       totalJurosRS = valorImovel * totalJuros;
       totalFinanca = valorImovel + totalJurosRS;
       valorParcelas = totalFinanca / parcelas;
       break;

    case 2:
    printf("\nQual o valor do veículo?");
    scanf("%f", &valorInicial);
    printf("\nQual o valor de entrada? (Caso não tenha, digite 0) ");
    scanf("%i", &valorEntrada);

       valorVeiculo = valorInicial - valorEntrada;
       totalJuros = (parcelas * jurosVeiculos) / 100;
       totalJurosRS = valorVeiculo * totalJuros;
       totalFinanca = valorVeiculo + totalJurosRS;
       valorParcelas = totalFinanca / parcelas;
       break;
    } 

    float rendaTrinta = rendaMensal * 0.30;

    if (valorParcelas < rendaTrinta) {
        printf("Parabéns! Financiamento aprovado!");
        printf("\nValor da parcela foi de %.2f", valorParcelas);
    } else {
        printf("Financiamento negado");
        printf("\nO valor da parcela foi %.2f", valorParcelas);
    }
    
    printf("\nDesenvolvido por Mayara Caetano");

    return 0;
}