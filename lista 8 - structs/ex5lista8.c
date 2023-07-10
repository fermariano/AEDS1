#include <stdio.h>
#include <stdlib.h>

typedef struct dados {
  char *nome;
  char *endereco;
  int telefone;
} tipoDados;

int main(void) {

  tipoDados *dados = (tipoDados *)malloc(2 * sizeof(tipoDados));

  for (int i = 0; i < 2; i++) {

    (dados + i)->nome = (char *)malloc(10 * sizeof(char));
    (dados + i)->endereco = (char *)malloc(20 * sizeof(char));

    printf("Nome: ");
    scanf(" %[^\n]", (dados + i)->nome);
    printf("Endereço: ");
    scanf(" %[^\n]", (dados + i)->endereco);
    printf("Telefone: ");
    printf("%d", (dados + i)->telefone);
  }

  return 0;
}