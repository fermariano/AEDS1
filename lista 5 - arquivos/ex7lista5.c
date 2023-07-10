#include <stdio.h>

int main(void) {

  FILE *arqEntrada = fopen("entrada.txt", "r");
  int N, vogal = 0;
  char letra;
  fscanf(arqEntrada, "%d", &N);
  while (fscanf(arqEntrada, " %c", &letra) != EOF) {
    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' ||
        letra == 'U') {
      vogal++;
    }
  }
  printf("%d\n", vogal);
  return 0;
}