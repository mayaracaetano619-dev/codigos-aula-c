#include <stdio.h>

int main() { 
    float valorCorte = 0;
    float valorPintarabelo = 0;
    float valorHidratacao = 0;
    float valorEscova = 0;
    float valorProgressiva = 0;
    float valorBabyLiss = 0;
    int opicao = 0; // 1-sim, 0-não

   printf("Voce vai pintar o cabelo?1-sim, 0-nao");
   scanf("%i", &opicao);

    if (opicao == 1 ){
       printf("Qual o valor para pintar o cabelo?");
       scanf("%f", &valorPintarabelo);
    }

    printf("Voce vai cortar o cabelo?1-sim, 0-nao");
    scanf("%i", &opicao);

    if (opicao == 1 ){
       printf("Qual o valor para cortar o cabelo?");
       scanf("%f", &valorCorte);
    }

    printf("Voce vai fazer hidratacao no cabelo?1-sim, 0-nao");
    scanf("%i", &opicao);

    if (opicao == 1 ){
       printf("Qual o valor da hidratacao?");
       scanf("%f", &valorHidratacao);
    }

    printf("Voce vai fazer escova no cabelo?1-sim, 0-nao");
    scanf("%i", &opicao);

    if (opicao == 1 ){
       printf("Qual o valor da escova?");
       scanf("%f", &valorEscova);
    }

    printf("Quer vai fazer progressiva no cabelo?1-sim, 0-nao");
    scanf("%i", &opicao);

    if (opicao == 1 ){
       printf("Qual o valor da progressiva?");
       scanf("%f", &valorProgressiva);
    }

    printf("Voce vai fazer Babayliss no cabelo?1-sim, 0-nao");
    scanf("%i", &opicao);

    if (opicao == 1 ){
       printf("Qual o valor do Babyliss?");
       scanf("%f", &valorBabyLiss);
    }

    float total = valorBabyLiss + valorCorte + valorEscova + valorHidratacao + valorPintarabelo + valorProgressiva;

    if (total < 240) {
        printf("O valor ficou barato R$ %.2f \n", total);
    } else if (total >= 240 && total <=380) {
        printf("O valor ficou razoavel R$ %.2f \n", total);
    } else if (total > 380) {
        printf("O valor ficou caro R$ %.2f\n", total);
    }
       printf("Voce vai pagar a vista ou parcelado?1-a vista 0-parcelado");
       scanf("%i", &opicao);

    if (opicao == 1 ){
      float desconto5 = 0.05;
      float desconto = total * desconto5;
      float totalPagar = total - desconto;
      printf("O total e R$ %.2f \n", total);
      printf("O total com desconto vai ser de R$ %.2f", totalPagar);
    } else if (opicao == 0 ){
       int parcelas = 0;
      printf("Em quantas vezes?");
      scanf("%i", &parcelas);

      float totalParcelado = total/ parcelas;
      printf("O total e R$ %.2f \n", total);
      printf("O total por mes foi de R$ %.2f", totalParcelado);
    }


    return 0;
}