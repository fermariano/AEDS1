#include <stdio.h>

int divisivel(int num1, int num2) {
  int cont = num2;
  if (num1 % num2 == 0) {
    return 0;
  } else {
    while (cont <= num1) {
      if (num1 % cont == 0) {
        return cont;
      }
      cont++;
    }
  }
  return cont;
}

int main(void) {

  int num1, num2;
  printf("Digite dois números: ");
  scanf("%d %d", &num1, &num2);

  printf("%d", divisivel(num1, num2));

  return 0;
}