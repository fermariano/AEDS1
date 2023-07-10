#include <stdio.h>

// João: 1/3 de Carlos - 0.05 ao mes 
// Carlos: 0.03 ao mes

int main(void) {

  float salj, salc, meses=0, rend;

  printf("Digite o salário do Carlos: ");
  scanf("%f", &salc);

  salj = salc / 3;

  while (salc > salj) {
    salj += salj * 0.05;
    salc += salc * 0.03;
    meses++;
  }

  printf("A quantidade de meses necessários para João igualar/ultrapassar o salário de Carlos é %.0f\n", meses);
  
  return 0;
}