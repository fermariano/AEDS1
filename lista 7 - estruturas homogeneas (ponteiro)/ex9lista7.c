#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char temp;
  int n;
  printf("Tamanho: ");
  scanf("%d", &n);

  char *vetor = (char *)malloc(n * sizeof(char));
  FILE *saida = fopen("saida.txt", "w");

  printf("Digite a frase: ");
  scanf(" %[^\n]", vetor);

  for (int i = (n - 1); i >= 0; i--) {
    fprintf(saida, "%c", *(vetor + i));
  }

  fclose(saida);
  saida = fopen("saida.txt", "r");

  while (fscanf(saida, " %c", &temp) != EOF) {
    printf("%c", temp);
  }

  printf("\n%s\n", vetor);

  return 0;
}