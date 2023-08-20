/*
10.Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, unidade, dezena, centena, milhar;
    int resto_divisao_milhar, resto_divisao_centena;

    printf("Escreva o numero que será decomposto: ");
    scanf("%d", &a);

    milhar = a / 1000;
    resto_divisao_milhar = a % 1000;
    centena = resto_divisao_milhar / 100;
    resto_divisao_centena = resto_divisao_milhar % 100;
    dezena = resto_divisao_centena / 10;
    unidade = resto_divisao_centena % 10;

    printf("%d é decomposto em %d unidades, %d dezenas, %d centenas e %d milhares", a, unidade, dezena, centena, milhar);

    return 0;
}
