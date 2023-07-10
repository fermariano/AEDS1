#include <stdio.h>

// <= 30 peças por mês — classe 1 || < 50 - classe 2 || > 50 peças — classe 3
// classe 1: salario minimo || classe 2: +3% por peça (acima das 30 iniciais) ||
// classe 3: +5% por peça (acima das 30 iniciais) numero do operario + numero de
// peças fabricadas + sexo: numero do operario + salario + total da folha de
// pagamento + total de peças fabricadas + media de peças fabricadas por homens
// + peças fabricadas por mulheres + numero do operarie com maior salario 15
// operarios

int main(void) {

  float num, pecas, salariomin, folha, total, mediah, mediam, maior,
      cont = 1, pecasf = 0, pecasm = 0, pecastotal = 0, mediaf,
      homem = 0, mulher = 0, salario = 0;
  char sexo;

  printf("Digite o número do operário e o número de peças fabricadas: ");
  scanf("%f %f", &num, &pecas);
  printf("Digite o sexo do funcionário: ");
  scanf(" %c", &sexo);

  if (pecas <= 30) {
    salariomin = 450;
  } else if (pecas <= 50) {
    salariomin = 450 + (pecas - 30) * (0.03 * 450);
  } else {
    salariomin = 450 + (pecas - 30) * (0.05 * 450);
  }

  if (sexo == 'F') {
    mulher++;
    pecasf += pecas;
    mediaf = pecasf / mulher;
  } else if (sexo == 'M') {
    homem++;
    pecasm += pecas;
    mediam = pecasm / homem;
  } else {
    printf("Sexo inválido!");
  }

  pecastotal += pecas;
  salario = salariomin;

  printf("O número do operário é %.0f\n", num);
  printf("O seu salário é %.2f\n", salariomin);

  cont++;

  while (cont <= 7) {
    printf("Digite o número do operário e o número de peças fabricadas: ");
    scanf("%f %f", &num, &pecas);
    printf("Digite o sexo do funcionário: ");
    scanf(" %c", &sexo);

    if (pecas <= 30) {
      salariomin = 450;
    } else if (pecas <= 50) {
      salariomin = 450 + (pecas - 30) * (0.03 * 450);
    } else {
      salariomin = 450 + (pecas - 30) * (0.05 * 450);
    }

    if (sexo == 'F') {
      mulher++;
      pecasf += pecas;
      mediaf = pecasf / mulher;
    } else if (sexo == 'M') {
      homem++;
      pecasm += pecas;
      mediam = pecasm / homem;
    } else {
      printf("Sexo inválido!");
    }

    if (salariomin > salario) {
      salario = salariomin;
      maior = num;
    }

    pecastotal += pecas;
    printf("O número do operário é %.0f\n", num);
    printf("O seu salário é %.2f\n", salariomin);

    cont++;
  }

  printf("O número de peças fabricadas no mês foi %.0f\n", pecastotal);
  printf("A média de peças fabricadas pelos homens foi %.2f\n", pecasm);
  printf("A média de peças fabricadas pelas mulheres é %.2f\n", pecasf);
  printf("O número do operário com maior salário é %.0f\n", maior);

  return 0;
}