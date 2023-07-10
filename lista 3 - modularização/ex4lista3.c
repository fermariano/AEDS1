#include <stdio.h>

int triangulo(int a, int b, int c) {
  if (a > b + c || b > a + c || c > a + b) {
    printf("NAO TRIANGULO\n");
  } else {
    if (a == b && a == c) {
      printf("TRIANGULO EQUILATERO\n");
    } else if (a != b && a != c && b != c) {
      printf("TRIANGULO ESCALENO\n");
    } else {
      printf("TRIANGULO ISOSCELES\n");
    }
  }
  return 0;
}

int main(void) {

  int l1 = 1, l2, l3, aux = 1;

  while (l1 > 0) {
    if (l1 > 0 && l2 > 0 && l3 > 0) {
      scanf("%d %d %d", &l1, &l2, &l3);
      triangulo(l1, l2, l3);
    } else {
      // empty
    }
  }

  return 0;
}