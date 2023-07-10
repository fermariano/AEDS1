#include <stdio.h>

int main(void) {

  int num1=0, num2=1, cont, res;

  printf("%d\n", num1); 
  printf("%d\n", num2); 
  
  cont = 0;
  while (cont <= 8) {
    res = num1 + num2;
    printf("%d\n", res); 
    num1 = num2;
    num2 = res;
    cont++;
  }
  
  return 0;
}