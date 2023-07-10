#include <stdio.h>

int main(void) {

  int a = 0, b = 0, c = 0, d = 0, voto = 1, nulo = 0, branco = 0;

  while (voto != 0) {
    //printf("Digite o voto: ");
    scanf("%d", &voto);

    if (voto == 1) {
      a++;
    } else if (voto == 2) {
      b++;
    } else if (voto == 3) {
      c++;
    } else if (voto == 4) {
      d++;
    } else if (voto == 5) {
      nulo++;
    } else if (voto == 6) {
      branco++;
    }
  }

  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  printf("%d\n", d);
  printf("%d\n", nulo);
  printf("%d\n", branco);

  return 0;
}