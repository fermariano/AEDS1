#include <stdio.h>
#include <stdlib.h>

void preenche(int *vetorX, int *vetorY) {

  for (int i = 0; i < 10; i++) {
    printf("X - Digite o valor: ");
    scanf("%d", (vetorX + i));
  }

  for (int j = 0; j < 10; j++) {
    printf("Y - Digite o valor: ");
    scanf("%d", (vetorY + j));
  }
}

void novoVetor(int *vetorX, int *vetorY, int *vetorNew) {

  int cont = 0;

  for (int i = 0; i < 10; i++) {
    *(vetorNew + 2 * i) = *(vetorY + i);
    *(vetorNew + (2 * i) + 1) = *(vetorX + i);
  }
}

void tela(int *vetorNovo) {
  for (int j = 0; j < 20; j++) {
    printf("%d ", *(vetorNovo + j));
  }
}

int main(void) {

  int *vetorX = (int *)malloc(10 * sizeof(int));
  int *vetorY = (int *)malloc(10 * sizeof(int));
  int *vetorNew = (int *)malloc(20 * sizeof(int));

  preenche(vetorX, vetorY);
  novoVetor(vetorX, vetorY, vetorNew);
  tela(vetorNew);

  free(vetorX);
  free(vetorY);
  free(vetorNew);

  return 0;
}