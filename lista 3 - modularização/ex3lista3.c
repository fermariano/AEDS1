#include <stdio.h>

int crescente(int num1, int num2, int num3) {
  if (num1 > num2 && num1 > num3) {
    if (num2 > num3) {
      printf("%d %d %d\n", num3, num2, num1);
    } else {
      printf("%d %d %d\n", num2, num3, num1);
    }
  } else if (num2 > num1 && num2 > num3) {
    if (num1 > num3) {
      printf("%d %d %d\n", num3, num1, num2);
    } else {
      printf("%d %d %d\n", num1, num3, num2);
    }
  } else if (num3 > num1 && num3 > num2) {
    if (num1 > num2) {
      printf("%d %d %d\n", num2, num1, num3);
    } else {
      printf("%d %d %d\n", num1, num2, num3);
    }
  } else {
    printf("%d %d %d\n", num3, num1, num2);
  }
  return 0;
}

int main(void) {

  int num1, num2, num3, cont = 1, N;
  // printf("Digite 3 números: ");
  scanf("%d", &N);
  while (N >= cont) {
    scanf("%d %d %d", &num1, &num2, &num3);

    crescente(num1, num2, num3);
    cont++;
  }

  return 0;
}