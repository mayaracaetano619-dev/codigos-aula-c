/*
Você está trabalhando e gostaria de 
guardar 25% do seusalário todo mês.
O banco está com um investimeto que 
rende 6.8% ao mês de juros e você 
vai usar esse formato de investimento. 
Crie um algoritmo para calcular seu 
investimento
*/
#include <stdio.h>

int main () {
    //Entrada 
    float salario = 0;
    const float juros = 0.068;
    int tempo = 0;
    const float guardar = 0.25;

    printf("Qual o seu salario?");
    scanf("%f", &salario);

    printf("Por quantos meses voce quer guardar?");
    scanf("%i", &tempo);

    //Processamento 
    float jurostotal = juros * tempo;
    float salario25 = salario * guardar;
    float dinheiroTotal = tempo * salario25;
    float totalJurosValor = dinheiroTotal * jurostotal;
    float totalComJuros = totalJurosValor + dinheiroTotal;

    //Saída 
    printf("Total juros em %.2f \n", jurostotal);
    printf("Valor guardado sem juros R$ %.2f \n", dinheiroTotal);
    printf("Meses %i \n", tempo);
    printf("Valor do juros do banco R$ %.2f \n",totalJurosValor);
    printf("Valor guardado com juros R$ %.2f ", totalComJuros);

     return 0;
}