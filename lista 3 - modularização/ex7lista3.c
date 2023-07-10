#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

int check(int num) {

  if (num >= 0) {
    return true;
  } else {
    return false;
  }
}

int main(void) {

  int num;

  while (num > INT_MIN) {
    // printf("Digite um número: ");
    scanf("%d", &num);

    if (check(num)) {
      printf("SIM\n");
    } else {
      printf("NAO\n");
    }
  }

  return 0;
}