#include <stdio.h>

int main(void) {

  float ingresso = 120, lucro, valor = 5.0, total;

  while (valor > 0) {
    total = ingresso * valor;
    lucro = total - 200;

    printf("Valor do ingresso: %.2f\n", valor);
    printf("Lucro máximo esperado: %.2f\n", lucro);
    printf("Quantidade de ingressos vendidos: %.2f\n", ingresso);

    valor = valor - 0.5;
    ingresso = ingresso + 26;
  }

  return 0;
}