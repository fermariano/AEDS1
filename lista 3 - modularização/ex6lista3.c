#include <stdio.h>

float soma(int num) {

  float soma = 1;

  for (int i = 1; i <= num; i++) {
    float fat = 1;
    for (int cont = 1; cont <= i; cont++) {
      fat *= cont;
    }

    soma += 1 / fat;
  }

  return soma;
}

int main(void) {

  float num;

  // printf("Digite um valor inteiro positivo: ");
  scanf("%f", &num);
  printf("%.6f\n", soma(num));

  return 0;
}
