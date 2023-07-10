#include <stdio.h>

int analise(int num) {
  if (num > 0) {
    return 1;
  } else {
    return 0;
  }
}

int main(void) {

  int num;

  printf("Digite um número: ");
  scanf("%d", &num);

  printf("%d\n", analise(num));

  return 0;
}