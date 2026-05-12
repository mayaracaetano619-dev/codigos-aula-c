#include <stdio.h>

    int main () {
        int dia = 0;

        printf("Qual dia da semana? 1->dom, 7->sab");
        scanf("%i", &dia);

        switch (dia){
        case 1:
            printf("Domingou!!!");
            break;
        
        case 2:
            printf("Segundona, bora trabalhar");
            break;

        case 3:
            printf("Terca, vamo pra cima");
            break;
        
        case 4:
            printf("Quartou, que dia chato");
            break;

        case 5:
            printf("Quinta, estamos quase la");
            break;
        
        case 6:
            printf("Sextou, so felicidade");
            break;
    
        case 7: 
            printf("Sabadou, bora pra festa");
            break;

        default: 
            printf("Dia nao encontrado");
            break;
        }


        return 0;
    }