#include <stdbool.h>
#include <stdio.h>

int primo(int num) {
  int cont = 1, div = 0;
  while (num >= cont) {
    if (num % cont == 0) {
      div++;
    }
    cont++;
  }
  if (div == 2) {
    return true;
  } else {
    return false;
  }
}

int soma(int x, int y) {
  int soma = 0, cont = 1, div = 0;
  while (x <= y) {
    if (primo(x)) {
      soma += x;
    } else {
      // nada
    }
    x++;
  }
  return soma;
}

int main(void) {

  int x = 1, y = 0;

  while (x != y) {
    printf("Digite dois valores: ");
    scanf("%d %d", &x, &y);

    if (x < y) {
      printf("x = %d | y = %d | soma = %d\n", x, y, soma(x, y));
    } else {
      printf("[ERRO] Valores inválidos.\n");
    }
  }

  return 0;
}