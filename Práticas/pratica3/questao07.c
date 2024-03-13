#include <stdio.h>
int main() {

  const float IR = 0.25f;
  const float INSS = 0.11f;

  float valor_da_hora_de_trabalho = 200.f;
  float total_de_horas_trabalhadas = 100.f;
  
  float valor_salario_bruto = valor_da_hora_de_trabalho * total_de_horas_trabalhadas;
  float valor_imposto_renda = valor_salario_bruto * IR;
  float valor_imposto_previdencia = valor_salario_bruto * INSS;
  float valor_salario_liquido = valor_salario_bruto - valor_imposto_renda - valor_imposto_previdencia;

  printf("\x1b[34m-------------------------------\n");
  printf("    C O N T R A C H E Q U E    \n");
  printf("-------------------------------\x1b[0m\n");
  printf("Salário Bruto...; \x1b[32m%14.2f\x1b[0m\n", valor_salario_bruto);
  printf("Salário Renda...; \x1b[31m%14.2f\x1b[0m\n", valor_imposto_renda);
  printf("Salário Previ...; \x1b[31m%14.2f\x1b[0m\n", valor_imposto_previdencia);
  printf("Salário Líquido...; \x1b[32m%14.2f\x1b[0m\n", valor_salario_liquido);

  
}