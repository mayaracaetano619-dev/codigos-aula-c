#include <stdio.h>
#include <locale.h>

void calcularHorasCurso(int semestres, int horasMes) {
    int totalHoras;

    totalHoras = semestres * 5 * horasMes;

    printf("Total de horas do curso: %d\n", totalHoras);
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int semestres = 0;
    int horasMes = 0;

    printf("Qual a quantidade de semestres do curso? ");
    scanf("%d", &semestres);

    printf("Qual a quantidade de horas de aula por mes? ");
    scanf("%d", &horasMes);

    calcularHorasCurso(semestres, horasMes);

    return 0;
}