#include <stdio.h>
#include <locale.h>


void mostrarPares(int inicio, int fim) {

    for (int i = inicio; i <= fim; i++) {
        if (i % 2 == 0) {
            printf("O pares:%d\n", i);
        }
    }

}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    float n1 = 0;
    float n2 = 0;

    printf("Qual o primeiro numero? ");
    scanf("%f", &n1);

    printf("Qual o segundo numero? ");
    scanf("%f", &n2);

    mostrarPares(n1, n2);

    return 0;
}