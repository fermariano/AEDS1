#include <stdio.h>

int main(void) {

  FILE *arqContagem = fopen("contagem.txt", "w");
  for (int cont = 1; cont <= 10; cont++) {
    fprintf(arqContagem, "%d\n", cont);
  }
  fclose(arqContagem);

  return 0;
}