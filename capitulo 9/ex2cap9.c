#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  int tamanho, consoante = 0;

  printf("Qual o tamanho da frase? ");
  scanf("%d", &tamanho);

  char *frase = (char *)malloc(tamanho * sizeof(char));

  printf("Digite a frase: ");
  scanf(" %[^\n]", frase);

  for (int i = 0; i < strlen(frase); i++) {
    if (frase[i] == 'a' || frase[i] == 'A' || frase[i] == 'e' ||
        frase[i] == 'E' || frase[i] == 'i' || frase[i] == 'I' ||
        frase[i] == 'o' || frase[i] == 'O' || frase[i] == 'u' ||
        frase[i] == 'U') {
      // empty
    } else {
      consoante++;
    }
  }

  printf("Frase: %s\nConsoantes: %d\n", frase, consoante);

  return 0;
}