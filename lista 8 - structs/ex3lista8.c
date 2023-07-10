#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro {
  int codigo;
  char *email;
  int acesso;
  char pagina;
} tipoCad;

void calcula(tipoCad *cadastro, int cont) {

  float *vetor = (float *)malloc(cont * sizeof(float));

  for (int i = 0; i < cont; i++) {
    if ((cadastro + i)->acesso <= 20) {
      *(vetor + i) = 35;
    } else {
      *(vetor + i) = 35 + (((cadastro + i)->acesso - 20) * 2.5);
    }
    if ((cadastro + i)->pagina == 's' || (cadastro + i)->pagina == 'S') {
      *(vetor + i) += 40;
    } else {
      // nada
    }
  }

  printf("Relatório: \n");
  for (int j = 0; j < cont; j++) {
    printf("Pessoa %d: \n", j);
    printf("Código do cliente: %d\n", (cadastro + j)->codigo);
    printf("Valor a pagar: %.2f\n", *(vetor + j));
    printf("\n");
  }
}

void preenche(tipoCad *cadastro, int cont) {

    for (int i = 0; i < cont; i++) {
    (cadastro + i)->email = (char *)malloc(15 * sizeof(char));
    printf("Código de cliente: ");
    scanf("%d", &((cadastro + i)->codigo));
    printf("Email: ");
    scanf(" %[^\n]", (cadastro + i)->email);
    printf("Número de horas: ");
    scanf("%d", &(cadastro + i)->acesso);
    printf("Página de acesso? ");
    scanf(" %c", &(cadastro + i)->pagina);
  }
}

int main(void) {

  int contador = 500;
  tipoCad *pessoas = (tipoCad *)malloc(contador * sizeof(tipoCad));
  preenche(pessoas, contador);
  calcula(pessoas, contador);

  return 0;
}