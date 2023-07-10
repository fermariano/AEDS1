#include <stdio.h>
#include <math.h>

// Autor: Fernanda Mariano
// Última atualização: 13/03/2023
// Objetivo: Calcular a área, perímetro e diagonal de um retângulo; 

int main(void) {

  float base, altura, perimetro, area, diagonal;
  printf("Digite o valor da base e altura do retângulo: ");
  scanf("%f %f", &base, &altura);

  perimetro = 2*base + 2*altura; 
  area = base * altura; 
  diagonal = sqrt(base * base + altura * altura);
  printf("Perímetro: %.2f\n", perimetro);
  printf("Área: %.2f\n", area);
  printf("Diagonal: %.2f\n", diagonal);
  
  return 0;
}