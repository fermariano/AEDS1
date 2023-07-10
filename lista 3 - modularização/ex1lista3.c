#include <stdio.h>

float calcmedia(float num1, float num2, float num3, char letra) {
  float media;
  if (letra == 'A') {
    media = (num1 + num2 + num3) / 3;
    printf("A média das notas é %.2f\n", media);
  } else if (letra == 'P') {
    media = (num1 * 5 + num2 * 3 + num3 * 2) / 10;
    printf("A média ponderada das notas é %.2f\n", media);
  }
  return 0;
}

int main(void) {

  float cont = 1, num1, num2, num3;
  char media;

  while (cont == 1) {
    //printf("Digite 3 notas: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    //printf("Escolha o tipo de média (A ou P): ");
    scanf(" %c", &media);

    calcmedia(num1, num2, num3, media);
  }

  return 0;
}