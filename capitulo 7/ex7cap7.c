#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void preenche(int *matriz, int maxln, int maxcol) {

  FILE *entrada = fopen("entrada.txt", "r");

  for (int ln = 0; ln < maxln; ln++) {
    for (int col = 0; col < maxcol; col++) {
      fscanf(entrada, " %d", matriz + maxcol * ln + col);
    }
  }

  fclose(entrada);
}

bool maior(int *matriz, int maxln, int maxcol, int valor, int coluna) {

  bool achou = false;

  for (int ln = 0; ln < maxln; ln++) {
    if (*(matriz + ln * maxcol + coluna) > valor) {
      achou = true;
    }
  }
  return !achou;
}

void exibir(int *matriz, int maxln, int maxcol) {
  for (int ln = 0; ln < maxln; ln++) {
    for (int col = 0; col < maxcol; col++) {
      printf("%d ", *(matriz + maxcol * ln + col));
    }
    printf("\n");
  }
}

void pontoSela(int *matriz, int maxln, int maxcol) {
  int menor, coluna;

  for (int ln = 0; ln < maxln; ln++) {
    menor = *(matriz + ln * maxcol);
    for (int col = 0; col < maxcol; col++) {
      if (*(matriz + ln * maxcol + col) < menor) {
        menor = *(matriz + ln * maxcol + col);
        coluna = col;
      }
    }
    if (maior(matriz, maxln, maxcol, menor, coluna)) {
      printf("Ponto de sela %d, posição (%d,%d)\n", menor, ln, coluna);
    }
  }
}

int main(void) {

  int maxln, maxcol;

  printf("Qual o tamanho da matriz? ");
  scanf("%d %d", &maxln, &maxcol);

  int *matriz = (int *)malloc(maxln * maxcol * sizeof(int));

  preenche(matriz, maxln, maxcol);
  exibir(matriz, maxln, maxcol);
  pontoSela(matriz, maxln, maxcol);
  free(matriz);

  return 0;
}