/*
10.Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, unidade, dezena, centena, milhar;
    int resto_divisao_milhar, resto_divisao_centena, laco;
    char continuar;
    continuar = 's';

    while (continuar == 's' || continuar == 'S')
    {
        printf("Escreva o numero que sera decomposto: ");
        scanf(" %d", &a);
        if (a >= -9999 && a <= 9999)
        {
            milhar = a / 1000;
            resto_divisao_milhar = a % 1000;
            centena = resto_divisao_milhar / 100;
            resto_divisao_centena = resto_divisao_milhar % 100;
            dezena = resto_divisao_centena / 10;
            unidade = resto_divisao_centena % 10;

            printf("%d é decomposto em %d unidades, %d dezenas, %d centenas e %d milhares\n", a, unidade, dezena, centena, milhar);

            printf("Para decompor outro número precisone 's', caso contrário pressione qualquer outra tecla: ");
            scanf(" %c", &continuar);
        }
        else
        {
            printf("O número que você digitou é invalido. Tente novamente. ");
            continuar = 's';
        }
    }
    printf("Fim do programa, flws!");
    return 0;
}