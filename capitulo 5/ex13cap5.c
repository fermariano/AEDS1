#include <stdio.h>

// Número de crianças que nasceram + sexo + tempo de vida
// % crianças do sexo feminino mortas
// % crianças do sexo masculino mortas
// % crianças que viveram <= 24 meses

int main(void) {

  float total, tempo, fem = 0, masc = 0, vida24 = 0, 
                    cont = 1, percf, percm, perc24;
  char sexo;

  printf("Digite o número de crianças nascidas: ");
  scanf("%f", &total);

  while (cont <= total) {
    printf("Digite o sexo da criança: ");
    scanf(" %c", &sexo);
    printf("Digite o tempo de vida: ");
    scanf("%f", &tempo);

    if (sexo == 'F') {
      fem++;
    } else if (sexo == 'M') {
      masc++;
    } else {
      printf("Sexo inválido!\n");
    }

    if (tempo <= 24) {
      vida24++;
    } else {
      // empty
    }
    cont++;
  }

  percf = (fem / total) * 100.0;
  percm = (masc / total) * 100.0;
  perc24 = (vida24 / total) * 100.0;

  printf("A porcentagem de crianças do sexo feminino mortas é %.2f\n", percf);
  printf("A porcentagem de crianças do sexo masculino mortas é %.2f\n", percm);
  printf("A porcentagem de crianças que viveram 24 meses ou menos %.2f\n", perc24);

  return 0;
}