#include <stdio.h>

int divisao(int num, int den) {
  int resultado, cont = 0;
  if (num >= den) {
    num = num - den;
    cont++;
    cont = cont + divisao(num, den);
  }
  return cont;
}

int main(void) {

  int num, den, cont = 0;
  // printf("Digite dois números: ");
  scanf("%d %d", &num, &den);
  printf("%d\n", divisao(num, den));

  return 0;
}