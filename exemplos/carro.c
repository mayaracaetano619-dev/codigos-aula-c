/*
Você precisa comprar um carro e 
prentende realizar o pagamento de 
forma parcelada. 
Crie um algoritmo que calcule o valor 
das parcelas descontando o 
valor de entrada de 30%
*/
#include <stdio.h>

int main () {
    //Entrada 
    float valorCarro = 0;
    int qtdeParcelas = 0;
    const float entrada30 = 0.30;

    printf("Qual valor do carro?");
    scanf("%f", &valorCarro);

    printf("Quantas parcelas dejesa pagar?");
    scanf("%i", &qtdeParcelas);

    //Processamento
    float valorAlterado = valorCarro * entrada30;
    float valorPagar = valorCarro - valorAlterado;
    float parcela = valorPagar / qtdeParcelas;
  
    //Saída
    printf("O valor do carro e R$ %f \n", valorCarro);
    printf("O valor de entrada foi R$ %f \n", valorAlterado);
    printf("O valor a pagarR$ %f \n", valorPagar);
    printf("O valor das parcelas será R$ %f", parcela);

    return 0;
}