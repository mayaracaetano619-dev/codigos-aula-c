#include <stdio.h>

int main() {
    int contador = 0;

    while (contador <= 1000) {
        if (contador % 2 != 0){
        printf("\n numeros impares: %i",contador);
        }
        contador++;
    }

    return 0;
}