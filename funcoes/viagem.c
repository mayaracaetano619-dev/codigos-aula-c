#include <stdio.h>
#include <locale.h>

void Viagem(float distancia, float consumo, float Gasolina, float Etanol) {

    float litros = distancia / consumo;
    float gastoGasolina = litros * Gasolina;
    float gastoEtanol = litros * Etanol;

    printf("\nGasto com gasolina: R$ %.2f\n", gastoGasolina);
    printf("Gasto com etanol: R$ %.2f\n", gastoEtanol);

    if (gastoGasolina < gastoEtanol) {
        printf("A gasolina e a opção mais vantajosa.\n");
    } else { 
        printf("O etanol e a opção mais vantajosa.\n");
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float distancia = 0;
    float consumo = 0;
    float Gasolina = 0;
    float Etanol = 0;

    printf("Qual foi a distância da viagem?");
    scanf("%f", &distancia);

    printf("Qual foi o consumo do carro?");
    scanf("%f", &consumo);

    printf("Qual é o preço da gasolina? ");
    scanf("%f", &Gasolina);

    printf("Qual é o preço do etanol? ");
    scanf("%f", &Etanol);

    Viagem(distancia, consumo, Gasolina, Etanol);

    return 0;
}