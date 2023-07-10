#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int *matriz = (int *)malloc(16 * (sizeof(int)));
  int soma = 0;

  for (int ln = 0; ln < 4; ln++) {
    for (int col = 0; col < 4; col++) {
      printf("Digite o valor: ");
      scanf("%d", (matriz + (4 * ln) + col));
    }
  }

  soma += *(matriz + (4 * 1) + 0);

  for (int ln2 = 0; ln2 < 2; ln2++) {
    soma += *(matriz + (4 * 2) + ln2);
  }

  for (int ln3 = 0; ln3 < 3; ln3++) {
    soma += *(matriz + (4 * 3) + ln3);
  }

  printf("%d\n", soma);

  for (int i = 0; i < 4; i++) {
    printf("%d ", *(matriz + (4 * i) + i));
  }

  free(matriz);

  return 0;
}