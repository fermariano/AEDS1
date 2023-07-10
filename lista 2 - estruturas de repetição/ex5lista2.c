#include <stdio.h>

int main(void) {

  double salario = 0, filho, media = 0, sal100 = 0, maior = 0, somasal = 0,
         somafilho = 0, mediafilho, perc100;
  int cont = 0;

  while (salario >= 0) {
    // printf("Digite o salário e o número de filhos: ");
    scanf("%lf %lf", &salario, &filho);

    somasal += salario;
    somafilho += filho;

    if (salario > maior) {
      maior = salario;
    }

    if (salario <= 100) {
      sal100++;
    }
    cont++;
  }

  media = somasal / cont;
  mediafilho = somafilho / cont;
  perc100 = sal100 / cont * 100;

  printf("%.2lf\n", media);
  printf("%.0lf\n", mediafilho);
  printf("%.2lf\n", maior);
  printf("%.2lf\n", perc100);

  return 0;
}