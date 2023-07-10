#include <stdio.h>
#include <stdlib.h>

void preenche(int *matriz) {
  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 5; col++) {
      printf("Linha %d - Coluna %d: ", ln, col);
      scanf("%d", (matriz + (ln * 5) + col));
    }
  }
}

int matrizA(int *matriz) {
  int soma = 0;
  for (int col = 0; col < 5; col++) {
    soma += *(matriz + (4 * 5) + col);
  }
  return soma;
}

int matrizB(int *matriz) {
  int soma = 0;
  for (int ln = 0; ln < 5; ln++) {
    soma += *(matriz + (ln * 5) + 1);
  }
  return soma;
}

int matrizC(int *matriz) {
  int soma = 0;
  for (int ln = 0; ln < 5; ln++) {
    soma += *(matriz + (ln * 5) + ln);
  }
  return soma;
}

int matrizD(int *matriz) {
  int soma = 0, ln = 0;

  for (int col = 4; col >= 0; col--) {
    ln++;
    soma += *(matriz + (ln * 5) + col);
  }

  return soma;
}

int matrizE(int *matriz) {
  int soma = 0;
  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 5; col++) {
      soma += *(matriz + (ln * 5) + col);
    }
  }
  return soma;
}

int main(void) {

  int *matriz = (int *)malloc(5 * 5 * sizeof(int));

  preenche(matriz);
  printf("a) %d\n", matrizA(matriz));
  printf("b) %d\n", matrizB(matriz));
  printf("c) %d\n", matrizC(matriz));
  printf("d) %d\n", matrizD(matriz));
  printf("e) %d\n", matrizE(matriz));

  free(matriz);

  return 0;
}