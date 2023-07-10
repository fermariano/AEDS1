#include <stdio.h>

// Autor: Fernanda Mariano
// Última atualização: 13/03/2023
// Objetivo: Transformar fração em número decimal; 

int main(void) {

  float num, den, dec;
  //printf("Digite o numerador e denominador da fração: ");
  scanf("%f %f", &num, &den);

  dec = num / den;
  printf("%f", dec);
  
  return 0;
}