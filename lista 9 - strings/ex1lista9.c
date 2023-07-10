#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  char *vetor = (char *)malloc(30 * sizeof(char));
  char *inicial = (char *)malloc(10 * sizeof(char));
  int cont = 1;

  printf("Digite o nome: ");
  scanf("%[^\n]", (vetor));

  *(inicial) = *(vetor);

  for (int i = 0; i < strlen(vetor); i++) {
    if (*(vetor + i) == ' ') {
      if (*(vetor + i + 1) == 'd') {
        i = i + 2;
      }

      *(inicial + cont) = *(vetor + i + 1);

      cont++;
    }
  }

  for (int j = 0; j <= cont; j++) {

    printf("%c ", toupper(*(inicial + j)));
  }
  printf("\n");

  return 0;
}