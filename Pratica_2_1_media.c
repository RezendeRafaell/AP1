#include <stdio.h>
#include <math.h>

int main() {
  int a;
  int b;
  int c;
  float media;
  printf("Digite tres números inteiros \n");
  printf("a: ");
  scanf("%d", &a);
  printf("b: ");
  scanf("%d", &b);
  printf("c: ");
  scanf("%d", &c);
  // Tive que colocar float antes pra "transformar essa soma", pesquisei no stack, mas não entendi muito bem. (Perguntar ao professor)
  media = (float)(a + b + c) / 3;
  printf("Média = %.4f ", media);
}
