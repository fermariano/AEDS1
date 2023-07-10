#include <stdio.h>

int main(void) {

  int opcao;
  float salario, imposto, novosalario;

  printf("Menu de opções: \n");
  printf("1. Imposto\n");
  printf("2. Novo salário\n");
  printf("3. Classificação\n");
  printf("4.Finalizar o programa\n");

  printf("Digite a opção: ");
  scanf("%d", &opcao);

  while (opcao != 4) {

    if (opcao == 1) {
      printf("Digite o salário: ");
      scanf("%f", &salario);

      if (salario < 500) {
        imposto = salario * 0.05;

      } else if (salario < 850) {
        imposto = salario * 0.1;

      } else {
        imposto = salario * 0.15;
      }
      printf("Valor do imposto: %.2f\n", imposto);

    } else if (opcao == 2) {
      printf("Digite o salário: ");
      scanf("%f", &salario);
      if (salario > 1500) {
        novosalario = salario + 25;
      } else if (salario >= 750) {
        novosalario = salario + 50;
      } else if (salario >= 450) {
        novosalario = salario + 75;
      } else {
        novosalario = salario + 100;
      }
      printf("Novo salário: %.2f\n", novosalario);
    } else if (opcao == 3) {
      printf("Digite o salário: ");
      scanf("%f", &salario);
      if (salario <= 700) {
        printf("Mal remunerado\n");
      } else {
        printf("Bem remunerado\n");
      }
    } else {
      printf("Opção inválida!\n");
      printf("Digite a opção: ");
      scanf("%d", &opcao);
    }

    printf("Digite a opção: ");
    scanf("%d", &opcao);
  }

  return 0;
}