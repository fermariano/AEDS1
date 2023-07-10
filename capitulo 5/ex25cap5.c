#include <stdio.h>

int main(void) {

  float valoru, imposto, transp, seguro, valorfinal, timposto;
  char meio, perigosa;
  int origem;

  printf("Digite o valor unitário: ");
  scanf("%f", &valoru);

  while (valoru > 0) {
    printf("Digite o país de origem: ");
    scanf(" %d", &origem);

    printf("Digite o meio de transporte: ");
    scanf(" %c", &meio);

    printf("Carga perigosa? ");
    scanf(" %c", &perigosa);

    if (valoru <= 100) {
      imposto = valoru * 0.05;
    } else {
      imposto = valoru * 0.1;
    }

    timposto += imposto;
    printf("Valor do imposto: %.2f\n", imposto);

    if (perigosa == 'S') {
      if (origem == 1) {
        transp = 50;
      } else if (origem == 2) {
        transp = 21;
      } else if (origem == 3) {
        transp = 24;
      }
    } else {
      if (origem == 1) {
        transp = 12;
      } else if (origem == 2) {
        transp = 21;
      } else if (origem == 3) {
        transp = 60;
      }
    }

    printf("Valor do transporte: %.2f\n", transp);

    if (origem == 2 && meio == 'A') {
      seguro = valoru / 2;
    } else {
      seguro = 0;
    }

    printf("Valor do seguro: %.0f\n", seguro);

    valorfinal = valoru + imposto + seguro;
    printf("Valor final: %.2f\n", valorfinal);
  }

  printf("Total dos impostos: %.2f\n", timposto);

  return 0;
}