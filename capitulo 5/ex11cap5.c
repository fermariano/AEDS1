#include <stdio.h>

int main(void) {

  int cont=1, num, div=0;
  printf("Digite um número: ");
  scanf("%d", &num);

  while (cont < num) {
    
    if (num % cont == 0) {
      div++;
    } else {
      // empty
    }
    cont++;
  }  

  if (div <= 2) {
    printf("Número primo\n");
  } else {
    printf("Número não primo\n");
  }
  
  return 0;
}