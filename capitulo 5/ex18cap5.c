#include <stdio.h>
#include <math.h>

int main(void) {

  float num, quad, cubo, raiz;

  printf("Digite o número: negativo para parar o programa: ");
  scanf("%f", &num);

  while (num >= 0) {
    quad = num * num;
    cubo = num * num * num;
    raiz = sqrt(num);
    printf("Quadrado: %.2f\n", quad);
    printf("Cubo: %.2f\n", cubo);
    printf("Raiz: %.2f\n", raiz);
    printf("Digite um novo valor: ");
    scanf("%f", &num);
  }
  
  return 0;
}