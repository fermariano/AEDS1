#include <stdio.h>

// Autor: Fernanda Mariano
// Última atualização: 13/03/2023
// Objetivo: Calcular o décimo termo de uma PA;

int main(void) {

  int razao, ptermo, dtermo;
  //printf("Digite a razão e o primeiro termo da PA: ");
  scanf("%d %d", &razao, &ptermo);
  dtermo = ptermo + 9 * razao;
  printf("%d\n", dtermo);

  return 0;
}