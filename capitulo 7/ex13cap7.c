#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void preenche(char *vetorNome, int *matriz, int *vetorTransporte, FILE* entrada) {

  // Preenche vetor de nome
  for (int i = 0; i < 5; i++) {
    printf("Nome %d: ", i);
    scanf(" %[^\n]", (vetorNome + i * 10));
   // fprintf(entrada, " %s\n", (vetorNome + i));
  }


  // Preenche matriz
  for (int col = 0; col < 4; col++) {
    for (int ln = 0; ln < 5; ln++) {
      printf("Produto %d - loja %d: ", ln, col);
      scanf("%d", (matriz + ln * 4 + col));
    }
  }

  // Preenche vetor transporte
  for (int j = 0; j < 5; j++) {
    printf("Transporte do produto %d: ", j);
    scanf("%d", vetorTransporte + j);
    
  }
}

void imposto(int *matriz, float *matrizResultado) {

  int imposto;

  for (int ln = 0; ln < 5; ln++) {
    for (int col = 0; col < 4; col++) {
      if (*(matriz + ln * 4 + col) < 50) {
        imposto = *(matriz + ln * 4 + col) * 0.05;
        *(matrizResultado + ln * 4 + col) = imposto + *(matriz + ln * 4 + col);
      } else if (*(matriz + ln * 4 + col) <= 100) {
        imposto = *(matriz + ln * 4 + col) * 0.1;
        *(matrizResultado + ln * 4 + col) = imposto + *(matriz + ln * 4 + col);
      } else {
        imposto = *(matriz + ln * 4 + col) * 0.2;
        *(matrizResultado + ln * 4 + col) = imposto + *(matriz + ln * 4 + col);
      }
    }
  }
}

void relatorio(char *vetorNome, int *matriz, int *vetorTransporte,
               float *matrizResultado) {

  for (int col = 0; col < 4; col++) {
    printf("-- Loja %d --\n", col);
    for (int ln = 0; ln < 5; ln++) {
      printf("Produto %d:\n", ln);
      printf("Nome: %s\n", (vetorNome + ln * 10));
      printf("Valor imposto: %.2f\n", *(matrizResultado + ln * 4 + col));
      printf("Custo transporte: %d\n", *(vetorTransporte + ln));
      printf("Preço: %d\n", *(matriz + ln * 4 + col));
      printf("Preço final: %.2f\n", *(matrizResultado + ln * 4 + col));
      printf("\n");
    }
  }
}

int main(void) {

  char *vetorNome = (char *)malloc(10 * 5 * sizeof(char));
  int *matriz = (int *)malloc(5 * 4 * sizeof(int));
  int *vetorTransporte = (int *)malloc(5 * sizeof(int));
  float *matrizResultado = (float *)malloc(5 * 4 * sizeof(float));
  FILE* entrada = fopen("entrada.txt", "w");

  preenche(vetorNome, matriz, vetorTransporte, entrada);
  imposto(matriz, matrizResultado);
  relatorio(vetorNome, matriz, vetorTransporte, matrizResultado);


  return 0;
}