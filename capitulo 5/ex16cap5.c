#include <stdio.h>

int main(void) {

  int base, altura, area, cont;

  printf("Digite o valor da base: ");
  scanf("%d", &base);

  while (base <= 0) {
    printf("Valor inválido!\n");
    printf("Digite o valor da base: ");
    scanf("%d", &base);
  }

  printf("Digite o valor da altura: \n");
  scanf(" %d", &altura);
  while (altura <= 0) {
    printf("Altura inválida!\n");
    printf("Digite o valor da altura: \n");
    scanf(" %d", &altura);
  }

  area = base * altura / 2;
  printf("A área do triângulo é %d\n", area);

  return 0;
}