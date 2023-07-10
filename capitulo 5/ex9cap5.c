#include <stdio.h>

int main(void) {

  float nota1, nota2, mediac = 0, totala = 0, totale = 0, totalr = 0,
                      mediat = 0, cont;

  cont = 0;

  while (cont <= 5) {
    printf("Digite as duas notas: ");
    scanf("%f %f", &nota1, &nota2);
    mediac = (nota1 + nota2) / 2;
    printf("A média é %.2f\n", mediac);

    if (mediac < 3) {
      printf("Reprovado\n");
      totalr++;
    } else if (mediac < 7) {
      printf("Exame\n");
      totale++;
    } else {
      printf("Aprovado\n");
      totala++;
    }

    mediat += (nota1 + nota2); 
    
    cont++;
  }

  mediat = mediat / 12;

  printf("Total de alunos aprovados: %.0f\n", totala);
  printf("Total de alunos em exame: %.0f\n", totale);
  printf("Total de alunos Reprovados: %.0f\n", totalr);
  printf("A média geral da turma é %.2f\n", mediat);

  return 0;
}