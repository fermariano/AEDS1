#include <stdio.h>
int divisivel(int numero);
int main(void) {

  int num;
  printf("Digite um valor inteiro positivo: ");
  scanf("%d", &num);
  printf("A soma dos números divisiíveis é %d\n", divisivel(num));

  return 0;
}

int divisivel(int numero) {

  int cont = 1, somadiv = 0;

  while (numero >= cont) {
    if (numero % cont == 0) {
      somadiv += cont;
    }
    cont++;
  }

  return somadiv;
}