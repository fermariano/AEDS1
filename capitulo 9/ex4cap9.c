#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  int tamanho, cont = -1, cont2 = 0, teste;
  char aux;

  printf("Qual o tamanho da frase? ");
  scanf("%d", &tamanho);

  char *frase = (char *)malloc(tamanho * sizeof(char));
  int *contador = (int *)malloc(tamanho * sizeof(int));
  char *auxiliar = (char *)malloc(tamanho * sizeof(char));

  printf("Digite a frase: ");
  scanf(" %[^\n]", frase);

  

  return 0;
}