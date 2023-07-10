#include <stdio.h>

double fatorial(int numero) {
  double fatorial = 1, cont = 2;
  while (numero >= cont) {
    fatorial = fatorial * numero;
    numero--;
  }
  return fatorial;
}

int main(void) {

  int num, cont = 0;
  float e, fat, efinal;

  printf("Digite um valor inteiro positivo: ");
  scanf("%d", &num);

  while (num > cont) {
    fat = fatorial(num);
    e += 1.0 / fat;
    num--;
  }

  efinal = e + 1;

  printf("%.2f\n", efinal);

  return 0;
}