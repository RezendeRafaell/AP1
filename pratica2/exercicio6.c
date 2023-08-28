/* Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra). */

#include <stdio.h>
  int main(){
  float valor_compra, depreciacao;
  int ano_fabricacao, ano_depreciacao;

  printf("Digite o valor da compra: R$ ");
  scanf("%f", &valor_compra);
  printf("Digite o ano de fabricação: R$  ");
  scanf("%d", &ano_fabricacao);
  printf("Digite o ano de depreciacao: R$ ");
  scanf("%d", &ano_depreciacao);
  
  
  depreciacao = (ano_depreciacao - ano_fabricacao) * 0.01f * valor_compra;
  
  printf("Valor da depreciacao = R$ %.2f", depreciacao);
  
  return 0;
}
