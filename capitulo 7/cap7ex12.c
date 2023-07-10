#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int somaLinha(int *matriz) {

  int aux, cont = 0;
  int *vetor = (int *)malloc(4 * sizeof(int));
  int linha = 0;

  for (int col = 0; col < 4; col++) {
    for (int ln = 0; ln < 4; ln++) {
      linha += *(matriz + ln * 4 + col);
    }
    *(vetor + col) = linha;
    if (col < 3) {
      linha = 0;
    }
  }

  for (int i = 1; i < 4; i++) {
    if (*(vetor) == *(vetor + i)) {
      cont++;
    }
  }

  if (cont == 3) {
    return linha;
  } else {
    return 0;
  }
}

int somaColuna(int *matriz) {

  int aux, cont = 0;
  int *vetor = (int *)malloc(4 * sizeof(int));
  int coluna = 0;

  for (int ln = 0; ln < 4; ln++) {
    for (int col = 0; col < 4; col++) {
      coluna += *(matriz + ln * 4 + col);
    }
    *(vetor + ln) = coluna;
    if (ln < 3) {
      coluna = 0;
    }
  }

  for (int i = 1; i < 4; i++) {
    if (*(vetor) == *(vetor + i)) {
      cont++;
    }
  }

  if (cont == 3) {
    return coluna;
  } else {
    return 0;
  }
}

int somaDiagonal(int *matriz) {
  int aux, cont = 0;
  int *vetor = (int *)malloc(4 * sizeof(int));
  int diagonal = 0;

  for (int col = 0; col < 4; col++) {
    for (int ln = 0; ln < 4; ln++) {
      if (ln == col) {
        diagonal += *(matriz + ln * 4 + col);
      }
    }
    *(vetor + col) = diagonal;
  }

  return diagonal;
}

int somaDiagonalS(int *matriz) {
  int aux, cont = 0;
  int *vetor = (int *)malloc(4 * sizeof(int));
  int diagonalS = 0;

  for (int ln = 0; ln < 4; ln++) {
    for (int col = 3; col >= 0; col--) {
      if (ln + col == 3) {
        diagonalS += *(matriz + ln * 4 + col);
      }
    }
    *(vetor + ln) = diagonalS;
  }

  return diagonalS;
}

int main(void) {

  int *matriz = (int *)malloc(4 * 4 * sizeof(int));
  FILE *entrada = fopen("entrada.txt", "r");

  // Preenche a matriz
  for (int ln = 0; ln < 4; ln++) {
    for (int col = 0; col < 4; col++) {
      fscanf(entrada, "%d", (matriz + ln * 4 + col));
    }
  }

  // Chama função da linha
  //printf("%d\n", somaLinha(matriz));

  // Chama função coluna
  //printf("%d\n", somaColuna(matriz));

  // Chama função diagonal
  //printf("%d\n", somaDiagonal(matriz));

  // Chama função diagonal secundária
  //printf("%d\n", somaDiagonalS(matriz));

  if (somaLinha(matriz) == somaColuna(matriz) && somaLinha(matriz) == somaDiagonal(matriz) && somaLinha(matriz) == somaDiagonalS(matriz)) {
    printf("Quadrado perfeito!\n");
  } else {
    printf("Quadrado imperfeito!\n");
  }

  return 0;
}