#include <stdio.h>
#include <stdlib.h>

void preenche(int *matriz) {

  for (int alt = 0; alt < 3; alt++) {
    for (int ln = 0; ln < 3; ln++) {
      for (int col = 0; col < 3; col++) {
        printf("Profundidade %d - linha %d - coluna %d: ", alt, ln, col);
        scanf("%d", ((matriz + ln * 3 + col) + (3 * 3 * alt)));
      }
    }
  }
}

void imprime(int *matriz) {

  for (int alt = 0; alt < 3; alt++) {
    for (int ln = 0; ln < 3; ln++) {
      for (int col = 0; col < 3; col++) {
        printf("%d ", (*(matriz + ln * 3 + col) + (3*3*alt)));
      }
      printf("\n");
    }
    printf("Camada: %d\n \n", alt);
  }
}

int main(void) {

  int *matriz = (int *)malloc(5 * 5 * 5 * sizeof(int));
  preenche(matriz);
  imprime(matriz);

  return 0;
}