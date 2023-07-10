#include <stdio.h>

int calcula(int a, int b, int c) {
  int soma = 0;
  while (b <= c) {
    if (b % a == 0) {
      soma += b;
    }
    b++;
  }
  return soma;
}

int main(void) {

  int a, b, c;
  printf("Digite três números: ");
  scanf("%d %d %d", &a, &b, &c);

  if (a > 1) {
    printf("%d\n", calcula(a, b, c));
  } else {
    printf("Valor de A inválido!\n");
  }

  return 0;
}