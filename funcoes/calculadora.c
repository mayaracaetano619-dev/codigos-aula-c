#include <stdio.h>
#include <locale.h>

void calcular(int operacao, float num1, float num2) {
  float resultadoSoma = 0;
  float resultadoSubtracao = 0;
  float resultadoMultiplicacao = 0;
  float resultadoDivisao = 0;
  
  

    if (operacao == 1) {
        resultadoSoma =  num1 + num2;
        printf("Resultado: %.0f\n",resultadoSoma);
    }
    else if (operacao == 2) {
        resultadoSubtracao =  num1 - num2;
        printf("Resultado: %.0f\n", resultadoSubtracao);
    }
    else if (operacao == 3) {
        resultadoMultiplicacao = num1 * num2;
        printf("Resultado: %.0f\n", resultadoMultiplicacao);
    }
    else if (operacao == 4) {
        resultadoDivisao = num1 / num2;
            printf("Resultado: %.0f\n", resultadoDivisao);
    }
}

int main() {
    int operacao;
    float num1, num2;
    setlocale(LC_ALL, "pt_BR.UTF-8");


    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha a operacao: ");
    scanf("%d", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    calcular(operacao, num1, num2);

    return 0;
}