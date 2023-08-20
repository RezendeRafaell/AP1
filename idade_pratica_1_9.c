/*
9.Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int anos, meses, dias;
    int total_de_dias;

    printf("Digite os anos: ");
    scanf("%d", &anos);
    printf("Digite os meses: ");
    scanf("%d", &meses);
    printf("Digite os dias: ");
    scanf("%d", &dias);
    printf("\n");

    total_de_dias = (anos * 365) + (meses * 30) + dias;
    printf("Total de dias: %d ", total_de_dias);
    return 0;
}
