#include <stdio.h>

int main(void) {

  int num, tamanho, final = 0, pos = 0, neg = 0, zero = 0;

  // printf("Digite o tamanho: ");
  scanf("%d", &tamanho);

  while (tamanho > final) {
    //printf("Digite o número: ");
    scanf("%d", &num);

    if (num >= 0) {
      pos++;
    }

    if (num <= 0) {
      neg++;
    }

    if (num == 0) {
      zero++;
    }
    final++;
  }

  printf("%d POSITIVOS\n", pos);
  printf("%d NEGATIVOS\n", neg);
  printf("%d ZEROS\n", zero);

  return 0;
}