#include <stdio.h>

int mdc(int num1, int num2) {
  int cont = 1, divisor, maior = 0;
  while (cont <= num1 && cont <= num2) {
    if (num1 % cont == 0 && num2 % cont == 0) {
      divisor = cont;
      if (cont > maior) {
        maior = cont;
      }
    }

    cont++;
  }
  return maior;
}

int main(void) {

  int num1, num2;
  printf("Digite dois números: ");
  scanf("%d %d", &num1, &num2);
  printf("O MDC desses números é %d\n", mdc(num1, num2));

  return 0;
}