#include <stdio.h>

int main() {
  int Amendoim = 3;
  int Coca_cola = 2;
  int Pão_de_alho = 4;
  int Maminha = 3;
  int Total = Amendoim + Coca_cola + Pão_de_alho + Maminha;


  float V_a = Amendoim * 12.50;
  float V_c = Coca_cola * 9.50;
  float V_p = Pão_de_alho * 8.50;
  float V_m = Maminha * 45.50;
  float V_t = V_a + V_c + V_p + V_m;

  printf("\x1b[32m-------------------------------\n");
  printf("     N O T A   L E G A L       \n");
  printf("-------------------------------\x1b[0m\n");
  printf("ITEM            QTD       VALOR\n");
  printf("%-15s %3i \x1b[34m%11.2f\x1b[0m\n", "Amendoim", Amendoim, V_a);
  printf("%-15s %3i \x1b[34m%11.2f\x1b[0m\n", "Coca cola", Coca_cola, V_c);
  printf("%-16s %3i \x1b[34m%11.2f\x1b[0m\n", "Pão de alho", Pão_de_alho, V_p);
  printf("%-15s %3i \x1b[34m%11.2f\x1b[0m\n", "Maminha", Maminha, V_m);

  //printf("Banan nanica     3        12.00\n");
  //printf("Coca cola        2         7.50\n");
  //printf("pão       3        12.00\n");

  printf("-------------------------------\n");
  //printf("TOTAL:           7        33.00\n");
  printf("%-16s %3i \x1b[34m%10.2f\x1b[0m\n", "Total", Total, V_t);
  return 0;  
}