#include <stdio.h>
#include <stdlib.h>

void preenche(int *matriz) {

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 4; col++) {
      printf("Linha %d - coluna %d: ", ln, col);
      scanf("%d", (matriz + ln * 4 + col));
    }
  }
}

void organiza(int *matriz) {

  int temp, atual, next, cont = 0;

  int *vetorAux = (int *)malloc(20 * sizeof(int));

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 4; col++) {
      *(vetorAux + cont) = *(matriz + ln * 4 + col);
      cont++;
    }
  }

  for (int i = 0; i < 20; i++) {

    for (int j = 0; j < 20 - 1; j++) {
      atual = *(vetorAux + j);
      next = *(vetorAux + j + 1);
      if (atual > next) {
        temp = *(vetorAux + j + 1);
        *(vetorAux + j + 1) = *(vetorAux + j);
        *(vetorAux + j) = temp;
      }
    }
  }

  cont = 0;
  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 4; col++) {
      *(matriz + ln * 4 + col) = *(vetorAux + cont);
      cont++;
    }
  }
}

void printar(int *matriz) {

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 4; col++) {
      printf("%d ", *(matriz + ln * 4 + col));
    }
    printf("\n");
  }
}

int main(void) {

  int *matriz = (int *)malloc(5 * 4 * sizeof(int));

  preenche(matriz);
  organiza(matriz);
  printar(matriz);

  return 0;
}