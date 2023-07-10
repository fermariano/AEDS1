#include <stdio.h>
#include <stdlib.h>

void preenche(int *matriz) {

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 4; col++) {
      printf("Linha %d - coluna %d: ", ln, col);
      scanf("%d", (matriz + ln * 4 + col));
    }
  }

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 4; col++) {
      printf("%d ", *(matriz + ln * 4 + col)); 
    }
    printf("\n");
  }
  
}

void totalVendas(int *matriz) {

  int soma = 0;

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 4; col++) {
      soma += *(matriz + ln * 4 + col);
    }
    printf("Total de vendas do mês - vendedor %d: %d\n", ln, soma);
    soma = 0;
  }
}

void totalSemana(int *matriz) {

  int soma = 0;

  for (int col = 0; col < 4; col++) {
    for (int ln = 0; ln < 5; ln++) {
      soma += *(matriz + ln * 4 + col);
    }
    printf("Total de vendas da semana %d: %d\n", col, soma);
    soma = 0;
  }
}

void totalMes(int *matriz) {

  int soma = 0;

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 4; col++) {
      soma += *(matriz + ln * 4 + col);
    }
  }

  printf("Total do mês: %d\n", soma);
}

int main(void) {

  int *matriz = (int *)malloc(5 * 4 * sizeof(int));
  
  preenche(matriz);
  totalVendas(matriz);
  totalSemana(matriz);
  totalMes(matriz);

  return 0;
}