#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char *vetor = (char *)malloc(26 * sizeof(char));
  int cont = 0;

  for (char i = 'A'; i < '['; i++) {
    *(vetor + cont) = i;
    cont++;
  }

  for (int j = 0; j < 26; j++) {
    printf("%c ", *(vetor + j));
  }

  return 0;
}