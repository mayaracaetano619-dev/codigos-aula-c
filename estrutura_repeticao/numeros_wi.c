#include <stdio.h>

int main() {
    int contador = 100;

    while (contador >= 0) {
        printf("\n numero: %i", contador);
        contador = contador - 1; // contador++;
    }

    return 0;
}