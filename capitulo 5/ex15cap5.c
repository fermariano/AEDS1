#include <stdio.h>

// Preço unitário + refrigeração + categoria (12) = custo de estocagem + imposto
// (não preencher - 2% || preencher (cat a && ref s) - 4%) + preço final +
// classificação + media do custo de estocagem e e imposto + maior preço final +
// menor preço final + total dos impostos + quantidade de produtos baratos,
// normais e caros.

int main(void) {

  float valor, custoe, imposto, valorfinal, mediacusimp, maior, menor, totalimp,
      barato = 0, normal = 0, caro = 0, cusimp = 0, cont = 1, impostototal;
  char refri, cat;

  printf("Digite o preço unitário do produto: ");
  scanf("%f", &valor);
  printf("Digite a categoria: ");
  scanf(" %c", &cat);
  printf("Digite a refrigeração: ");
  scanf(" %c", &refri);

  if (valor <= 20) {
    if (cat == 'A') {
      custoe = 2;
    } else if (cat == 'L') {
      custoe = 3;
    } else if (cat == 'V') {
      custoe = 4;
    } else {
      printf("Categoria inválida!\n");
    }
  } else if (valor <= 50) {
    if (refri == 'S') {
      custoe = 6;
    } else if (refri == 'N') {
      custoe = 0;
    } else {
      printf("Refrigeração inválida\n");
    }
  } else {
    if (refri == 'S') {
      if (cat == 'A') {
        custoe = 5;
      } else if (cat == 'L') {
        custoe = 2;
      } else if (cat == 'V') {
        custoe = 4;
      } else {
        printf("Categoria inválida!\n");
      }
    } else if (refri == 'N') {
      if (cat == 'A' || cat == 'V') {
        custoe = 0;
      } else if (cat == 'L') {
        custoe = 1;
      } else {
        printf("Categoria inválida!\n");
      }
    }
  }

  if (cat == 'A' && refri == 'S') {
    imposto = valor * 0.04;
    impostototal = imposto;
  } else {
    imposto = valor * 0.02;
    impostototal = imposto;
  }

  valorfinal = valor + imposto + custoe;
  maior = valorfinal;
  menor = valorfinal;
  cusimp = imposto + custoe;

  if (valorfinal <= 20) {
    printf("Barato\n");
    barato++;
  } else if (valorfinal <= 100) {
    printf("Normal\n");
    normal++;
  } else {
    printf("Caro\n");
    caro++;
  }
  printf("O preço final é de %.2f\n", valorfinal);
  cont++;

  while (cont <= 3) {

    printf("Digite o preço unitário do produto: ");
    scanf("%f", &valor);
    printf("Digite a categoria: ");
    scanf(" %c", &cat);
    printf("Digite a refrigeração: ");
    scanf(" %c", &refri);

    if (valor <= 20) {
      if (cat == 'A') {
        custoe = 2;
      } else if (cat == 'L') {
        custoe = 3;
      } else if (cat == 'V') {
        custoe = 4;
      } else {
        printf("Categoria inválida!\n");
      }
    } else if (valor <= 50) {
      if (refri == 'S') {
        custoe = 6;
      } else if (refri == 'N') {
        custoe = 0;
      } else {
        printf("Refrigeração inválida\n");
      }
    } else {
      if (refri == 'S') {
        if (cat == 'A') {
          custoe = 5;
        } else if (cat == 'L') {
          custoe = 2;
        } else if (cat == 'V') {
          custoe = 4;
        } else {
          printf("Categoria inválida!\n");
        }
      } else if (refri == 'N') {
        if (cat == 'A' || cat == 'V') {
          custoe = 0;
        } else if (cat == 'L') {
          custoe = 1;
        } else {
          printf("Categoria inválida!\n");
        }
      }

      if (cat == 'A' && refri == 'S') {
        imposto = valor * 0.04;
      } else {
        imposto = valor * 0.02;
      }

      valorfinal = valor + imposto + custoe;
      cusimp = imposto + custoe;

      if (valorfinal <= 20) {
        printf("Barato\n");
        barato++;
      } else if (valorfinal <= 100) {
        printf("Normal\n");
        normal++;
      } else {
        printf("Caro\n");
        caro++;
      }

      if (valorfinal > maior) {
        maior = valorfinal;
      } else {
        // empty
      }

      if (valorfinal < menor) {
        menor = valorfinal;
      }

      printf("O preço final é de %.2f\n", valorfinal);
      impostototal += imposto;
      cont++;
    }
  }

  mediacusimp = cusimp / 12;

  printf("A média dos valores adicionais é %.2f\n", mediacusimp);
  printf("O maior preço final é %.2f\n", maior);
  printf("O menor preço final é %.2f\n", menor);
  printf("O imposto total é %.2f\n", impostototal);
  printf("Produtos baratos: %.2f\n", barato);
  printf("Produtos normais: %.2f\n", normal);
  printf("Produtos caros: %.2f\n", caro);

  return 0;
}
