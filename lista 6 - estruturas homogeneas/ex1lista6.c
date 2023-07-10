#include <stdio.h>
#include <stdlib.h>

void preenche(float *vetor) {
  for (int i = 0; i < 10; i++) {
    printf("Digite a nota: ");
    scanf("%f", (vetor + i));
  }
}

void somaMedia(float *vetor) {

  float soma = 0, media, aluno = 0;

  for (int i = 0; i < 10; i++) {
    soma += *(vetor + i);
  }

  media = soma / 10;

  for (int j = 0; j < 10; j++) {
    if (*(vetor + j) > media) {
      aluno++;
    }
  }

  printf("Média: %.2f\n", media);
  printf("Alunos acima da média: %.0f\n", aluno);
}

int main(void) {

  float *vetor = (float *)malloc(10 * sizeof(float));

  preenche(vetor);
  somaMedia(vetor);

  return 0;
}