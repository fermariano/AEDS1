#include <stdio.h>

int main(void) {

  int num;
  float soma, quant, media, maior = 0, menor, mediap, par = 0, impar = 0,
                            somapar, porci;

  printf("Digite um número: ");
  scanf("%d", &num);

  menor = num;

  while (num != 30.000) {
    soma += num;
    quant++;
    if (num > maior) {
      maior = num;
    } else if (num < menor) {
      menor = num;
    }
    if (num % 2 == 0) {
      par++;
      somapar += num;
    } else {
      impar++;
    }
    printf("Digite um número: ");
    scanf("%d", &num);
  }

  media = soma / quant;
  mediap = somapar / par;
  porci = impar / quant * 100;

  printf("Soma: %.2f\n", soma);
  printf("Quantidade: %.0f\n", quant);
  printf("Média total: %.2f\n", media);
  printf("Maior número: %.2f\n", maior);
  printf("Menor número: %.2f\n", menor);
  printf("Média dos pares: %.2f\n", mediap);
  printf("Porcentagem números ímpares: %.2f%%\n", porci);

  return 0;
}