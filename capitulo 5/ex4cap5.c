#include <stdio.h>

int main(void) {

  float cod, veiculos, acidente, maior, menor, media, soma=0, media2, cont,
      cidmaior, cidmenor, soma2=0, cid2=0;
  cont = 1;
  while (cont <= 5) {
    if (cont == 1) {
      printf("Digite o código da cidade, número de veículos de passeio e "
             "número de acidentes de trânsito com vítimas: ");
      scanf("%f %f %f", &cod, &veiculos, &acidente);
      menor = acidente;
      cidmenor = cod;
      maior = acidente;
      cidmaior = cod;
      soma = veiculos;
 
      cont++;

      if (veiculos < 2000) {
        soma2 = acidente;
        cid2++;
      } else {
        // empty
      }
    } else {
      printf("Digite o código da cidade, número de veículos de passeio e "
             "número de acidentes de trânsito com vítimas: ");
      scanf("%f %f %f", &cod, &veiculos, &acidente);
      soma += veiculos;

      if (acidente > maior) {
        maior = acidente;
        cidmaior = cod;
      } else if (acidente < menor) {
        menor = acidente;
        cidmenor = cod;
      } else {
        // empty
      }
      if (veiculos < 2000) {
        soma2 += acidente;
        cid2++;
      } else {
        // empty
      }
      
      cont++;
    }
    media = soma / 5;
    media2 = soma2 / cid2;
  }

  printf("A cidade com maior índice de acidente é %.0f, com %.0f acidentes\n",
         cidmaior, maior);
  printf("A cidade com menor índice de acidente é %.0f, com %.0f acidentes\n",
         cidmenor, menor);
  printf("A média de veículos nas 5 cidades juntas é %.2f\n", media);
  printf(
      "A média de acidentes nas cidades com menos de 2000 habitantes é %.2f\n",
      media2);

  return 0;
}