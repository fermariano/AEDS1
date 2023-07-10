#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int maxLn = 3;
  int maxCol = 3;
  int *matriz = (int *)malloc(maxLn * maxCol * sizeof(int));
  int *vetorLn = (int *)malloc(maxLn * sizeof(int));
  int *vetorCol = (int *)malloc(maxCol * sizeof(int));
  int maior = INT_MIN;
  int menor = INT_MAX;

  // Preencher matriz
  for (int ln = 0; ln < maxLn; ln++) {
    for (int col = 0; col < maxCol; col++) {
      printf("Linha: %d - Coluna %d: ", ln, col);
      scanf("%d", (matriz + ln * maxCol + col));
    }
  }

  // Imprimir matriz
  for (int ln = 0; ln < maxLn; ln++) {
    for (int col = 0; col < maxCol; col++) {
      printf("%d ", *(matriz + ln * maxCol + col));
    }
    printf("\n");
  }

  // Maior valor da linha
  for (int ln = 0; ln < maxLn; ln++) {
    maior = INT_MIN;
    for (int col = 0; col < maxCol; col++) {
      if (*(matriz + ln * maxCol + col) > maior) {
        maior = *(matriz + ln * maxCol + col);
        *(vetorLn + ln) = maior;
      }
    }
  }

  // Imprimir maior valor

  for (int i = 0; i < maxLn; i++) {
    printf("Maior valor da linha %d: ", i);
    printf("%d \n", *(vetorLn + i));
  }

  // Menor valor da coluna
  for (int col = 0; col < maxCol; col++) {
    menor = INT_MAX;
    for (int ln = 0; ln < maxLn; ln++) {
      if (menor > *(matriz + ln * maxCol + col)) {
        menor = *(matriz + ln * maxCol + col);
        *(vetorCol + col) = menor;
      }
    }
  }

  // Imprimir menor valor

  for (int i = 0; i < maxCol; i++) {
    printf("Menor valor da coluna %d: ", i);
    printf("%d \n", *(vetorCol + i));
  }

  return 0;
}