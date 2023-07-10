#include <stdio.h>
#include <stdlib.h>

void preenche(int *matrizA, int *matrizB) {

  for (int ln = 0; ln < 4; ln++) {
    for (int col = 0; col < 6; col++) {
      printf("A - Digite o valor: ");
      scanf("%d", matrizA + (6 * ln) + col);
    }
  }
  for (int ln = 0; ln < 4; ln++) {
    for (int col = 0; col < 6; col++) {
      printf("B - Digite o valor: ");
      scanf("%d", matrizB + (6 * ln) + col);
    }
  }
}

int *soma(int *matrizA, int *matrizB, int *matrizSo) {

  for (int ln = 0; ln < 4; ln++) {
    for (int col = 0; col < 6; col++) {
      *(matrizSo + (6 * ln) + col) =
          *(matrizA + (6 * ln) + col) + *(matrizB + (6 * ln) + col);
    }
  }
  return matrizSo;
}

int *subtrair(int *matrizA, int *matrizB, int *matrizSu) {

  for (int ln = 0; ln < 4; ln++) {
    for (int col = 0; col < 6; col++) {
      *(matrizSu + (6 * ln) + col) =
          *(matrizA + (6 * ln) + col) - *(matrizB + (6 * ln) + col);
    }
  }
  return matrizSu;
}

int main(void) {

  int *matrizA = (int *)malloc(24 * sizeof(int));
  int *matrizB = (int *)malloc(24 * sizeof(int));
  int *matrizSo = (int *)malloc(24 * sizeof(int));
  int *matrizSu = (int *)malloc(24 * sizeof(int));

  soma(matrizA, matrizB, matrizSo);
  subtrair(matrizA, matrizB, matrizSu);

  for (int ln = 0; ln < 4; ln++) {
    for (int col = 0; col < 6; col++) {
      printf("%d ", *(matrizSo + (6 * ln) + col));
    }
  }

  for (int ln = 0; ln < 4; ln++) {
    for (int col = 0; col < 6; col++) {
      printf("%d ", *(matrizSu + (6 * ln) + col));
    }
  }
  return 0;
}