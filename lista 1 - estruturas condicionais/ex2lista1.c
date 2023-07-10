#include <stdio.h>

// Autor: Fernanda Mariano 
// Última atualização: 20/03/2023
// Objetivo: ler dois números e fazer a adição - se soma >= 10, soma 5; caso contrário, soma 7.

int main(void) {

  int num1, num2, soma, result;

  //printf("Digite dois números inteiros: ");
  scanf("%d %d", &num1, &num2);

  soma = num1 + num2;

  if (soma >= 10) {
    soma += 5;
    printf("%d\n", soma);
  } else {
    soma += 7;
    printf("%d\n", soma);
  }
  
  return 0;
}