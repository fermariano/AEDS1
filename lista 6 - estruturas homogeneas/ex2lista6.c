#include <stdio.h>
#include <stdlib.h>

void preenche(int *vetor) {
  for (int i = 0; i < 10; i++) {
    printf("Digite o valor: ");
    scanf("%d", (vetor + i));
  }
}

int valorNegativo(int *vetor) {

  int contador = 0;

  for (int j = 0; j < 10; j++) {
    if (*(vetor + j) < 0) {
      vetor[contador] = *(vetor + j);
      contador++;
    }

    vetor = realloc(vetor, contador * sizeof(int));
  }
  return contador;
}

void tela(int *valorNega, int numero) {

  for (int f = 0; f < numero; f++) {
    printf("%d ", *(valorNega + f));
  }
}

int main(void) {

  int *vetor = (int *)malloc(10 * sizeof(int));

  preenche(vetor);
  tela(vetor, valorNegativo(vetor));

  free(vetor);
  
}