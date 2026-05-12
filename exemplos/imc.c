/*
Calcula o imc
de uma pessoa 
com valores
fixos nas variáves
e mostre o valor
ao final
*/
#include <stdio.h>

int main () {
    // Declaração de variáveis 
    // Entrada 
    float peso = 67; 
    float altura = 1.65;

    // Processamento
    float imc = peso / (altura * altura);

    // Saída
    printf("O imc e %f",imc);
    return 0;
}