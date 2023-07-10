#include <stdio.h>
#include <stdlib.h>

void preenche(int* matriz) {

  FILE* entrada = fopen("entrada.txt", "r");
  for (int ln = 0; ln < 3; ln++) {
    for (int col = 0; col < 6; col++) {
      fscanf(entrada, "%d", (matriz + ln * 6 + col));
    }
  }
}

int main(void) {

  // int* vetor = (int*)malloc(18 * sizeof(int));
  int* matriz = (int*)malloc(3*6*sizeof(int));
  preenche(matriz);

  for (int ln = 0; ln < 3; ln++) {
    for (int col = 0; col < 6; col++) {
      printf("%d ", *(matriz + ln * 6 + col));
    }
    printf("\n");
  }
  
  
  return 0;
}