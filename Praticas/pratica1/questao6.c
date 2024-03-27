//Faça um progma em C que calcule as raízes de uma equação do 2º grau através da fórmula de Bhaskara (-b+/- raiz_quadrada(b²-4ac)/2a).

#include <stdio.h>
#include <math.h>

int main() {

  int a;
  int b;
  int c;

  printf("Escreva o valor de A: ");
  int deu_certo = scanf("%i", &a);
  printf("Escreva o valor de B: ");
  deu_certo = scanf("%i", &b);
  printf("Escreva o valor de C: ");
  deu_certo = scanf("%i", &c);
  
  float delta = (b * b) - (4 * a * c);
  float bhaskarax1 = (-b + sqrt(delta)) / (2 * a);
  float bhaskarax2 = (-b - sqrt(delta)) / (2 * a);

  printf("O valor do delta é %f\n", delta);
  printf("As raizes da equação são %f e %f\n", bhaskarax1, bhaskarax2);
  
  
  return 0;

}