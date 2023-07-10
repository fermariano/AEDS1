#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  char *vetor = (char *)malloc(30 * sizeof(char));
  char *vetor2 = (char *)malloc(30 * sizeof(char));
  int cont = 0;

  printf("Digite a frase: ");
  scanf("%[^\n]", (vetor));

  for (int i = 0; i < strlen(vetor); i++) {

    if (*(vetor + i) == ' ' && *(vetor + i + 1) == ' ') {
      //
    } else {
      *(vetor2 + cont) = *(vetor + i);
      cont++;
    }
  }

  printf("%s\n", (vetor2));

  return 0;
}