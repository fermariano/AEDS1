#include <stdio.h>
#include <stdlib.h>

void valorInverso(int *vetor, int tamanho) {

  int atual, next, temp;

  for (int i = 0; i < tamanho; i++) {
    for (int j = 0; j < tamanho - 1; j++) {
      atual = *(vetor + j);
      next = *(vetor + j + 1);
      if (atual < next) {
        temp = *(vetor + j + 1);
        *(vetor + j + 1) = *(vetor + j);
        *(vetor + j) = temp;
      }
    }
  }
}

int main(void) {

  int tamanho;
  FILE *entrada = fopen("entrada.txt", "r");

  printf("Tamanho do vetor: ");
  scanf("%d", &tamanho);

  int *vetor = (int *)malloc(tamanho * sizeof(int));

  for (int i = 0; i < tamanho; i++) {
    fscanf(entrada, "%d", (vetor + i));
  }

  valorInverso(vetor, tamanho);

  for (int i = 0; i < tamanho; i++) {
    printf("%d ", *(vetor + i));
  }

  return 0;
}