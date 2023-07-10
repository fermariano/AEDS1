#include <stdio.h>

float mediaT(float total, int habitante) {
  float mediaa;
  mediaa = total / habitante;
  return mediaa;
}

int main(void) {

  int hab, filhos, habi = 0;
  float salario = 1, media, total = 0;

  while (salario > 0) {
    // printf("Digite o salário e o número de filhos: ");
    scanf("%f %d", &salario, &filhos);

    if (salario > 0) {
      total += salario;
      habi++;
    }
  }

  printf("%.2f", mediaT(total, habi));

  return 0;
}