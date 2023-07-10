#include <stdio.h>

int main(void) {

  float salariomin, kwatts, valorwat, conta, acrescimo, faturamento, qtdcon = 0;
  int tipo;

  printf("Digite a quantidade de quilowatts gasta: ");
  scanf("%f", &kwatts);

  printf("Digite o valor do salário mínimo: ");
  scanf("%f", &salariomin);

  while (kwatts > 0) {
    printf("Digite o tipo de consumidor: ");
    scanf("%d", &tipo);

    valorwat = salariomin / 8;
    conta = kwatts * valorwat;

    if (tipo == 1) {
      acrescimo = conta + (conta * 0.05);
    } else if (tipo == 2) {
      acrescimo = conta + (conta * 0.1);
    } else if (tipo == 3) {
      acrescimo = conta + (conta * 0.15);
    }

    faturamento += acrescimo;

    if (acrescimo > 500 && acrescimo < 1000) {
      qtdcon++;
    }

    printf("O valor a ser pago pelo consumidor será: %.2f\n", acrescimo);

    printf("Digite a quantidade de quilowatts gasta: ");
    scanf("%f", &kwatts);
  }

  printf("O faturamento da empresa é %.2f\n", faturamento);
  printf("Quantidade de consumidores que pagam entre R$500 e R$1000 é %.0f\n",
         qtdcon);

  return 0;
}