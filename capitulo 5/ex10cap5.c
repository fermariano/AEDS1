#include <stdio.h>

int main(void) {

  float somaidade = 0, idade, somapeso = 0, peso, somaaltura = 0, altura, quant18 = 0, mediai, mediaa,
        porcentagem80, cont = 1, jogador = 1, somaa = 0, quant80 = 0;

  while (jogador <= 12) {
    printf("Digite a idade, peso e altura do jogador: ");
    scanf("%f %f %f", &idade, &peso, &altura);
    somaidade += idade;
    somapeso += peso;
    somaaltura += altura;

    if (jogador == 11 || jogador == 22 || jogador == 33 || jogador == 44 ||
        jogador == 55) {
      mediai = somaidade / 11;
      printf("A média da idade do time é %.2f\n", mediai);
      idade = 0;
    } else {
      // empty
    }

    if (idade < 18) {
      quant18++;
    } else {
      // empty
    }

    if (peso > 80) {
      quant80++;
    }

    mediaa = somaaltura / 55;
    porcentagem80 = (quant80 / 55) * 100;

    jogador++;
  }

  printf("A quantidade de jogadores menores de 18 é %.0f\n", quant18);
  printf("A média da altura dos jogadores é %.2f\n", mediaa);
  printf("A porcentagem de jogadores com mais de 80kg é %.2f\n", porcentagem80);

  return 0;
}