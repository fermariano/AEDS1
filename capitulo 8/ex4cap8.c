#include <stdio.h>

void converte(int segundo) {
  float horas, minutos;
  horas = segundo / 360.0;
  minutos = segundo / 60.0;

  printf("Horas: %.2f\n", horas);
  printf("Minutos: %.2f\n", minutos);
}

int main(void) {

  int segundo;

  printf("Digite os segundos: ");
  scanf("%d", &segundo);

  converte(segundo);

  return 0;
}