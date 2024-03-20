//Faça um progama em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere raio um número interio e a constante PI igual a 3,1416.

#include <stdio.h>
int main() {
  
  float raio;
  const float PI = 3.1416; 
  
  printf("Qual o raio da pizza?");
  int deu_certo = scanf("%f", &raio);

  float perimetro = 2 * PI * raio;
  
  printf("O perímetro da pizza é: %.5f\n", perimetro);
  
  return 0;
}