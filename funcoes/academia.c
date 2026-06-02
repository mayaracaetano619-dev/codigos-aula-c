#include <stdio.h>
#include <locale.h>

void academias(){
    float vivaMensal = 49.99 * 12;
    float vivaAnual = 39.99 * 12;

    float saudeMensal = 59.99 * 12;
    float saudeAnual = 48.99 * 12;

    float fitnessMensal = 69.99 * 12;
    float fitnessAnual = 58.99 * 12; 

    printf("---Viva Saúde---");
    printf("Mensal: %.2f por ano", vivaMensal);
    printf("Anual: %.2f por ano", vivaAnual);

    printf("---Saúde em dia---");
    printf("Mensal: %.2f por ano", saudeMensal);
    printf("Anual: %.2f por ano", saudeAnual);

    printf("---Fitness Pro---");
    printf("Mensal: %.2f por ano", fitnessMensal);
    printf("Anual: %.2f por ano", fitnessMensal);



}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    academias(); 

    return 0;
}