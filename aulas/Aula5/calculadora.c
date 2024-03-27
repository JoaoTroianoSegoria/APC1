#include <stdio.h>
#include <math.h>

//informação: char - 1byte
//informação: int - 4bytes
//informação: float - 4bytes
//informação: double - 8bytes

int main() {

  int numero1;
  int numero2;

  printf("Entre com o primeiro número: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo número: ");
  deu_certo = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  printf("A soma dos números é %i\n", soma);

  int subtracao = numero1 - numero2;
  printf("A subtração dos números é %i\n", subtracao);

  int multiplicacao = numero1 * numero2;
  printf("A multiplicação dos números é %i\n", multiplicacao);

  float divisao = 1.0f * numero1 / numero2; //conversão implicita. Se caso for usar o float, tem que colocar 1.0f para decimal. Porém, usamos essa variável no começo da operação, caso seja feito o contrário, o resultado será 0. A não ser que o divisor seja multiplicado por 1.0f entre PARENTESES: (1.0F * numero2); 

  int resto = numero1 % numero2;
  printf("O resto da divisão é %i\n", resto);

  //numero1 = numero1 + 1;
    printf("O incremento do primeiro número é %i\n", numero1++);
    printf("O incremento do primeiro número é %i\n", ++numero1);

  //numero2 = numero1 - 1;
  printf("O decremento do primeiro é %i\n", numero1--);
  printf("O decremento do primeiro é %i\n", --numero1);


  double raiz_quadrada = sqrt(numero1);
  printf("A raiz quadrada do primeiro número é %f\n", raiz_quadrada);

  double potencia = pow(numero1, 4); //Número 1^4
  printf("A quarta potência do primeiro número é %f\n", potencia);

  double logaritmo2 = log2(numero1);
  printf("O logaritimo do primeiro número na base 2 é %f\n", logaritmo2);

  const double PI = 3.1416;
  
  double seno = sin(numero1 * PI /180);
  printf("O seno do primeiro número é %f\n", seno);
  
  double cosseno = cos(numero1 * PI /180); //angulo em radiano * PI / 180
  printf("O cosseno do primeiro número é %f\n", cosseno);
  
  return 0;
}