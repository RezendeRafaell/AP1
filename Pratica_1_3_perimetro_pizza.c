/*
3.Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>
int main()
{
    float pi = 3.1416;
    float perimetro;
    float raio;

    printf("Raio da pizza: ");
    scanf("%f", &raio);

    perimetro = 2 * pi * raio;
    printf("Perimetro da pizza = %.4f unidades de comprimeto", perimetro);
    return 0;
}
