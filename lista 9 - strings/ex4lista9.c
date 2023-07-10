#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

  char *vetor = (char *)malloc(30 * sizeof(char));

  int cont = 0, cont3 = 0;

  printf("Digite a frase: ");
  scanf("%[^\n]", (vetor));

  char *vetor2 = (char *)malloc(strlen(vetor) * sizeof(char));
  char *vetortemp = (char *)malloc(strlen(vetor) * sizeof(char));

  for (int k = 0; k < strlen(vetor); k++) {
    if (*(vetor + k) == ' ') {
      // nada
    } else {
      *(vetortemp + cont3) = *(vetor + k);
      cont3++;
    }
  }

  int cont2 = (strlen(vetortemp) - 1);

  for (int i = 0; i < strlen(vetortemp); i++) {
    *(vetor2 + i) = *(vetortemp + cont2);
    cont2--;
  }


  for (int j = 0; j < strlen(vetortemp); j++) {
    if (*(vetortemp + j) == *(vetor2 + j)) {
      cont++;
    }
  }

  printf("%d\n", cont);

  if (cont == strlen(vetortemp)) {
    printf("É palíndromo.\n");
  } else {
    printf("Não é palíndromo\n");
  }

  return 0;
}