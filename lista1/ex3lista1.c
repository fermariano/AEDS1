#include <stdio.h>

int main(void) {

  int ano, idade;
  char aniv;

  //printf("Digite o ano de nascimento: ");
  scanf("%d", &ano);

  //printf("Você já fez aniversário? ");
  scanf(" %c", &aniv);

  if (aniv == 'S') {
    idade = 2023 - ano;
  } else if (aniv == 'N') {
    idade = 2022 - ano;
  } else {
    printf("Resposta inválida!\n");
  }

  printf("%d\n", idade);

  if (idade >= 18) {
    printf("Pode dirigir\n");
  } else {
    printf("Não pode dirigir\n");
  }

  return 0;
}