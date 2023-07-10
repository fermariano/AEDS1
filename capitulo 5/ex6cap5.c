#include <stdio.h>

int main(void) {

  float cod, horat, valorhorat, salmin = 450, salinicial, aux, func, salfinal;
  char turno, cat;

  func = 0;
  while (func <= 10) {
    printf("Digite o código e o número de horas trabalhadas: ");
    scanf("%f %f", &cod, &horat);
    printf("Digite o turno e a categoria de trabalho: ");
    scanf(" %c %c", &turno, &cat);

    // Valor hora trabalhada
    if (cat == 'G') {
      if (turno == 'N') {
        valorhorat = salmin * 0.18;
      } else if (turno == 'M' || turno == 'V') {
        valorhorat = salmin * 0.15;
      } else {
        printf("Turno inválido!\n");
      }
    } else if (cat == 'O') {
      if (turno == 'N') {
        valorhorat = salmin * 0.13;
      } else if (turno == 'M' || turno == 'V') {
        valorhorat = salmin * 0.1;
      } else {
        printf("Turno inválido!\n");
      }
    } else {
      printf("Categoria inválida!\n");
    }

    // Salário inicial 
    salinicial = valorhorat * horat;

    // Auxílio Alimentação
    if (salinicial <= 300) {
      aux = salinicial * 0.2;
    } else if (salinicial <= 600) {
      aux = salinicial * 0.15;
    } else {
      aux = salinicial * 0.05;
    }

    salfinal = salinicial + aux;

    printf("O código do funcionário é %.0f\n", cod);
    printf("O número de horas trabalhadas é %.0f\n", horat);
    printf("O valor da hora trabalhada é %.2f\n", valorhorat);
    printf("O salário inicial é de %.2f\n", salinicial);
    printf("O auxílio alimentação é de %.2f\n", aux);
    printf("O salário final é %.2f\n", salfinal);

    // Incremento da variável
    func++;

    }

    return 0;
  }