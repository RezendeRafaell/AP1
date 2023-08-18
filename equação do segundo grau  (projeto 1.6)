/* Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a). */
# include <stdio.h>
# include <math.h>

int main(void){
  int a;
  int b;
  int c;
  float x1;
  float x2;
  float delta;

  printf("a: ");
  scanf("%d", &a);
  printf("b: ");
  scanf("%d", &b);
  printf("c: ");
  scanf("%d", &c);
  
  delta = (b * b) - (4 * a * c);
  if (delta >= 0){
    x1 = ((-1) * b + sqrt(delta)) / ( 2 * a);
    x2 = ((-1) * b - sqrt(delta)) / (2 * a);
    printf("x1 = %f", x1);
    printf("x2 = %f", x1);
  }
  else{ 
    printf("Não há solucão em R");
  }
  return 0;
}
