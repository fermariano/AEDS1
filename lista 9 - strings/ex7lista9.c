#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  char *vetor = (char *)malloc(30 * sizeof(char));

  printf("Digite a frase: ");
  scanf("%[^\n]", vetor);

  for (int i = 0; i < strlen(vetor); i++) {
    printf("%c", toupper(*(vetor + i)));
  }

  printf("\n");

  return 0;
}