//Faça um progama em C que calcule a altura alcançada por um avaião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45º.

#include <stdio.h>
#include <math.h>

int main() {

  float distancia;
  float angulo;
  float altura;

  printf("Insira a distância percorrida pelo avião: ");
  int deu_certo = scanf("%f", &distancia);
  printf("Insira o ângulo de inclinação do avião: ");
  deu_certo = scanf("%f", &angulo);

  const float PI = 3.14159265359;
  
  altura = sin(angulo * PI / 180) * distancia;

  
  printf("o valor da altura alcançada pelo avião é %.0f\n", altura);
  
  return 0;
}