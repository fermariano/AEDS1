#include <stdio.h>

int main(void) {

  int limite = 1, num, tresnove = 0, dois = 0, cinco = 0;

  while (limite < 10) {
    // printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 9 == 0 || num % 2 == 0 || num % 5 == 0) {
      if (num % 3 == 0 && num % 9 == 0) {
        tresnove++;
      }

      if (num % 2 == 0) {
        dois++;
      }

      if (num % 5 == 0) {
        cinco++;
      }

    } else {
      printf("Número não é divisível pelos valores \n");
    }

    limite++;
  }

  printf("%d Números são divisíveis por 3 e 9\n", tresnove);
  printf("%d Números são divisíveis por 2\n", dois);
  printf("%d Números são divisíveis por 5\n", cinco);

  return 0;
}