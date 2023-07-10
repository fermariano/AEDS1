#include <stdio.h>

int main(void) {

  float ano, salario, salarion, percentual;
  printf("Digite o ano atual: ");
  scanf("%f", &ano);

  salario = 1015;
  percentual = 0.015;

  while (ano >= 2007) {
    percentual = percentual * 2;
    salario = salario + (percentual * salario);
    ano--;
    printf("Salário atual: %.2f\n", salario);
  }

  
  
  return 0;
}