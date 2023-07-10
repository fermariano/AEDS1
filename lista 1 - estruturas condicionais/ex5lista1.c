#include <stdio.h>

int main(void) {

  float diaria, valorp, vtotal80, vtotal50, dif;
  //printf("Digite o valor normal da diária: ");
  scanf("%f", &diaria);

  valorp = diaria - (diaria * 0.25);
  printf("Valor promocional: %.2f\n", valorp);

  vtotal80 = (80 * 0.8) * valorp;
  printf("Promocional com 80%% ocupado: %.2f\n", vtotal80);

  vtotal50 = diaria * 40;
  printf("Normal com 50%% ocupado: %.2f\n", vtotal50);

  dif = vtotal80 - vtotal50;
  printf("Diferença entre os valores: %.2f\n", dif);
  
  return 0;
}