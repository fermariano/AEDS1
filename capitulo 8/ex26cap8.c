#include <stdio.h>

int soma(int num) {
  int cont = 1, soma = 0;
  while (num >= cont) {
    soma += cont;
    cont++;
  }
  return soma;
}

int main(void) {

  int num;
  printf("Digite um número: ");
  scanf("%d", &num);

  printf("%d\n", soma(num));

  return 0;
}