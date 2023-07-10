#include <stdio.h>

int main(void) {

  float a, b, raiz; 
  //printf("Digite os coeficientes da equação: ");
  scanf("%f %f", &a, &b);

  raiz = (-b / a);

  printf("%.2f\n", raiz);
  
  return 0;
}