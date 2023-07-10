#include <stdio.h>
#include <stdlib.h>

int soma(int *vetor, int n) {

  int soma = 0;
  for (int i = 0; i < n; i++) {
    soma += *(vetor + i);
  }
  return soma;
}

int main(void) {

  FILE *entrada = fopen("entrada.txt", "r");
  int cont;

  printf("Quantos valores? ");
  scanf("%d", &cont);

  int *vetor = (int *)malloc(cont * sizeof(int));

  for (int i = 0; i < cont; i++) {
    fscanf(entrada, "%d", (vetor + i));
  }

  printf("Soma: %d\n", soma(vetor, cont));

  fclose(entrada);
  free(vetor);

  return 0;
}