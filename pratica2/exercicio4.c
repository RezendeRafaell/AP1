/*
Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).

*/

#include<stdio.h>
 int main(){
  float largura, comprimento, area;
  printf("Largura: ");
  scanf("%f", &largura);
  printf("Compriemento");
  scanf("%f", &comprimento);

  area = (largura * comprimento)/10000.0f;
  printf("Area em hectares: %.2f hectares", area);
  return 0;
 }
