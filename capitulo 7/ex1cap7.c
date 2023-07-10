#include <stdio.h>

int main(void) {

  int matriz[2][2], maior = 0;

  for (int i = 0; i < 2; i++) {
    for (int a = 0; a < 2; a++) {
      printf("Digite os valores: ");
      scanf("%d", &matriz[i][a]);
      if (matriz[i][a] > maior) {
        maior = matriz[i][a];
      }
    }
  }

  for (int x = 0; x < 2; x++) {
    for (int z = 0; z < 2; z++) {
      printf("%d\n", (matriz[x][z] * maior));
    }
  }

  printf("O maior valor é %d\n", (maior * maior));

  return 0;
}