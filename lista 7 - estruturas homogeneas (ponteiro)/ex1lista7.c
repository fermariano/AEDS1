#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int n;
  int* vetor = (int*)malloc(n*sizeof(int));

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    printf("Elemento %d: \n", i);
    scanf("%d", (vetor + i));
  }

  for (int j = 0; j < n; j++) {
    printf("Elemento %d: %d\n", j, *(vetor+j));
  }
  
  return 0;
}