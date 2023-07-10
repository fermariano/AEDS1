#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  char* vetor = (char*)malloc(30*sizeof(char));

  printf("Digite a palavra: ");
  scanf("%[^\n]", vetor);

  char* matriz = (char*)malloc(strlen(vetor) * strlen(vetor) * sizeof(char));

  for (int ln = 0; ln < strlen(vetor); ln++) {
    for (int col = 0; col < strlen(vetor); col++) {
      if (ln == col) {
        printf("%c ", *(vetor + ln));
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  
  return 0;
}