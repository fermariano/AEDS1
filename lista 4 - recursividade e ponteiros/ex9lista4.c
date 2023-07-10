#include <stdio.h>

void converteHora(int totals, int *hora, int *min, int *seg) {
  *min = totals / 60;
  if (*min >= 60) {
    *hora = *min / 60;
  } else {
    *hora = 0;
  }
  *seg = totals % 60;
}

int main(void) {
  int segundos, *hora, *min, *seg;
  printf("Digite o total de segundos: ");
  scanf("%d", &segundos);
  converteHora(segundos, hora, min, seg);
  printf("%d:%d:%d", *hora, *min, *seg);
  return 0;
}