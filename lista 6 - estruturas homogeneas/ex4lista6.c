#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int maior = 0, menor, soma = 0, dia = 0, tamanho = 31;
  int *temperatura = (int *)malloc(tamanho * sizeof(int));
  float media;

  for (int i = 0; i < tamanho; i++) {
    printf("Digite a temperatura: ");
    scanf("%d", (temperatura + i));
  }

  for (int j = 0; j < tamanho; j++) {
    soma += *(temperatura + j);
    if (*(temperatura + j) > maior) {
      maior = *(temperatura + j);
    }
    menor = temperatura[0];
    if (*(temperatura + j) < menor) {
      menor = *(temperatura + j);
    }
  }

  media = (float)soma / tamanho;

  for (int f = 0; f < tamanho; f++) {
    if (*(temperatura + f) > media) {
      dia++;
    }
  }

  printf("Menor e maior temperatura: %d e %d\n", menor, maior);
  printf("Média de temperatura: %.2f\n", media);
  printf("Número de dias nos quais a temperatura foi inferior a temperatura "
         "média: %d\n",
         dia);

  free(temperatura);

  return 0;
}