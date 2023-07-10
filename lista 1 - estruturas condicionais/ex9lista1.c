#include <stdio.h>

int main(void) {

  char sinal;
  //printf("Digite o sinal: ");
  scanf(" %c", &sinal);

  switch (sinal) {
    case '<': 
    printf("SINAL DE MENOR\n");
    break;
    case '>':
    printf("SINAL DE MAIOR\n");
    break;
    case '=':
    printf("SINAL DE IGUAL\n");
    break;
    default:
    printf("OUTRO SINAL\n");
  }
  
  return 0;
}