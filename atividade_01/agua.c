#include <stdio.h>

int main () {
    // Entrada de insformaçoes, variáveis e constantes
    const float valorPorLitro = 0.05;
    const int qtdeLitrosMulta = 400;
    const int qtdeLitrosDesconto = 250;
    const float valorMulta = 150;
    const float valorDesconto = 50; 
    const int periode30 = 30;
    const int faixaEconomica = 250;
    const int faixaExcessiva = 400;

    int qtdePessoasResidencia = 0;
    float valorTotalConta = 0;
    int qtdeLitrosConsumidas = 0;
    int idade = 0;

    // Processamento das insformações
    printf("Ola, vamos calcular sua conta de agua!\n");
    printf("Para iniciar, quantas pessoas moram na residencia?\n");
    scanf("%i", &qtdePessoasResidencia);

    for (int i=0; i<qtdePessoasResidencia; i++) {
        printf("Legal, agora qual idade da pessoa %i: ", i);
        scanf("%i", &idade);

        if (idade <= 10) {
            qtdeLitrosConsumidas += 18;
        } else if (idade > 10 && idade <= 18) {
            qtdeLitrosConsumidas += 30;
        } else if (idade > 18 && idade <= 25) {
            qtdeLitrosConsumidas += 42;
        } else if (idade >25) {
            qtdeLitrosConsumidas += 24;
        }
    }

    // Valor total da conta
    valorTotalConta = valorPorLitro * qtdeLitrosConsumidas * periode30;

    // Saída, relatório
    if (qtdeLitrosConsumidas >= faixaExcessiva) {
        // Faixa Excessiva
        printf("Faixa de consumo: Execessiva\n");
        printf("Total de pessoas na residencia: %i\n", qtdePessoasResidencia);
        printf("Quantiadade consumo em litros: %i\n", qtdeLitrosConsumidas);
        printf("Valor da conta mensal: R$ %.2f\n", valorTotalConta);
        printf("Multa aplicada: R$ %.2f", valorMulta);
    } else if (qtdeLitrosConsumidas <= faixaEconomica) {
        // Faixa Economica 
        printf("Faixa de consumo: Economica\n");
        printf("Total de pessoas na residencia: %i\n", qtdePessoasResidencia);
        printf("Quantiadade consumo em litros: %i \n", qtdeLitrosConsumidas);
        printf("Valor da conta mensal: R$ %.2f\n", valorTotalConta);
        printf("Desconto na proxima conta: R$ %.2f\n", valorDesconto);
    } else {
        // Faixa Normal
        printf("Faixa de consumo: Normal\n");
        printf("Total de pessoas na residencia: %i\n", qtdePessoasResidencia);
        printf("Quantiadade consumo em litros: %i \n", qtdeLitrosConsumidas);
         printf("Valor da conta mensal: R$ %.2f\n", valorTotalConta);
    }


    return 0;
}