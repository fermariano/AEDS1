#include <stdio.h>
#include <stdlib.h>

void preenche(int *vetor, int n) {
  for (int i = 0; i < n; i++) {
    printf("Número %d: ", (i + 1));
    scanf("%d", (vetor + i));
  }
}

int maior (int*vetor, int n) {

  int maior = *(vetor);
  
  for (int i = 0; i < n; i++) {
    if (*(vetor + i) > maior) {
      maior = *(vetor + i);
    }
  }
  return maior;
}

int main(void) {
  int n;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  int *vetor = (int *)malloc(n * sizeof(int));
  preenche(vetor, n);
  printf("Maior valor: %d\n", maior(vetor, n));

  return 0;
}