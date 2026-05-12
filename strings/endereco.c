#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[10] = "Mayara";
    char logradouro[30] = "Rua Helio David Formaggio";
    char bairro[20] = "Dois Corregos";
    char cidade[11] = "Piracicaba";
    char uf[3] = "SP";

    printf ("---Minhas informacoes residenciais---");
    printf ("\nLogradouro: %s", logradouro);
    printf ("\nBairro: %s", bairro);
    printf ("\nCidade: %s", cidade);
    printf ("\nUF: %s", uf);

    return 0;
}