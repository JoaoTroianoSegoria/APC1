/*
4. faça um programa em C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual A 7,6% e PIS/PASEP igual a 1,6% e PIS/PASEP igual a 1,65%
*/

#include <stdio.h>
int main() {
  float preco_inicial = 100.0f;
  float preco_final = 0.0f;
  
  const float ICMS = 0.20f;
  const float COFINS = 0.03f;
  const float PIS_PASEP = 0.0165f;

  float valor_imposto_icms = ICMS * preco_inicial;
  float valor_imposto_cofins = COFINS * preco_inicial;
  float valor_imposto_pis_pasep = PIS_PASEP * preco_inicial;
  
  preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;

  printf("Preço inicial = %f\n", preco_inicial);
  printf("preço ICMS = %f\n", valor_imposto_icms);
  printf("preço COFINS = %f\n", valor_imposto_cofins);
  printf("preço PIS/PASEP = %f\n", valor_imposto_pis_pasep);
  printf("preço final = %f\n", preco_final);
  
  return 0;
}
  