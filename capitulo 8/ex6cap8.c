#include <stdio.h>

void tabuada(int num) {
  int cont = 1, multi;

  while (cont <= num) {
    int aux = 1;
    while (aux <= cont) {
      multi = cont * aux;
      printf("%d ", multi);
      aux++;
    }
    printf("\n");
    cont++;
  }
}

int main(void) {

  int num;

  printf("Digite um número (1-9): ");
  scanf("%d", &num);

  if (num >= 1 && num <= 9) {
    tabuada(num);
  } else {
    printf("Valor inválido!\n");
  }

  return 0;
}