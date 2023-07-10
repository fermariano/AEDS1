#include <stdio.h>
#include <string.h>

int main(void) {

  char texto[101];
  char leitura;
  FILE *arqSaida = fopen("saida.txt", "w");
  int cont = 0;

  printf("Digite o texto: ");
  scanf("%[^\n]", texto);

  fprintf(arqSaida, "%s", texto);

  fclose(arqSaida);

  FILE *arqRead = fopen("saida.txt", "r");

  while (fscanf(arqRead, "%c", &leitura) != EOF) {
    if (leitura == 'A' || leitura == 'a') {
      cont++;
    }
  }

  printf("%d CARACTERES\n", cont);

  fclose(arqSaida);

  FILE *arqEntrada = fopen("entrada.txt", "w");
  char reader;
  int linha = 0;
  char teste;

  fprintf(arqEntrada, "Exemplo de texto\nEscrito dentro do arquivo\nCom várias "
                      "linhas\nPara análise\n");

  fclose(arqEntrada);

  fopen("entrada.txt", "r");

  while (fscanf(arqEntrada, "%c", &teste) != EOF) {
    printf("%c", teste);
    if (teste == '\n')
      linha++;
  }

  fclose(arqEntrada);

  printf("%d LINHAS\n", linha);

  return 0;
}