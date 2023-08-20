/*Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes). */
#include <stdio.h>
int main(void){
  float valor_gigabytes;
  float valor_bytes;
  printf("Digite o valor em gigabytes: ");
  scanf("%f", &valor_gigabytes);

  // Ver como escreve as potências
  valor_bytes = valor_gigabytes * 1024 * 1024 * 1024;
  printf("Valor em bytes: ");
  printf("%.2f", valor_bytes);
  
  return 0;
}
