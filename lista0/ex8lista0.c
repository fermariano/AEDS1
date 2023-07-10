#include <stdio.h>

// Autor: Fernanda Mariano
// Última atualização: 13/03/2023
// Objetivo: Receber dois números reais e inverter a ordem;

int main(void) {
  
  float a, b, soma;
  //printf("Digite dois números: ");
  scanf("%f %f", &a, &b);

  soma = a + b;
  a = b;
  b = soma - a;

  printf("%f %f", a, b);
  
  return 0;
}