#include <stdio.h>

int main(void) {

  float cod, hora, salariol, salariob, salariolh, salariolm,
      homem = 0, mulher = 0, mediam, mediaf;
  char sexo;

  printf("Digite o código: ");
  scanf("%f", &cod);

  while (cod != 99999) {

    printf("Digite o número de horas/aula dadas: ");
    scanf("%f", &hora);
    printf("Digite o sexo: ");
    scanf(" %c", &sexo);

    salariob = 30 * hora;

    if (sexo == 'M') {
      salariol = salariob - (salariob * 0.1);
      homem++;
      salariolh += salariol;
    } else if (sexo == 'F') {
      salariol = salariob - (salariob * 0.05);
      mulher++;
      salariolm += salariol;
    } else {
      printf("Sexo inválido!\n");
    }

    mediam = salariolm / homem;
    mediaf = salariolm / mulher;

    printf("Código: %.0f\n", cod);
    printf("Salário bruto: %.2f\n", salariob);
    printf("Salário líquido: %.2f\n", salariol);

    printf("Digite o código: ");
    scanf("%f", &cod);
  }

  printf("Média salário líquido dos homens: %.2f\n", mediam);
  printf("Média salário líquido das mulheres: %.2f\n", mediaf);

  return 0;
}