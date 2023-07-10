#include <stdio.h>

int contagem(int num) {
  int contanum = 1;
  if (num > 9) {
    num = num / 10;
    contanum = contanum + contagem(num);
  }
  return contanum;
}

int main(void) {

  int num, result;

  // printf("Digite um número: ");
  scanf("%d", &num);
  result = contagem(num);
  printf("%d\n", result);

  return 0;
}