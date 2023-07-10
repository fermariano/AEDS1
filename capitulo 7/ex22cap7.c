#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void preenche(int *matriz) {

  for (int ln = 0; ln < 4; ln++) {
    for (int col = 0; col < 3; col++) {
      printf("Linha %d - coluna %d: ", ln, col);
      scanf("%d", (matriz + ln * 3 + col));
    }
  }
}

int quadrado(int *matriz) {

  int cont = 0, aux;
  float raiz;

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 3; col++) {
      raiz = sqrt(*(matriz + ln * 3 + col));
      aux = raiz;
      if (aux == raiz) {
        cont++;
        printf("%d ", *(matriz + ln * 3 + col));
      }
    }
  }
  return cont;
}

int estoque2(int *matriz) {

  int maior = 0, linha;

  for (int ln = 0; ln < 4; ln++) {
    if (*(matriz + 1 + ln * 3) > maior) {
      maior = *(matriz + 1 + ln * 3);
      linha = ln;
    }
  }
  return linha;
}

int menorEstoque(int *matriz) {

  int menor = *(matriz);
  int armazem = 0;

  for (int ln = 0; ln < 4; ln++) {
    for (int col = 0; col < 3; col++) {
      if (*(matriz + ln * 3 + col) < menor) {
        menor = *(matriz + ln * 3 + col);
        armazem = ln;
      }
    }
  }
  return armazem;
}

void custoTotalP(int *matriz) {

  int soma = 0, total;

  for (int col = 0; col < 3; col++) {
    soma = 0;
    for (int ln = 0; ln < 4; ln++) {
      soma += *(matriz + ln * 3 + col);
    }
    total = soma * *(matriz + 4 * 3 + col);
    printf("Total produto %d: %d \n", col, total);
  }
}

void custoTotalA(int *matriz) {

  int soma = 0, total1, total2, total3;

  for (int ln = 0; ln < 4; ln++) {
    for (int col = 0; col < 3; col++) {
      if (col == 0) {
        total1 = *(matriz + ln * 3 + col) * *(matriz + 4 * 3);
      } else if (col == 1) {
        total2 = *(matriz + ln * 3 + col) * *(matriz + 4 * 3 + 1);
      } else {
        total3 = *(matriz + ln * 3 + col) * *(matriz + 4 * 3 + 2);
      }
    }
    soma = total1 + total2 + total3;
    printf("Custo total do armazem %d: %d\n", ln, soma);
  }
}

int main(void) {

  int *matriz = (int *)malloc(5 * 3 * sizeof(int));
  preenche(matriz);

  printf("\n%d\n", quadrado(matriz));
  printf("Maior estoque do produto 2: %d\n", estoque2(matriz));
  printf("Menor estoque: %d\n", menorEstoque(matriz));
  custoTotalP(matriz);
  custoTotalA(matriz);

  printf("\n");

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 3; col++) {
      printf("%d ", *(matriz + ln * 3 + col));
    }
    printf("\n");
  }

  return 0;
}