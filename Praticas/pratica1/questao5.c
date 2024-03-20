//Faça um progama em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).

#include <stdio.h>

int main() {
  double gb;
  long bytes;

  printf("Insira o valor em gigabytes: ");
  scanf("%lf", &gb);
  bytes = gb * 1024 * 1024 * 1024;

  printf("%.2f gigabytes equivalem a bagatela de %lld bytes.\n", gb, bytes);

      
return 0;
}