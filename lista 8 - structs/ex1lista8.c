#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tipoReg {
  char *nome;
  int dia;
  int mes;
} tipoReg;

int main(void) {

  int cont = 4, contador = 0, cont2 = 0;

  tipoReg *pessoas = (tipoReg *)malloc(cont * sizeof(tipoReg));
  int *vetor = (int *)malloc(12 * sizeof(int));

  for (int t = 0; t < cont; t++) {
    (pessoas + t)->nome = (char *)malloc(16 * sizeof(char));
  }

  for (int i = 0; i < cont; i++) {

    printf("Nome: ");
    scanf(" %[^\n]", (pessoas + i)->nome);
    printf("Dia: ");
    scanf("%d", &(pessoas + i)->dia);
    printf("Mês: ");
    scanf("%d", &(pessoas + i)->mes);
  }

  for (int m = 1; m <= 12; m++) {
    contador = 0;
    for (int i = 0; i < cont; i++) {

      if ((pessoas + i)->mes == m) {
        contador++;
      }
    }
    if (contador > 0) {
      printf("%d pessoas fazem aniversário no mês %d, sendo elas: \n", contador,
             m);
    }
    for (int p = 0; p < cont; p++) {
      if (((pessoas + p)->mes) == m) {
        printf("Nome: %s\nData: %d\n\n", ((pessoas + p)->nome),
               (pessoas + p)->dia);
      }
    }
  }

  return 0;
}