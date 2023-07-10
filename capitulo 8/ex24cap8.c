#include <limits.h>
#include <stdio.h>

float operacao(int num1, int num2, char simbolo) {
  float result;
  if (simbolo == '+') {
    result = num1 + num2;
  } else if (simbolo == '-') {
    result = num1 - num2;
  } else if (simbolo == '*') {
    result = num1 * num2;
  } else if (simbolo == '/') {
    if (num2 != 0) {
      result = (float)num1 / num2;
    } else {
      printf("Valor inválido - denominador 0\n");
      result = INT_MIN;
    }
  } else {
    result = 0;
    printf("Símbolo inválido!\n");
  }
  return result;
}

int main(void) {

  int num1, num2;
  char simbolo;
  float result;

  printf("Digite dois números: ");
  scanf("%d %d", &num1, &num2);
  printf("Digite o tipo de operação: ");
  scanf(" %c", &simbolo);

  printf("O resultado da operação é %.2f\n", operacao(num1, num2, simbolo));

  return 0;
}