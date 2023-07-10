#include <stdio.h>

int main(void) {

  int num1=2, num2=7, num3=3, cont=1, numtermos;
  printf("Digite o número de termos: ");
  scanf("%d", &numtermos);

  printf("%d - %d - %d - ", num1, num2, num3);

  while (cont <= numtermos) {
    num1 = num1 * 2;
    num2 = num2 * 3;
    num3 = num3 * 4;
    printf("%d - %d - %d - ", num1, num2, num3);
    cont++;
  }
  
  return 0;
}