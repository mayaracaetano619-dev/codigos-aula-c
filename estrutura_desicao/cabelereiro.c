#include <stdio.h>

int main () {
    float valorCorte = 0; 
    float valorHidratacao = 0; 
    float valorEscova = 0;
    float valorPintarCabelo = 0; 

    printf ("Qual o valor do corte?");
    scanf("%f", &valorCorte);

    printf("Qual o valor da escova?");
    scanf("%f", &valorEscova);
    
    printf("Qual o valor da hidratacao?");
    scanf("%f", &valorHidratacao);

    printf("Qual o valor para pintar o cabelo?");
    scanf("%f", &valorPintarCabelo);

    float valorTotal = valorCorte + valorEscova + valorHidratacao + valorPintarCabelo;

    if (valorTotal < 240) {
        printf("O valor ficou barato R$ %.2f", valorTotal);
    } else if (valorTotal >= 240 && valorTotal <=380) {
        printf("O valor ficou razoavel R$ %.2f", valorTotal);
    } else if (valorTotal > 380) {
        printf("O valor ficou caro R$ %.2f", valorTotal);
    }
    return 0;
}