#include <stdio.h>

int calculo(int hora, int min, int seg) {
  int segundos;
  segundos = (hora * 3600) + (min * 60) + seg;
  return segundos;
}

int main(void) {

  int hora, min, seg;
  printf("Digite os valores: ");
  scanf("%d %d %d", &hora, &min, &seg);

  printf("%d\n", calculo(hora, min, seg));

  return 0;
}