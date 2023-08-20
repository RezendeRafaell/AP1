/*8.Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).*/
#include <stdio.h>

int main()
{
    int segundos, minutos, horas;
    int resto_da_divisao_horas, resto_da_divisao_minutos;

    int tempo;

    printf("Digite o tempo expresso em segundos : ");
    scanf("%d", &tempo);

    horas = tempo / 3600;
    resto_da_divisao_horas = tempo % 3600;
    minutos = resto_da_divisao_horas / 60;
    segundos = resto_da_divisao_horas % 60;

    printf("%d segundos corresponde a %d horas %d minutos e %d segundos", tempo, horas, minutos, segundos);

    return 0;
}
