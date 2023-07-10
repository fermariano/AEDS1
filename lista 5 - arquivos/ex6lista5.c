#include <stdio.h>

int main(void) {

  int num, soma = 0;
  printf("Digite um número: ");
  scanf("%d", &num);

  for (int cont = 1; cont <= num; cont++) {
    if (num % cont == 0) {
      soma += cont;
      printf("%d\n", cont);
    }
  }

  FILE *arqSaida = fopen("saida.txt", "w");

  fprintf(arqSaida, "%d\n", soma);

  fclose(arqSaida);

  return 0;
}