#include <stdio.h>
#include <string.h>

int main(void) {

  char frase[31];
  int vogal = 0;
  printf("Digite uma frase: ");
  scanf("%[^\n]", frase);

  printf("%s\n", frase);

  for (int i = 0; i < strlen(frase); i++) {
    if (frase[i] == 'a' || frase[i] == 'A' || frase[i] == 'e'||
    frase[i] == 'E' || frase[i] == 'i' || frase[i] == 'I' ||
        frase[i] == 'o' || frase[i] == 'O' || frase[i] == 'u'||
        frase[i] == 'U') {
      vogal++;
    }
  }

  printf("%d vogais\n", vogal);

  return 0;
}