#include <stdio.h>

int main(void) {

  int num, par = 0, primo = 0, cont = 1, n = 1, teste = 1;

  while (cont <= 10) {

    printf("Digite 10 números: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
      par += num;
    }

    while (n <= num) {
      if (num % n == 0) {
        teste++;
      }
      if (teste == 2) {
        primo += num;
      }
      n++;
    }
    cont++;
  }

  printf("A soma dos números pares é: %d\n", par);
  printf("A soma dos números primos é: %d\n", primo);

  return 0;
}