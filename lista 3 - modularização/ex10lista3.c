#include <stdio.h>

char categoria(int idade) {
  if (idade >= 5 && idade <= 7) {
    return 'F';
  } else if (idade <= 10) {
    return 'E';
  } else if (idade <= 13) {
    return 'D';
  } else if (idade <= 15) {
    return 'C';
  } else if (idade <= 17) {
    return 'B';
  } else if (idade >= 18) {
    return 'A';
  } else {
    return 'X';
  }
}

int main(void) {

  int idade, cont = 2;
  char cat;
  while (cont > 1) {
    // printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("%c\n", categoria(idade));
  }

  return 0;
}