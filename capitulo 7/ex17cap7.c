#include <stdio.h>
#include <stdlib.h>

void preenche(int *matriz) {

  int cont5 = 0, cont11 = 0, cont13 = 0;

  // preenche
  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 5; col++) {
      
      printf("Linha %d - Coluna %d: ", ln, col);
      scanf("%d", (matriz + ln * 5 + col));
      
      if (*(matriz + ln * 5 + col) % 5 == 0 && *(matriz + ln * 5 + col) > 0) {
        if (cont5 < 5) {
          cont5++;
        } else {
          printf("Diagonal totalmente preenchida, escreva outro valor: ");
          scanf("%d", (matriz + ln * 5 + col));
          if (*(matriz + ln * 5 + col) % 11 == 0) {
            cont11++;
          } else if (*(matriz + ln * 5 + col) % 13 == 0) {
            cont13++;
          } else {
            // empty
          }
        }
      } else if (*(matriz + ln * 5 + col) % 11 == 0 && *(matriz + ln * 5 + col) > 0) {
        if (cont11 < 10) {
          cont11++;
        } else {
          printf("Não existe espaço acima da diagonal principal, escreva outro "
                 "valor: ");
          scanf("%d", (matriz + ln * 5 + col));
          if (*(matriz + ln * 5 + col) % 5 == 0) {
            cont5++;
          } else if (*(matriz + ln * 5 + col) % 13 == 0) {
            cont13++;
          } else {
            // empty
          }
        }
      } else if (*(matriz + ln * 5 + col) % 13 == 0 && *(matriz + ln * 5 + col) > 0) {
        if (cont13 < 10) {
          cont13++;
        } else {
          printf("Não existe espaço abaixo da diagonal principal, escreva "
                 "outro valor: ");
          scanf("%d", (matriz + ln * 5 + col));
          if (*(matriz + ln * 5 + col) % 11 == 0) {
            cont11++;
          } else if (*(matriz + ln * 5 + col) % 5 == 0) {
            cont5++;
          } else {
            // empty
          }
        }
      } else {
        printf("Valor inválido!\n");
        printf("Digite novamente: Linha %d - Coluna %d: ", ln, col);
        scanf("%d", (matriz + ln * 5 + col));
        if (*(matriz + ln * 5 + col) % 5 == 0) {
          cont5++;
        } else if (*(matriz + ln * 5 + col) % 11 == 0) {
          cont11++;
        } else if (*(matriz + ln * 5 + col) % 13 == 0) {
          cont13++;
        } else {
          // empty
        }
      }
    }
  }
  
}

void organizar(int *matriz) {

  int *vetor = (int *)malloc(5 * sizeof(int));
  int cont = 0;

  // multiplos de 5

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 5; col++) {
      if (*(matriz + ln * 5 + col) % 5 == 0) {
        *(vetor + cont) = *(matriz + ln * 5 + col);
        cont++;
      }
    }
  }


  // multiplos de 11

  int *vetor2 = (int *)malloc(10 * sizeof(int));
  cont = 0;

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 5; col++) {
      if (*(matriz + ln * 5 + col) % 11 == 0) {
        *(vetor2 + cont) = *(matriz + ln * 5 + col);
        cont++;
      }
    }
  }


  // multiplos de 13

  int *vetor3 = (int *)malloc(10 * sizeof(int));
  cont = 0;

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 5; col++) {
      if (*(matriz + ln * 5 + col) % 13 == 0) {
        *(vetor3 + cont) = *(matriz + ln * 5 + col);
        cont++;
      }
    }
  }

  
  // mudar de posição

  cont = 0;
  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 5; col++) {
      if (ln == col) {
        *(matriz + ln * 5 + col) = *(vetor + cont);
        cont++;
      }
    }
  }

  cont = 0;
  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 5; col++) {
      if (col > ln) {
        *(matriz + ln * 5 + col) = *(vetor2 + cont);
        cont++;
      }
    }
  }

  cont = 0;
  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 5; col++) {
      if (col < ln) {
        *(matriz + ln * 5 + col) = *(vetor3 + cont);
        cont++;
      }
    }
  }

  printf("\n");

  free(vetor);
  free(vetor2);
  free(vetor3);
}

int main(void) {

  int *matriz = (int *)malloc(5 * 5 * sizeof(int));
  preenche(matriz);
  organizar(matriz);

  // imprime
  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 5; col++) {
      printf("%d ", *(matriz + ln * 5 + col));
    }
    printf("\n");
  }

  free(matriz);

  return 0;
}