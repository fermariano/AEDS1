#include <stdio.h>

int main(void) {

  int lidos, fat, n, aux, i;
  printf("Valores lidos: ");
  scanf("%d", &lidos);
  aux = 1;

  while (lidos >= aux) {
    printf("Número: ");
    scanf("%d", &n);
    fat = 1;

    for (i = 1; i <= n; n--) {
      fat = fat * n;
    }
    printf("Valor: %d\n", n);
    printf("Fatorial: %d\n", fat);
    aux++;
  }


return 0;
}