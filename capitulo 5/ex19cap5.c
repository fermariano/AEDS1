#include <stdio.h>

int main(void) {

  int m, n, soma, cont=0;
  printf("Digite um par de números inteiros positivos: ");
  scanf("%d %d", &m, &n);
  soma = n;

  while (n > m) {
    soma += m;
    m++;
  }

  printf("Resultado: %d\n", soma);
  
  return 0;
}