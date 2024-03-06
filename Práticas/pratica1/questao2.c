/*
2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base números inteiros e maior que 0
*/

#include <stdio.h>

int main()  {
  int base = 2;
  int altura = 3;
  
  int area = base * altura / 2;

  printf("A area do trinagulo é %i\n",area);
  
  return 0;  
}