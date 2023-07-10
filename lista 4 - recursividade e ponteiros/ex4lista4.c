#include <stdio.h>

int restor(int num, int den, int div) {
  int resto = num - (den * div);
  return resto;
}

int divr(int num, int den) {
  int div = 0, result;
  if (num >= den) {
    num = num - den;
    div++;
    div = div + divr(num, den);
  }
  return div;
}

int main(void) {

  int num, den, div;
  //printf("Digite dois valores: ");
  scanf("%d %d", &num, &den);
  div = divr(num, den);
  printf("%d\n", restor(num, den, div));

  return 0;
}