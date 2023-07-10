#include <stdio.h>

int main(void) {

  int num, cont = 1, a = 1, b = 1, seq;

  printf("Digite um número: ");
  scanf("%d", &num);

  while (cont <= num) {
    seq = a + b;
    a = b;
    b = seq;
    cont++;
    printf("%d ", b);
  }

  return 0;
}