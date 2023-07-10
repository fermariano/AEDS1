#include <stdio.h>

int main(void) {

  float base, fat, num, e, n;

  printf("Digite um número inteiro positivo: ");
  scanf("%f", &n);

  for (base = 0; base <= n; base++) {
    
    // Calcular fatorial
    fat = 1;
    for (num = 2; num <= base; num++) {
      fat *= num;
    }
    
    // Somar parcela
    e = e + 1.0 / fat;

  
  }

  printf("%.2f\n", e);

  return 0;
}