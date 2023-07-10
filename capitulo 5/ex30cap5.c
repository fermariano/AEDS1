#include <stdio.h>

int main(void) {

  float idade, peso, altura, qntip = 0, qntalt = 0, somaalt, mediaalt, azul = 0, porcazul, ruiva = 0, cont = 1;
  char olho, cabelo;

  while (cont <= 6) {
    printf("Digite a idade, peso e altura: ");
    scanf("%f %f %f", &idade, &peso, &altura);

    printf("Digite a cor dos olhos: ");
    scanf(" %c", &olho);

    printf("Digite a cor do cabelo: ");
    scanf(" %c", &cabelo);

    if (idade > 50 && peso < 60) {
      qntip++;
    }

    if (altura > 1.50) {
      qntalt++;
      somaalt += altura;
    }

    if (olho == 'A') {
      azul++;
    }

    if (cabelo == 'R' && olho != 'A') {
      ruiva++;
    }

    cont++;
    
  }

  porcazul = azul / 6 * 100;
  mediaalt = somaalt / qntalt;

  printf("Pessoas com idade superior a 50 anos e peso inferior a 60 kg: %.0f\n", qntip);
  printf("Média das idades das pessoas com altura inferior a 1,50 m: %.2f\n", mediaalt);
  printf("Porcentagem de pessoas com olhos azuis: %.2f%%\n", porcazul);
  printf("Quantidade de pessoas ruivas e que não possuem olhos azuis: %.0f\n", ruiva);
  

  return 0;
}