#include <stdio.h>

float soma(int num) {
  int cont = 2, pa = 3, numerador = 2, denominador = 4;
  float soma = 0.5;
  while (num >= cont) {

    numerador += pa;
    denominador++;
    soma += (float)numerador / denominador;

    pa += 2;
    cont++;
  }
  return soma;
}

int main(void) {

  int num;

  printf("Digite um número inteiro positivo: ");
  scanf("%d", &num);

  printf("%.6f\n", soma(num));

  return 0;
}