#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[50];
    char escola[50];
    char senai[50];
    char idade[50];
  
    printf("\nQual o seu nome?");
    scanf(" %[^\n]", nome);

    printf ("\nQual a sua idade?");
    scanf(" %[^\n]", idade);

    printf("\nqual serie voce esta no SESI?");
    scanf(" %[^\n]", escola);

    printf("\nQual curso voce esta fazendo no SENAI?");
    scanf(" %[^\n]", senai);

    printf("---Suas informacoes academicas---");
    printf("\nNome: %s", nome);
    printf("\nIdade: %s", idade);
    printf("\nSerie: %s", escola);
    printf("\nCurso: %s", senai);

    return 0;
}