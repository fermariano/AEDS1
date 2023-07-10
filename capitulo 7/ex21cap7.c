#include <stdio.h>
#include <stdlib.h>

void preenche(int *matriz, int linha, int coluna) {

  for (int ln = 0; ln < linha; ln++) {
    for (int col = 0; col < coluna; col++) {
      printf("Linha %d - coluna %d: ", ln, col);
      scanf("%d", (matriz + ln * coluna + col));
    }
  }
}

int soma(int *matriz, int linha, int coluna) {

  int soma = 0;

  for (int ln = 0; ln < linha; ln++) {
    for (int col = 0; col < coluna; col++) {
      if ((ln + col) >= linha) {
        printf("%d ", *(matriz + ln * coluna + col));
        printf("\n");
        soma += *(matriz + ln * coluna + col);
      }
    }
  }
  return soma;
}

void printa(int *matriz, int linha, int coluna) {

  for (int ln = 0; ln < linha; ln++) {
    for (int col = 0; col < coluna; col++) {
      printf("%d ", *(matriz + ln * coluna + col));
    }
    printf("\n");
  }
}

int main(void) {

  int linha, coluna;

  printf("Qual o tamanho da matriz? (linha/coluna): ");
  scanf("%d %d", &linha, &coluna);

  int *matriz = (int *)malloc(linha * coluna * sizeof(int));

  preenche(matriz, linha, coluna);
  printa(matriz, linha, coluna);
  printf("\n");
  printf("Soma: %d\n", soma(matriz, linha, coluna));

  return 0;
}