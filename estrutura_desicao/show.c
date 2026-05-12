#include <stdio.h>
#include <stdbool.h>


int main() {
    bool comprouIngressoAntes = false; 
    bool comprouIngressoNaHora = false; 
    int comprou = 0;

    printf("Comprou o ingresso antes? 0-nao 1-sim");
    scanf("%d", &comprou);

    comprouIngressoAntes = comprou;

    printf("Comprou o ingresso na hora? 0-nao 1-sim");
    scanf("%d", &comprou);

    comprouIngressoNaHora = comprou;

        if (comprouIngressoAntes || comprouIngressoNaHora ){
            printf("Vai assistir o show!!");
        } else {
            printf("Nao vai assistir o show");
        }

   
    return 0;
}