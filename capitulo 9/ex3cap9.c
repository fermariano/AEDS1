#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  int tamanho, space = 0;

  printf("Qual o tamanho da frase? ");
  scanf("%d", &tamanho);

  char *frase = (char *)malloc(tamanho * sizeof(char));

  printf("Digite a frase: ");
  scanf(" %[^\n]", frase);

  for (int i = 0; i < strlen(frase); i++) {
    if (frase[i] == ' ') {
      space++;
    }
  }

  printf("Quantidade de espaços: %d\n", space);

  return 0;
}