#include <stdio.h>
#include <locale.h>

void calcularArea(int figura, float medida) {
    const float PI = 3.14;
    float area = 0;

    if (figura == 1)
        area = PI * medida * medida;

    else if (figura == 2)
        area = medida * medida;

    if (figura == 1 || figura == 2)
        printf("Área calculada: %.0f\n", area);
    else
        printf("Área não calculada\n");
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int opcao = 0;
    float medida = 0;

    printf("===Calculadora de área===\n");
    printf("1-Circulo\n");
    printf("2-Quadrado\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("Qual a medida? ");
    scanf("%f", &medida);

    calcularArea(opcao, medida);

    return 0;
}