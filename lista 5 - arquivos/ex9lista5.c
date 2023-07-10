#include <stdio.h>

int main(void) {
  int opcao, matricula, telefone, cont;
  FILE *arqSaida = fopen("saida.txt", "w");

  printf("Como deseja enviar as informações? ");
  scanf("%d", &opcao);

  if (opcao == 1) {
    for (int cont = 1; cont <= 30; cont++) {
      printf("Digite a matrícula e telefone: ");
      scanf("%d %d", &matricula, &telefone);
      fprintf(arqSaida, "%d %d\n", matricula, telefone);
    }
  } else if (opcao == 2) {
    FILE *arqEntrada = fopen("entrada.txt", "r");
    while (fscanf(arqEntrada, "%d %d", &matricula, &telefone) != EOF) {
      fprintf(arqSaida, "%d %d\n", matricula, telefone);
    }
    fclose(arqEntrada);
  }
  fclose(arqSaida);
  return 0;
}