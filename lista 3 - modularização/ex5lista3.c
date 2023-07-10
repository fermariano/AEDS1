#include <stdio.h>

float mediafinal(void) {
  float nota;
  printf("Digite a nota: ");
  scanf("%f", &nota);

  if (nota <= 39) {
    printf("F\n");
  } else if (nota >= 40 && nota <= 59) {
    printf("E\n");
  } else if (nota >= 60 && nota <= 69) {
    printf("D\n");
  } else if (nota >= 70 && nota <= 79) {
    printf("C\n");
  } else if (nota >= 80 && nota <= 89) {
    printf("B\n");
  } else {
    printf("A\n");
  }
  return 0;
}

int main(void) {

  int cont = 1, nota, aluno;

  //printf("Digite o total de alunos: ");
  scanf("%d", &aluno);

  while (cont <= aluno) {
    mediafinal();
    cont++;
  }

  return 0;
}