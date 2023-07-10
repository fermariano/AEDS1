#include <stdio.h>

// Autor: Fernanda Mariano;
// Última atualização: 20/03/2023
// Objetivo: Receber dois números e imprimir o maior deles.

int main(void) {

  int num1, num2;
  //printf("Digite dois números: ");
  scanf("%d %d", &num1, &num2);

  if (num1 > num2) {
    printf("%d\n", num1);
  } else if (num2 > num1) {
    printf("%d\n", num2);
  } else {
    //empty
  }
  
  return 0;
}