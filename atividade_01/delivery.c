#include <stdio.h>

// Função para retornar o valor por km
float calcularValorKm(int qtdeKmPercorridos) {
    if (qtdeKmPercorridos <= 100){
        return qtdeKmPercorridos * 0.20;
    }

    if (qtdeKmPercorridos > 100 && qtdeKmPercorridos <= 200) {
        return qtdeKmPercorridos * 0.45;
    }

    if (qtdeKmPercorridos > 200 && qtdeKmPercorridos <= 300) {
        return qtdeKmPercorridos * 0.80;
    }

    if (qtdeKmPercorridos >300) {
        return qtdeKmPercorridos * 1.05;
    }
}

float calcularValorEntrega(int qtdeEntrega) {
    if (qtdeEntrega <= 10) {
        return 7.99;
    }

    if (qtdeEntrega > 10 && qtdeEntrega <= 20){
        return 16.99;
    }

    if (qtdeEntrega > 20 && qtdeEntrega >= 30) {
        return 28.99;
    }

    if (qtdeEntrega > 30){
        return 41.99;
    }
}

int main () {
    // Variáveis 
    int trabalhouSegunda = 0;
    int qtdeEntregaSegunda = 0;
    int kmSegunda = 0;
    float totalEntregaSegunda = 0;
    float totalKmSegunda = 0;

    int trabalhouTerca = 0;
    int qtdeEntregaTerca = 0;
    int kmTerca = 0;
    float totalEntregaTerca = 0;
    float totalKmTerca = 0;

    int trabalhouQuarta = 0;
    int qtdeEntregaQuarta = 0;
    int kmQuarta = 0;
    float totalEntregaQuarta = 0;
    float totalKmQuarta = 0;

    int trabalhouQuinta = 0;
    int qtdeEntregaQuinta = 0;
    int kmQuinta = 0;
    float totalEntregaQuinta = 0;
    float totalKmQuinta = 0;

    int trabalhouSexta = 0;
    int qtdeEntregaSexta = 0;
    int kmSexta = 0;
    float totalEntregaSexta = 0;
    float totalKmSexta = 0;

    int trabalhouSabado = 0;
    int qtdeEntregaSabado = 0;
    int kmSabado = 0;
    float totalEntregaSabado = 0;
    float totalKmSabado = 0;

    int trabalhouDomingo = 0;
    int qtdeEntregaDomingo =0;
    int kmDomingo = 0;
    float totalEntregaDomingo = 0;
    float totalKmDomingo = 0;

    int totalDias =0;

    printf("Sou algoritimo que ajuda o Matias, let's GO!\n");

    printf("Trabalhou segunda-feira? 1(sim) 2(nao)\n");
    scanf("%i", &trabalhouSegunda);
    if (trabalhouSegunda ==1) 
    {
        totalDias++;
        printf("Quantas entregas fez na segunda?\n");
        scanf("%i", &qtdeEntregaSegunda);

        printf("Quantos kilometros percorreu?\n");
        scanf("%i", &kmSegunda);

        totalEntregaSegunda = calcularValorEntrega(qtdeEntregaSegunda);
        totalKmSegunda = calcularValorKm(kmSegunda);
    }
    printf("Trabalhou terca-feira? 1(sim) 2(nao)\n");
    scanf("%i", &trabalhouTerca);
    if (trabalhouTerca==1) 
     {
        totalDias++;
        printf("Quantas entregas fez na terca?\n");
        scanf("%i", &qtdeEntregaTerca);

        printf("Quantos kilometros percorreu?\n");
        scanf("%i", &kmTerca);

        totalEntregaTerca = calcularValorEntrega(qtdeEntregaTerca);
        totalKmTerca = calcularValorKm(kmTerca);
    }
    printf("Trabalhou quarta-feira? 1(sim) 2(nao)\n");
    scanf("%i", &trabalhouQuarta);
    if (trabalhouQuarta ==1) 
     {
        totalDias++;
        printf("Quantas entregas fez na quarta?\n");
        scanf("%i", &qtdeEntregaQuarta);

        printf("Quantos kilometros percorreu?\n");
        scanf("%i", &kmQuarta);

        totalEntregaQuarta = calcularValorEntrega(qtdeEntregaQuarta);
        totalKmQuarta = calcularValorKm(kmQuarta);
    } 
    printf("Trabalhou quinta-feira? 1(sim) 2(nao)\n");
    scanf("%i", &trabalhouQuinta);
    if (trabalhouQuinta ==1) 
     {
        totalDias++;
        printf("Quantas entregas fez na quinta?\n");
        scanf("%i", &qtdeEntregaQuinta);

        printf("Quantos kilometros percorreu?\n");
        scanf("%i", &kmQuinta);

        totalEntregaQuinta = calcularValorEntrega(qtdeEntregaQuinta);
        totalKmQuinta = calcularValorKm(kmQuinta);
    } 
    printf("Trabalhou sexta-feira? 1(sim) 2(nao)\n");
    scanf("%i", &trabalhouSexta);
    if (trabalhouSexta ==1)
     {
        totalDias++;
        printf("Quantas entregas fez na sexta?\n");
        scanf("%i", &qtdeEntregaSexta);

        printf("Quantos kilometros percorreu?\n");
        scanf("%i", &kmSexta);

        totalEntregaSexta = calcularValorEntrega(qtdeEntregaSexta);
        totalKmSexta = calcularValorKm(kmSexta);

    }
    printf("Trabalhou sabado? 1(sim) 2(nao)\n");
    scanf("%i", &trabalhouSabado);
     if (trabalhouSabado ==1) 
     {
        totalDias++;
        printf("Quantas entregas fez na sabado?\n");
        scanf("%i", &qtdeEntregaSabado);

        printf("Quantos kilometros percorreu?\n");
        scanf("%i", &kmSabado);

        totalEntregaSabado = calcularValorEntrega(qtdeEntregaSabado);
        totalKmSabado = calcularValorKm(kmSabado);
    }
    printf("Trabalhou domingo? 1(sim) 2(nao)\n");
    scanf("%i", &trabalhouDomingo);
    if (trabalhouDomingo ==1) 
     {
        totalDias++;
        printf("Quantas entregas fez na domingo?\n");
        scanf("%i", &qtdeEntregaDomingo);

        printf("Quantos kilometros percorreu?\n");
        scanf("%i", &kmDomingo);

        totalEntregaDomingo = calcularValorEntrega(qtdeEntregaDomingo);
        totalKmDomingo = calcularValorKm(kmDomingo);
    }
    // Relatório da semana completa
    printf("\nSegunda-feira: %s", trabalhouSegunda == 1 ? "sim": "nao");
    printf("\nQuantidade entregas: %i", qtdeEntregaSegunda);
    printf("\nKm percorridos: %i", kmSegunda);
    printf("\nValor a receber: R$ %.2f", totalEntregaSegunda + totalKmSegunda);

    printf("\nTerca-feira: %s", trabalhouTerca == 1 ? "sim": "nao");
    printf("\nQuantidade entregas: %i", qtdeEntregaTerca);
    printf("\nKm percorridos: %i", kmTerca);
    printf("\nValor a receber: R$ %.2f", totalEntregaTerca+ totalKmTerca);


    printf("\nQuarta-feira: %s", trabalhouQuarta == 1 ? "sim": "nao");
    printf("\nQuantidade entregas: %i", qtdeEntregaQuarta);
    printf("\nKm percorridos: %i", kmQuarta);
    printf("\nValor a receber: R$ %.2f", totalEntregaQuarta + totalKmQuarta);


    printf("\nQuinta-feira: %s", trabalhouQuinta == 1 ? "sim": "nao");
    printf("\nQuantidade entregas: %i", qtdeEntregaQuinta);
    printf("\nKm percorridos: %i", kmQuinta);
    printf("\nValor a receber: R$ %.2f", totalEntregaQuinta + totalKmQuinta);

    
    printf("\nSexta-feira: %s", trabalhouSexta == 1 ? "sim": "nao");
    printf("\nQuantidade entregas: %i", qtdeEntregaSexta);
    printf("\nKm percorridos: %i", kmSexta);
    printf("\nValor a receber: R$ %.2f", totalEntregaSexta + totalKmSexta);

    
    printf("\nSabado: %s", trabalhouSabado == 1 ? "sim": "nao");
    printf("\nQuantidade entregas: %i", qtdeEntregaSabado);
    printf("\nKm percorridos: %i", kmSabado);
    printf("\nValor a receber: R$ %.2f", totalEntregaSabado + totalKmSabado);

    
    printf("\nDomingo: %s", trabalhouDomingo == 1 ? "sim": "nao");
    printf("\nQuantidade entregas: %i", qtdeEntregaDomingo);
    printf("\nKm percorridos: %i", kmDomingo);
    printf("\nValor a receber: R$ %.2f", totalEntregaDomingo + totalKmDomingo);

    printf("\nTotal Semanal");
    printf("\nTotal de dias trabalhados: %i", totalDias);
    int totalEntregas = qtdeEntregaSegunda + qtdeEntregaTerca + qtdeEntregaQuarta + qtdeEntregaQuinta + qtdeEntregaSexta + qtdeEntregaSabado + qtdeEntregaDomingo;
    printf("\nTotal das entregas %i", totalEntregas);
    int totalKms = totalKmSegunda + totalKmTerca + totalKmQuarta + totalKmQuinta + totalKmSexta + totalKmSabado + totalKmDomingo;
    printf("\nTotal de Kms: %i", totalKms);

    printf("\nMedia entregas por dia %i", totalEntregas / totalDias);

    float totalGeral = totalEntregaDomingo + totalKmDomingo +
    totalEntregaSegunda + totalKmSegunda +
    totalEntregaQuarta + totalKmQuarta +
    totalEntregaQuinta + totalKmQuinta + 
    totalEntregaSexta + totalKmSexta +
    totalEntregaSabado + totalKmSabado;

    printf("\nMedia valor por dia %.2f", totalGeral);

    //Ganhou bonus
    int media = totalEntregas / totalDias;
    if(totalDias == 7 && totalKms >= 200 && media == 26) {
        printf("\n Bonus de R$ 178,99");
    }

    return 0;
}
