#include <limits.h>
#include <stdio.h>

float media(float somanota, float aluno6) {
  float mediatotal;

  mediatotal = somanota / aluno6;

  return mediatotal;
}

int main(void) {

  float nota, cont = 1, alunos, aluno6 = 0, somanota = 0, medianota;

  // printf("Digite o número de alunos: ");
  scanf("%f", &alunos);
  while (cont <= alunos) {
    // printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 6) {
      aluno6++;
      somanota += nota;
    }

    cont++;
  }

  printf("%.1f\n", media(somanota, aluno6));
  return 0;
}