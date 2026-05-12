#include <stdio.h>

int main () {
    float nota = 0;
    

   printf("Qual a nota da atividade 1?");
    scanf("%f", &nota);
    
    if (nota > 6.9) {
        printf("Parabens, voce foi aprovado");
    } else {
        printf("Que pena, voce foi reprovado");
    }

      return 0;

}