#include <stdio.h>

// Autor: Fernanda Mariano
// Última atualização: 13/03/2023
// Objetivo: Calcular e mostrar quantos minutos se passaram desde o início do dia 

int main(void) {

  int hora, min, tempo;
  //printf("Digite as horas: ");
  scanf("%d %d", &hora, &min);
  tempo = (hora * 60) + min;
  printf("%d\n", tempo);
  
  return 0;
}
