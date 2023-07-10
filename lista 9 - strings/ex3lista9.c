#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  int cont = 0;

  char *vetor = (char *)malloc(10 * sizeof(char));
  char *mes = (char *)malloc(2 * sizeof(char));
  char *dia = (char *)malloc(2 * sizeof(char));
  char *ano = (char *)malloc(4 * sizeof(char));
  char *teste = (char *)malloc(9 * sizeof(char));

  printf("Data: ");
  scanf("%[^\n]", (vetor));


  for (int i = 0; i < 5; i++) {
    if (*(vetor + i) == '/') {
      *(mes) = *(vetor + i + 1);
      *(mes + 1) = *(vetor + i + 2);
    }
  }

  for (int i = 6; i < 10; i++) {
    *(ano + cont) = *(vetor + i);
    cont++;
  }

  *(dia) = *(vetor);
  *(dia + 1) = *(vetor + 1);

  if (*(mes) == '0') {
    if (*(mes + 1) == '1') {
      printf("Você nasceu em %s de Janeiro de %s.\n", dia, ano);
    } else if (*(mes + 1) == '2') {
      printf("Você nasceu em %s de Fevereiro de %s.\n", dia, ano);
    } else if (*(mes + 1) == '3') {
      printf("Você nasceu em %s de Março de %s.\n", dia, ano);
    } else if (*(mes + 1) == '4') {
      printf("Você nasceu em %s de Abril de %s.\n", dia, ano);
    } else if (*(mes + 1) == '5') {
      printf("Você nasceu em %s de Maio de %s.\n", dia, ano);
    } else if (*(mes + 1) == '6') {
      printf("Você nasceu em %s de Junho de %s.\n", dia, ano);
    } else if (*(mes + 1) == '7') {
      printf("Você nasceu em %s de Julho de %s.\n", dia, ano);
    } else if (*(mes + 1) == '8') {
      printf("Você nasceu em %s de Agosto de %s.\n", dia, ano);
    } else if (*(mes + 1) == '9') {
      printf("Você nasceu em %s de Setembro de %s.\n", dia, ano);
    }
  } else if (*(mes) == '1') {
    if (*(mes + 1) == '1') {
      printf("Você nasceu em %s de Novembro de %s.\n", dia, ano);
    } else if (*(mes + 1) == '2') {
      printf("Você nasceu em %s de Dezembro de %s.\n", dia, ano);
    } else if (*(mes + 1) == '0') {
      printf("Você nasceu em %s de Outubro de %s.\n", dia, ano);
    } else {
      printf("Mês inválido!\n");
    }
  }


  return 0;
}