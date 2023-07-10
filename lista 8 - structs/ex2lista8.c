#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastro {
  char *nome;
  int telefone;
  float valor;
} tipoCad;

void abaixoMedia(tipoCad *cadastro, int cont, float media) {

  printf("Relatório abaixo da média: \n");

  for (int i = 0; i < cont; i++) {
    if (((cadastro + i)->valor) < media) {
      printf("Nome da loja: %s\n", (cadastro + i)->nome);
      printf("Telefone: %d\n", (cadastro + i)->telefone);
    }
  }
}

float media(tipoCad *cadastro, int cont) {

  float media, soma = 0;

  for (int i = 0; i < cont; i++) {
    soma += (cadastro + i)->valor;
  }

  media = soma / cont;

  return media;
}

void preenche(tipoCad *cadastro, int cont) {

  for (int i = 0; i < cont; i++) {
    (cadastro + i)->nome = (char *)malloc(10 * sizeof(char));
    printf("Nome da loja: ");
    scanf(" %[^\n]", (cadastro + i)->nome);
    printf("Telefone: ");
    scanf("%d", &(cadastro + i)->telefone);
    printf("Valor: ");
    scanf("%f", &(cadastro + i)->valor);
  }
}

int main(void) {

  int cont = 5;
  tipoCad *cadastro = (tipoCad *)malloc(cont * sizeof(tipoCad));
  preenche(cadastro, cont);
  printf("Média: %.2f\n",media(cadastro, cont));
  abaixoMedia(cadastro, cont, media(cadastro, cont));

  return 0;
}