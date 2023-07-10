#include <stdio.h>

float calcula(float antigo, float atual) {
  float porc;
  porc = (atual - antigo) / antigo * 100;
  return porc;
}

int main(void) {

  float antigo, atual;

  printf("Digite o valor antigo e atual do produto: ");
  scanf("%f %f", &antigo, &atual);

  printf("%.2f%%\n", calcula(antigo, atual));

  return 0;
}