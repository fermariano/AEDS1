#include <math.h>
#include <stdio.h>

int somar(int num) {
  int soma = 0;
  if (num > 0) {
    soma = num % 10 + somar(num / 10);
    num = num / 10;
  }
  return soma;
}

int main(void) {

  int num, cont, soma = 0, aux;
  // printf("Digite o número: ");
  scanf("%d", &num);
  printf("%d\n", somar(num));

  return 0;
}