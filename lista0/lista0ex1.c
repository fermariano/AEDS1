#include <stdio.h>

// Autor: Fernanda Mariano
// Última atualização: 13/03/2023
// Objetivo: Receber um número de 3 dígitos e mostrar os algarismos invertidos.

int main(void) {

  // Declarar variável
  float num, num1, num2, num3, numD;

  // Receber e guardar valor
  printf("Digite um número inteiro de 3 dígitos: ");
  scanf("%f", &num);

  // Mostrar numero invertido
  numD = num / 10;
  num1 = (numD - (int) numD) * 10;
  numD = (num % 100) / 10;
  num2 = (int) numD;
  numD = (num2 - (int) num2) * 10; 
  num3 = (int) numD;

  printf("(%.0f%.0f%.0f\n", num1, num2, num3);
  
  return 0;
}