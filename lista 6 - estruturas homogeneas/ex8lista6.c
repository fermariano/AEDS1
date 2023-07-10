#include <stdio.h>
#include <stdlib.h>

void preenche(int *matriz) {
  for (int ln = 0; ln < 10; ln++) {
    for (int col = 0; col < 10; col++) {
      printf("Digite o valor: ");
      scanf("%d", matriz + (10 * ln) + col);
    }
  }
}

void matrizA(int *matriz) {

  int *temp = (int *)malloc(100 * sizeof(int));

  for (int col = 0; col < 10; col++) {
    *(temp + (1 * 10) + col) =
        *(matriz + (1 * 10) + col); // linha 2 para temporario
    *(matriz + (7 * 10) + col) = *(matriz + (1 * 10) + col); // linha 8 para 2
    *(matriz + (7 * 10) + col) = *(temp + (1 * 10) + col); // temporario para 8
  }

  for (int ln = 0; ln < 10; ln++) {
    for (int col = 0; col < 10; col++) {
      printf("%d ", *(matriz + (10 * ln) + col));
    }
    printf("\n");
  }
}

void matrizB(int *matriz) {

  int *temp = (int *)malloc(100 * sizeof(int));

  for (int col = 0; col < 10; col++) {
    *(temp + (1 * 10) + col) =
        *(matriz + (1 * 10) + col); // linha 2 para temporario
    *(matriz + (7 * 10) + col) = *(matriz + (1 * 10) + col); // linha 8 para 2
    *(matriz + (7 * 10) + col) = *(temp + (1 * 10) + col); // temporario para 8
  }

  for (int ln = 0; ln < 10; ln++) {
    for (int col = 0; col < 10; col++) {
      printf("%d ", *(matriz + (10 * ln) + col));
    }
    printf("\n");
  }
}

void matrizC(int *matriz) {

  int troca1, troca2, col = 9;

  for (int i = 0; i < 10; i++) {
    troca1 = *(matriz + (i * 10) + i);
    troca2 = *(matriz + (i * 10) + col);
    *(matriz + (i * 10) + i) = troca2;
    *(matriz + (i * 10) + 9) = troca1;
    col--;
  }

  for (int ln = 0; ln < 10; ln++) {
    for (int col = 0; col < 10; col++) {
      printf("%d ", *(matriz + (10 * ln) + col));
    }
    printf("\n");
  }
}

void matrizD(int *matriz) {

  int *temp = (int *)malloc(100 * sizeof(int));

  for (int col = 0; col < 10; col++) {
    *(temp + (4 * 10) + col) =
        *(matriz + (4 * 10) + col); // linha 5 para temporario

    *(matriz + (4 * 10) + col) =
        *(temp + (1 * 10) + col); // temporario para coluna 10
  }

  for (int ln = 0; ln < 10; ln++) {
    *(matriz + (ln * 10) + 9) =
        *(matriz + (1 * 10) + ln); // coluna 10 para linha 5
  }

  for (int ln = 0; ln < 10; ln++) {
    for (int col = 0; col < 10; col++) {
      printf("%d ", *(matriz + (10 * ln) + col));
    }
    printf("\n");
  }
}

int main(void) {

  int *matriz = (int *)malloc(100 * sizeof(int));

  return 0;
}