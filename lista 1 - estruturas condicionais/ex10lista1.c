#include <stdio.h>

int main(void) {

  int max, atual, multa;
  //printf("Digite a velocidade máxima e a que o motorista estava dirigindo: ");
  scanf("%d %d", &max, &atual);

  if (atual > max) {
    if (atual <= (max + 10)) {
      multa = 50;
      printf("Multa de %d reais\n", multa);
    } else if (atual <= (max + 30)) {
      multa = 100;
      printf("Multa de %d reais\n", multa);
    } else {
      multa = 200;
      printf("Multa de %d reais\n", multa);
    }
  } else {
    printf("Motorista respeitou a lei\n");
  }

  
  
  
  return 0;
}