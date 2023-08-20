/*
7.Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
*/

#include <stdio.h>
#include <math.h>
// usar define?

int main(void)
{
    double angulo_graus, angulo_radianos, valor_seno;
    float altura;
    float distancia;
    float pi = 3.14159265;

    printf("Digite a distância em metros: ");
    scanf("%f", &distancia);
    printf("Digite o ângulo de inclinação em graus (menor que 45 graus): ");
    scanf("%lf", &angulo_graus);
  
    if (angulo_graus < 45 && angulo_graus > 0)
    {
        angulo_graus = 45.0; // teste
        angulo_radianos = (pi * angulo_graus) / 180;
        valor_seno = sin(angulo_radianos);
        // printf("%lf", valor_seno);
        altura = valor_seno * distancia;
        printf("A altura alcançada foi de %.4f metros.", altura);
    }
    else
    {
        printf("Seu avião é um carça!");
    };
    return 0;
}
