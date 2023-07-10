#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int *matriz = (int *)malloc(5 * 4 * sizeof(int));
  int *vetorPar = (int *)malloc(12 * sizeof(int));
  int *vetorImpar = (int *)malloc(8 * sizeof(int));
  int contP = 0, contI = 0, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 4; col++) {
      printf("Linha %d - coluna %d: ", ln, col);
      scanf("%d", (matriz + ln * 4 + col));

      if (*(matriz + ln * 4 + col) % 2 == 0) {
        if (cont3 < 12) {
          *(vetorPar + cont1) = *(matriz + ln * 4 + col);
          cont1++;
          cont3++;
        } else {
          printf("Quantidade de números pares atingido! Digite números ímpares: ");
          scanf("%d", (matriz + ln * 4 + col));
          *(vetorImpar + cont2) = *(matriz + ln * 4 + col);
          cont2++;
        }
      } else {
        if (cont4 < 8) {

          *(vetorImpar + cont2) = *(matriz + ln * 4 + col);
          cont2++;
          cont4++;

        } else {
          printf("Quantidade de números ímpares atingido! Digite números pares: ");
          scanf("%d", (matriz + ln * 4 + col));
          *(vetorPar + cont1) = *(matriz + ln * 4 + col);
          cont1++;
          cont3++;
        }
      }
    }
  }

  // for (int i = 0; i < 12; i++) {
  //  printf("%d ", *(vetorPar + i));
  // }

  // printf("\n");

 // for (int j = 0; j < 8; j++) {
 //   printf("%d ", *(vetorImpar + j));
 // }

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 4; col++) {
      if (ln % 2 == 0) { // linha par
        *(matriz + ln * 4 + col) = *(vetorPar + contP);
        contP++;
      } else { // linha impar
        *(matriz + ln * 4 + col) = *(vetorImpar + contI);
        contI++;
      }
    }
  }

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 4; col++) {
      printf("%d ", *(matriz + ln * 4 + col));
    }
    printf("\n");
  }

  return 0;
}