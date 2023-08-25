/******************************************************************************

Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    float peso, altura, imc;
    printf("Altura: ");
    scanf("%f", &altura);
    printf("Peso: ");
    scanf("%f", &peso);
    
    imc = peso / pow(altura, 2.0);
    printf("Imc: %.2f", imc);
    return 0;
}
