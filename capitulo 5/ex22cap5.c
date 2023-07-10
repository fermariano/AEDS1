#include <stdio.h>

int main(void) {

  float idade, feminino = 0, masculino = 0, homem45 = 0, mediah, idadexp,
               hexp = 0, porch, mulher21 = 0, menor = 0;
  char sexo, exp;

  printf("Digite o sexo: ");
  scanf(" %c", &sexo);

  printf("Digite a idade: ");
  scanf("%f", &idade);

  if (sexo == 'F') {
    menor = idade;
  }

  while (idade > 0) {

    printf("Digite a experiência: ");
    scanf(" %c", &exp);

    if (exp == 'S' && sexo == 'M') {
      hexp++;
      idadexp += idade;
    }

    if (sexo == 'M' && idade > 45) {
      homem45++;
    }

    if (sexo == 'F' && idade < 21 && exp == 'S') {
      mulher21++;
    }

    if (sexo == 'F' && exp == 'S' && idade < menor) {
      menor = idade;
    }

    if (sexo == 'M') {
      masculino++;
    }

    if (sexo == 'F') {
      feminino++;
    }

    printf("Digite o sexo: ");
    scanf(" %c", &sexo);

    printf("Digite a idade: ");
    scanf("%f", &idade);
  }

  mediah = idadexp / hexp;
  porch = homem45 / masculino * 100;

  printf("Número de mulheres: %.0f\n", feminino);
  printf("Número de homens: %.0f\n", masculino);
  printf("Idade média de homens com experiência: %.2f\n", mediah);
  printf("Porcentagem de homens com mais de 45 anos: %.2f%%\n", porch);
  printf("Número de mulheres com menos de 21 anos e experientes: %.0f\n",
         mulher21);
  printf("Menor idade entre as mulheres: %.0f\n", menor);

  return 0;
}