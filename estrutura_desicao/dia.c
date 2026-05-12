#include <stdio.h>

int main () {
    int dia =0;

    printf("Qual dia da semana? (dom->0, sab->6)");
    scanf ("%i", &dia);

     if (dia == 0) {
        printf("Domingo so alegria, de boa na lagoa");
    } else if (dia == 1) {
        printf("Segundou, bora trabalhar");
    } else if (dia == 2) {
        printf("Terca, vamo pra cima");
    } else if (dia == 3) {
        printf("Quartou, que dia chato");
    } else if (dia == 4) {
        printf("Quinta, estamos quase la");
    } else if (dia == 5) {
        printf("Sextou, so felicidade");
    } else if (dia == 6) {
        printf("Sabadou, bora pra festa");
    } else {
        printf("Dia nao encontrado");
    }
    
    
    return 0;
}