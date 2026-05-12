#include <stdio.h>

int main() {
    int tabuada = 4;
    int i = 0;
    int res = 0;
    printf("Tabuada");

    while (i <= 10){
        res = i * tabuada;
        printf("\n%i x %i = %i", tabuada, i, res);
        i++;
    }
    

    return 0;
}