#include <math.h>
#include <stdio.h>

// Autor: Fernanda Mariano
// Última atualização: 13/03/2023
// Objetivo: Calcular a hipotenusa de um triângulo;

int main(void) {

  float cat1, cat2, hip;
  //printf("Digite os valores dos catetos: ");
  scanf("%f %f", &cat1, &cat2);
  hip = (cat1 * cat1) + (cat2 * cat2);
  hip = sqrt(hip);
  printf("Hipotenusa: %.2f\n", hip);

  return 0;
}