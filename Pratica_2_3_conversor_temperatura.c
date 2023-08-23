/* 
Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32). */


#include <stdio.h>

int main(void) {
  float temperatura_celcius, temperatura_fahrenheit;
  
  printf("Digite a temperatura em Celsius: \n");
  scanf("%f", &temperatura_celcius);

  temperatura_fahrenheit = (float)(9.0f/5.0f) * temperatura_celcius + 32;
  
  printf("Temperatura em Fahrenheit:\n %.2f F", temperatura_fahrenheit);
  
  
}
