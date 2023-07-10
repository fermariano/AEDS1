#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int n, vogal = 0, cons = 0;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  char *vetor = (char *)malloc(n * sizeof(char));

  printf("Frase: ");
  scanf(" %[^\n]", vetor);

  for (int i = 0; i < n; i++) {
    if (*(vetor + i) == 'a' || *(vetor + i) == 'e' || *(vetor + i) == 'i' || *(vetor + i) == 'o' || *(vetor + i) == 'u') {
      vogal++;
    } else {
      cons++;
    }
  }

  printf("%s\n", vetor);
  printf("Vogais: %d\n", vogal);
  printf("Consoantes: %d\n", cons);

  

  return 0;
}