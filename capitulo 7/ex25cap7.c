#include <stdio.h>
#include <stdlib.h>

void preenche(int *matriz1, int *matriz2) {

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 3; col++) {
      printf("Mês 1 - linha %d - coluna %d: ", ln, col);
      scanf("%d", (matriz1 + ln * 3 + col));
    }
  }

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 3; col++) {
      printf("Mês 2 - linha %d - coluna %d: ", ln, col);
      scanf("%d", (matriz2 + ln * 3 + col));
    }
  }
}

void bimestre(int *matriz1, int *matriz2, int *matrizTotal) {

  int soma;

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 3; col++) {
      soma = *(matriz1 + ln * 3 + col) + *(matriz2 + ln * 3 + col);
      *(matrizTotal + ln * 3 + col) = soma;
    }
  }

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 3; col++) {
      printf("%d ", *(matrizTotal + ln * 3 + col));
    }
    printf("\n");
  }
}

void vendaProduto(int *bimestre) {

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 3; col++) {
      printf("Loja %d - produto %d: %d\n", ln, col, *(bimestre + ln * 3 + col));
    }
  }
}

void maiorVenda(int *bimestre) {

  int maior = *(bimestre);

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 3; col++) {
      if (*(bimestre + ln * 3 + col) > maior) {
        maior = *(bimestre + ln * 3 + col);
      }
    }
  }

  printf("A maior venda do bimestre foi: %d\n", maior);
}

void totalLoja (int* bimestre) {

  int total = 0;

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 3; col++) {
      total += *(bimestre + ln * 3 + col);
    }
    printf("Total vendido no bimestre - loja %d: %d\n", ln, total);
    total = 0;
  }
  
}

void totalProduto(int* bimestre) {

  int soma = 0;

  for (int col = 0; col < 3; col++) {
    for (int ln = 0; ln < 5; ln++) {
      soma += *(bimestre + ln * 3 + col);
    }
    printf("Total vendido no bimestre - produto %d: %d\n", col, soma);
    soma = 0;
  }
  
}

int main(void) {

  int *matriz1 = (int *)malloc(3 * 5 * sizeof(int));
  int *matriz2 = (int *)malloc(3 * 5 * sizeof(int));
  int *matrizTotal = (int *)malloc(3 * 5 * sizeof(int));

  preenche(matriz1, matriz2);
  bimestre(matriz1, matriz2, matrizTotal);
  vendaProduto(matrizTotal);
  maiorVenda(matrizTotal);
  totalLoja(matrizTotal);
  totalProduto(matrizTotal);

  return 0;
}