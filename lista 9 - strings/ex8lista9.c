#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  char* vetor = (char*)malloc(30*sizeof(char));

  printf("Digite a frase: ");
  scanf("%[^\n]", vetor);

  char* codified = (char*)malloc(strlen(vetor)*sizeof(char));

  for (int i = 0; i < strlen(vetor); i++) {
    if (*(vetor + i) == ' ') {
      *(codified + i) = ' ';
    } else {
      *(codified + i) = (*(vetor + i) + 3);
    }
  }

  printf("%s\n", codified);
  
  return 0;
}