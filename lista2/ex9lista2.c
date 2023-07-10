#include <stdio.h>

int main(void) {

  float compra = 1, venda, lucro, lucrototal = 0, compratotal = 0,
        vendatotal = 0, qtdlucro1 = 0, qtdlucro2 = 0, qtdlucro3 = 0,
        lucroreal = 0;

  while (compra > 0) {
    // printf("Digite o valor de compra e venda: ");
    scanf("%f %f", &compra, &venda);
    lucro = (venda / compra - 1) * 100;

    if (lucro < 10) {
      qtdlucro1++;
    } else if (lucro >= 10 && lucro <= 20) {
      qtdlucro2++;
    } else if (lucro > 20) {
      qtdlucro3++;
    }

    compratotal += compra;
    vendatotal += venda;
    lucrototal = vendatotal - compratotal;
  }

  printf("%.0f\n", qtdlucro1);
  printf("%.0f\n", qtdlucro2);
  printf("%.0f\n", qtdlucro3);
  printf("%.2f\n", compratotal);
  printf("%.2f\n", vendatotal);
  printf("%.2f\n", lucrototal);

  return 0;
}