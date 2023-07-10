#include <stdio.h>

int main(void) {

  float num, tamanho, final=1, pos=0, neg=0, zero=0, porcpos, porcneg, porczero;

  printf("Digite o tamanho: ");
  scanf("%f", &tamanho);

  while (tamanho >= final) {
    printf("Digite o número: ");
    scanf("%f", &num);
    final++;

    if (num > 0) {
      pos++;
    } else if (num < 0) {
      neg++;
    } else {
      zero++;
    }
  }

  porcpos = pos / tamanho * 100;
  porcneg = neg / tamanho * 100;
  porczero = zero / tamanho * 100;

  printf("%.0f%% POSITIVOS\n", porcpos);
  printf("%.0f%% NEGATIVOS\n", porcneg);
  printf("%.0f%% ZEROS\n", porczero);
  
  return 0;
}