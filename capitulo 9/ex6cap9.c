#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  int cont, teste = 0;

  printf("Digite o tamanho das duas frases: ");
  scanf("%d", &cont);

  char *frase1 = (char *)malloc(cont * sizeof(char));
  char *frase2 = (char *)malloc(cont * sizeof(char));

  printf("Digite a primeira frase: ");
  scanf(" %[^\n]", frase1);

  printf("Digite a segunda frase: ");
  scanf(" %[^\n]", frase2);

  for (int i = 0; i <= strlen(frase1); i++) {
    if (*(frase1 + i) == ' ') {
      printf(" ");
      for (int j = 0; j < strlen(frase1); j++) {
        printf("%c", *(frase2 + teste));
        teste++;
        if (*(frase2 + teste) == ' ') {
          printf(" ");
          break;
        }
      }
    } else {
      printf("%c", *(frase1 + i));
    }
  }

  return 0;
}