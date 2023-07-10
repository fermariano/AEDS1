#include <stdio.h>

int main(void) {

  int num, cont = 0, resultado;

  printf("Digite um número: ");
  scanf("%d", &num);

  while (cont <= 10) {

    resultado = num * cont;
    printf("%d x %d = %d\n", num, cont, resultado);
    cont++;
  }

  return 0;
}