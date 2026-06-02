#include <stdio.h>
#include <locale.h>

void academias(){
    float vivaMensal = 49.99 * 12;
    float vivaAnual = 39.99 * 12;

    float saudeMensal = 59.99 * 12;
    float saudeAnual = 48.99 * 12;

    float fitnessMensal = 69.99 * 12;
    float fitnessAnual = 58.99 * 12; 

    printf("\n---Viva Saúde---");
    printf("\nMensal: %.2f por ano", vivaMensal);
    printf("\nAnual: %.2f por ano", vivaAnual);

    printf("\n---Saúde em dia---");
    printf("\nMensal: %.2f por ano", saudeMensal);
    printf("\nAnual: %.2f por ano", saudeAnual);

    printf("\n---Fitness Pro---");
    printf("\nMensal: %.2f por ano", fitnessMensal);
    printf("\nAnual: %.2f por ano", fitnessAnual);

     if (vivaAnual < saudeAnual && vivaAnual < fitnessAnual) {
        printf("\nAs opções anuais são mais baratos, mas entre elas a Viva Saude.");
    } else if (saudeAnual < vivaAnual && saudeAnual < fitnessAnual) {
        printf("\nAs opções anuais são mais baratos, mas entre elas a Saude em Dia.");
    } else {
        printf("\nAs opções anuais são mais baratos, mas entre elas a Fitness Pro.");
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    academias(); 

    return 0;
}