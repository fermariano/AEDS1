#include <stdio.h>

// Autor: Fernanda Mariano
// Última atualização: 13/03/2023
// Objetivo: Calcular o valor em reais de cada kilowatt; o valor em reais a ser pago e o novo valor a ser pago com um desconto de 10%.

int main(void) {

  float kw, salmin, vkw, total, desconto, valort;
  printf("Digite o valor do salário mínimo e dos kilowatts gastos: ");
  scanf("%f %f", &salmin, &kw);
  vkw = (salmin / 7) / 100;
  total = kw * vkw;
  desconto = total - (total * 0.1);
  printf("Valor do KW: %.2f\n", vkw);
  printf("Valor a pagar %.2f\n", total);
  printf("Valor com desconto: %.2f\n", desconto);
  
  return 0;
}