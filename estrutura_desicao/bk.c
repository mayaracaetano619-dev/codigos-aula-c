#include <stdio.h>

int main () {
    float valorlancheRodeio = 0; 
    float valorBatataGrande = 0; 
    float valorRefriCoca = 0;
    float valorSobremesa = 0; 

    printf ("Qual o valor do lanche?");
    scanf("%f", &valorlancheRodeio);

    printf("Qual o valor da batata?");
    scanf("%f", &valorBatataGrande);
    
    printf("Qual o valor do refri?");
    scanf("%f", &valorRefriCoca);

    printf("Qual o valor da sobremesa?");
    scanf("%f", &valorSobremesa);

    float valorTotal = valorlancheRodeio + valorBatataGrande + valorRefriCoca + valorSobremesa;

    if (valorTotal < 40) {
        printf("O valor ficou barato R$ %.2f", valorTotal);
    } else if (valorTotal >= 40 && valorTotal <=55) {
        printf("O valor ficou razoavel R$ %.2f", valorTotal);
    } else if (valorTotal > 55) {
        printf("O valor ficou caro R$ %.2f", valorTotal);
    }



    return 0;
}