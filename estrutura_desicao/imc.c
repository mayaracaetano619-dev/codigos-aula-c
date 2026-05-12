#include <stdio.h>

int main () {
    //Entrada 
    float peso = 0; 
    float altura = 0;

    printf("Quanto voce pesa?");
    scanf("%f", &peso);
    printf("Qual a sua altura?");
    scanf("%f", &altura);


    //Processamento
    float imc = peso / (altura * altura);


    //Saída
    if (imc <= 18.5) {
        printf("Voce esta na faixa de baixo peso");
    } else if (imc >= 18.6 && imc <= 24.9){
        printf("Voce esta na faixa normal");
    } else if (imc >= 25 && imc <= 29.9){
        printf("Voce esta na faixa do sobrepeso");
    } else if (imc >= 30){
        printf("Voce esta na faixa da obesidade");
    }
    return 0;
}