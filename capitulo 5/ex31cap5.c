#include <stdio.h>

int main(void) {

  float idade, peso, altura, cont = 1, mediai, somai = 0, qnt90 = 0, qnt10 = 0,
                             porc;

  while (cont <= 10) {
    printf("Digite a idade, peso e altura: ");
    scanf("%f %f %f", &idade, &peso, &altura);

    somai += idade;

    if (peso > 90 && altura < 1.5) {
      qnt90++;
    }

    if (idade > 10 && idade < 30 && altura > 1.9) {
      qnt10++;
    }

    cont++;
  }

  mediai = somai / 10;
  porc = qnt10 * 10;

  printf("Média da idade: %.2f\n", mediai);
  printf("Quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro: %.0f\n", qnt90);
  printf("Porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m: %.2f\n", porc);

  return 0;
}