#include <stdio.h>

int main(void) {

  float idade, a, b, c, d, e, porc1, porc5, cont = 1;

  while (cont <= 8) {
    printf("Digite a idade: ");
    scanf("%f", &idade);

    if (idade <= 15) {
      a++;
    } else if (idade <= 30) {
      b++;
    } else if (idade <= 45) {
      c++;
    } else if (idade <= 60) {
      d++;
    } else {
      e++;
    }
    cont++;
    porc1 = a / 8 * 100;
    porc5 = e / 8 * 100;
  }

  printf("Quantidade de pessoas na faixa 1: %.0f\n", a);
  printf("Quantidade de pessoas na faixa 2: %.0f\n", b);
  printf("Quantidade de pessoas na faixa 3: %.0f\n", c);
  printf("Quantidade de pessoas na faixa 4: %.0f\n", d);
  printf("Quantidade de pessoas na faixa 5: %.0f\n", e);
  printf("Porcentagem de pessoas da faixa 1: %.2f\n", porc1);
  printf("Porcentagem de pessoas da faixa 5: %.2f\n", porc5);

  return 0;
}