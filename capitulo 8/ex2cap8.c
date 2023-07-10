#include <stdio.h>

int soma(int num1, int num2) {

  int soman = 0;
  if (num1 > num2) {
    while (num2 <= num1) {
      soman += num2;
      num2++;
    }
  } else if (num2 > num1) {
    while (num2 >= num1) {
      soman += num1;
      num1++;
    }
  } else {
    return 0;
  }
  return soman;
}

int main(void) {

  int num1, num2;

  printf("Digite dois números positivos: ");
  scanf("%d %d", &num1, &num2);

  printf("%d\n", soma(num1, num2));

  return 0;
}