#include <stdio.h>
#include <stdlib.h>

void preenche(int *matriz) {

  FILE *entrada = fopen("entrada.txt", "r");

  for (int ln = 0; ln < 6; ln++) {
    for (int col = 0; col < 4; col++) {

      fscanf(entrada, "%d", matriz + (4 * ln) + col);
    }
  }
  fclose(entrada);
}

int maior30(int *matriz) {
  int maior = 0;

  for (int ln = 0; ln < 6; ln++) {
    for (int col = 0; col < 4; col++) {
      if (*(matriz + (4 * ln) + col) > 30) {
        maior++;
      }
    }
  }
  return maior;
}

void diferente30(int *matriz) {
  int *matrizD = (int *)malloc(4 * 6 * sizeof(int));

  for (int ln = 0; ln < 6; ln++) {
    for (int col = 0; col < 4; col++) {
      if (*(matriz + (4 * ln) + col) != 30) {
        printf("%d ", *(matriz + (4 * ln) + col));
      } else {
        printf("0 ");
      }
    }
    printf("\n");
  }
}

int main(void) {

  int *matriz = (int *)malloc(6 * 4 * sizeof(int));
  preenche(matriz);
  printf("Maiores que 30: %d\n", maior30(matriz));
  diferente30(matriz);

  free(matriz);

  return 0;
}