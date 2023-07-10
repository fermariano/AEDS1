#include <stdio.h>

// divida = valor da divida + valor do juros + quant de parcelas + valor da
// parcela

int main(void) {

  float divida, juros = 0, parcela = 1, vparcela, cont = 12, total;

  printf("Digite o valor da dívida: ");
  scanf("%f", &divida);

  vparcela = divida;
  total = divida;

  printf("Valor da dívida: %.2f\n", divida);
  printf("Valor do juros: %.2f\n", juros);
  printf("Número de parcelas: %.0f\n", parcela);
  printf("Valor da parcela: %.2f\n", vparcela);
  printf("\n");

  parcela++;

  while (parcela <= cont) {

    if (parcela == 3) {
      juros = divida * 0.1;
      divida = divida + juros;
      vparcela = divida / parcela;
      printf("Valor da dívida: %.2f\n", divida);
      printf("Valor do juros: %.2f\n", juros);
      printf("Número de parcelas: %.0f\n", parcela);
      printf("Valor da parcela: %.2f\n", vparcela);
      printf("\n");
    } else if (parcela == 6) {
      juros = divida * 0.15;
      divida = divida + juros;
      vparcela = divida / parcela;
      printf("Valor da dívida: %.2f\n", divida);
      printf("Valor do juros: %.2f\n", juros);
      printf("Número de parcelas: %.0f\n", parcela);
      printf("Valor da parcela: %.2f\n", vparcela);
      printf("\n");
    } else if (parcela == 9) {
      juros = divida * 0.20;
      divida = divida + juros;
      vparcela = divida / parcela;
      printf("Valor da dívida: %.2f\n", divida);
      printf("Valor do juros: %.2f\n", juros);
      printf("Número de parcelas: %.0f\n", parcela);
      printf("Valor da parcela: %.2f\n", vparcela);
      printf("\n");
    } else if (parcela == 12) {
      juros = divida * 0.25;
      divida = divida + juros;
      vparcela = divida / parcela;
      printf("Valor da dívida: %.2f\n", divida);
      printf("Valor do juros: %.2f\n", juros);
      printf("Número de parcelas: %.0f\n", parcela);
      printf("Valor da parcela: %.2f\n", vparcela);
      printf("\n");
    }

    parcela++;
  }

  return 0;
}