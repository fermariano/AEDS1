#include <stdio.h>

int main(void) {

  float x, y; 
  //printf("Digite o valor de X: ");
  scanf("%f", &x);

  if (x <= 1) {
    y = 1;
  } else if (x <= 2) {
    y = 2;
  } else if (x <= 3) {
    y = x * x;
  } else {
    y = x * x * x;
  }

  printf("%.2f\n", y);
  
  return 0;
}