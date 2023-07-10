#include <stdio.h>

int main(void) {

  int veiculo;
  float aluguel, fatAnual, atraso, manutencao;
  
  printf("Digite a quantidade de veículos e o valor do aluguel: ");
  scanf("%d %f", &veiculo, &aluguel);

  fatAnual = (veiculo / 3) * aluguel * 12;
  atraso = (veiculo / 10) * (aluguel * 0.2);
  manutencao = (veiculo * 0.02) * 600;

  printf("%.2f\n", fatAnual);
  printf("%.2f\n", atraso);
  printf("%.2f\n", manutencao);

  FILE *arqSaida = fopen("resultado.txt", "w");
  fprintf(arqSaida, "%.2f\n", fatAnual);
  fprintf(arqSaida, "%.2f\n", atraso);
  fprintf(arqSaida, "%.2f\n", manutencao);

  fclose(arqSaida);
  
  return 0;
}