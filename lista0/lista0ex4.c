#include <stdio.h>

// Autor: Fernanda Mariano
// Última atualização: 13/03/2023
// Objetivo: Calcular a área e perímetro de um círculo; 

int main(void) {

  float raio, perimetro, area;
  printf("Digite o raio do círculo: ");
  scanf("%f", &raio);
  perimetro = 2 * 3.1415 * raio;
  area = 3.14 * (raio * raio);
  printf("Perímetro: %.2f\n", perimetro);
  printf("Área: %.2f\n", area);
  
  return 0;
}