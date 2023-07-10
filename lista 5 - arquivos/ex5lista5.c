#include <stdio.h>

int main(void) {

  char texto1[101], texto2[101];
  int linhas = 0;

  FILE *arq1 = fopen("arquivoum.txt", "r");
  FILE *arq2 = fopen("arquivodois.txt", "r");
  FILE *arq3 = fopen("arquivoConc.txt", "w");

  for (int cont = 1; cont <= 100; cont++) {

    while (fscanf(arq1, " %c", &texto1[cont]) != EOF) {
      fprintf(arq3, "%c", texto1[cont]);
    }

    while (fscanf(arq2, " %c", &texto2[cont]) != EOF) {
      fprintf(arq3, "%c", texto2[cont]);
    }
  }

  fclose(arq1);
  fclose(arq2);
  fclose(arq3);

  return 0;
}