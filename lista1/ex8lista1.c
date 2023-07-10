#include <stdio.h>

int main(void) {

  float salario, aumento, salarion;
  char opcao;

  //printf("Digite a opção: ");
  scanf(" %c", &opcao);
  //printf("Digite o salário atual: ");
  scanf("%f", &salario);

  switch (opcao) {
    case 'A':
    aumento = salario * 0.08;
    break; 
    case 'B': 
    aumento = salario * 0.11;
    break;
    case 'C':
    if (salario <= 1000) {
      aumento = 350;
    } else {
      aumento = 200;
    }
    break;
    default: printf("Opção inválida!\n");
  }

  salarion = aumento + salario;
  printf("%.2f\n", salarion);
  
  return 0;
}