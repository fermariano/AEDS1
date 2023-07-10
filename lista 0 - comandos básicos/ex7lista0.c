#include <stdio.h>
#include <math.h>

// Autor: Fernanda Mariano
// Última atualização: 13/03/2023
// Objetivo: Calcular o quinto termo de uma PG;

int main(void) {

  int razao, ptermo, qtermo;
  //printf("Digite a razão e o primeiro termo da PG: ");
  scanf("%d %d", &razao, &ptermo);
  qtermo = ptermo * pow(razao, 4);
  printf("%d\n", qtermo);
  
  
  return 0;
}