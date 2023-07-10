#include <stdio.h>

int main(void) {

  float nota;

  //printf("Digite uma nota: ");
  scanf("%f", &nota);

  if (nota >= 8 && nota <= 10) {
    printf("Ótimo\n");
  } else if (nota >= 7) {
    printf("Bom\n");
  } else if (nota >= 5) {
    printf("Regular\n");
  } else if (nota < 5) {
    printf("Insatisfatório\n");
  } else {
    printf("Nota invlálida\n");
  }
  
  return 0;
}