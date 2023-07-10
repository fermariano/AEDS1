#include <stdio.h>
#include <stdlib.h>

void preenche(int *vetor, int n) {
  for (int i = 0; i < n; i++) {
    printf("Elemento %d: ", (i + 1));
    scanf("%d", (vetor + i));
  }
}

void ordem(int *vetor, int n) {

  int temp, atual, next;

  for (int i = 0; i < n; i++) {

    for (int j = 0; j < n - 1; j++) {
      atual = *(vetor + j);
      next = *(vetor + j + 1);
      if (atual > next) {
        temp = *(vetor + j + 1);
        *(vetor + j + 1) = *(vetor + j);
        *(vetor + j) = temp;
      }
    }
  }

  for (int f = 0; f < n; f++) {
    printf("%d ", *(vetor + f));
  }
}

int main(void) {

  int n;
  int *vetor = (int *)malloc(n * sizeof(int));

  printf("Quantos elementos? ");
  scanf("%d", &n);

  preenche(vetor, n);
  ordem(vetor, n);

  free(vetor);
  return 0;
}