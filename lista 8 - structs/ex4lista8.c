#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct info {
  int codigo;
  char doacao;
  char *livro;
  char *autor;
  char *editora;
  char *area;
} tipoInfo;

void preenche(tipoInfo *exatas, tipoInfo *humanas, tipoInfo *biologicas,
              int cont) {

  char *area = (char *)malloc(10 * sizeof(char));

  for (int i = 0; i < cont; i++) {

    (exatas + i)->livro = (char *)malloc(12 * sizeof(char));
    (exatas + i)->autor = (char *)malloc(12 * sizeof(char));
    (exatas + i)->editora = (char *)malloc(12 * sizeof(char));

    (humanas + i)->livro = (char *)malloc(12 * sizeof(char));
    (humanas + i)->autor = (char *)malloc(12 * sizeof(char));
    (humanas + i)->editora = (char *)malloc(12 * sizeof(char));

    (biologicas + i)->livro = (char *)malloc(12 * sizeof(char));
    (biologicas + i)->autor = (char *)malloc(12 * sizeof(char));
    (biologicas + i)->editora = (char *)malloc(12 * sizeof(char));

    printf("Área: ");
    scanf(" %[^\n]", (area));
    if (strcmp(area, "exatas") == 0) {

      printf("Código: ");
      scanf("%d", &(exatas + i)->codigo);
      printf("Doado? ");
      scanf(" %c", &(exatas + i)->doacao);
      printf("Nome da obra: ");
      scanf(" %[^\n]", (exatas + i)->livro);
      printf("Nome do autor: ");
      scanf(" %[^\n]", (exatas + i)->autor);
      printf("Nome da editora: ");
      scanf(" %[^\n]", (exatas + i)->editora);
    } else if (strcmp(area, "humanas") == 0) {

      printf("Código: ");
      scanf("%d", &(humanas + i)->codigo);
      printf("Doado? ");
      scanf(" %c", &(humanas + i)->doacao);
      printf("Nome da obra: ");
      scanf(" %[^\n]", (humanas + i)->livro);
      printf("Nome do autor: ");
      scanf(" %[^\n]", (humanas + i)->autor);
      printf("Nome da editora: ");
      scanf(" %[^\n]", (humanas + i)->editora);
    } else if (strcmp(area, "biologicas") == 0) {

      printf("Código: ");
      scanf("%d", &(biologicas + i)->codigo);
      printf("Doado? ");
      scanf(" %c", &(biologicas + i)->doacao);
      printf("Nome da obra: ");
      scanf(" %[^\n]", (biologicas + i)->livro);
      printf("Nome do autor: ");
      scanf(" %[^\n]", (biologicas + i)->autor);
      printf("Nome da editora: ");
      scanf(" %[^\n]", (biologicas + i)->editora);
    } else {
      printf("Área inválida!\n");
    }
  }
}

void consulta(tipoInfo *exatas, tipoInfo *humanas, tipoInfo *biologicas,
              int cont) {

  int codigo = 0;
  char *area = (char *)malloc(10 * sizeof(char));

  while (codigo != -1) {
    printf("----- Pesquisa -----\n");
    printf("Digite o código: ");
    scanf("%d", &codigo);
    printf("Digite a área: ");
    scanf(" %[^\n]", (area));

    for (int i = 0; i < cont; i++) {
      if (strcmp(area, "exatas") == 0) {
        if (codigo == (exatas + i)->codigo) {
          printf("Livro encontrado:\n");
          printf("Nome da obra: %s\n", (exatas + i)->livro);
          printf("Nome do autor: %s\n", (exatas + i)->autor);
          printf("Nome da editora: %s\n", (exatas + i)->editora);
          printf("Doado? %c\n", (exatas + i)->doacao);
        } else {
        }

      } else if (strcmp(area, "humanas") == 0) {
        if (codigo == (humanas + i)->codigo) {
          printf("Livro encontrado!\n");
          printf("Nome da obra: %s\n", (humanas + i)->livro);
          printf("Nome do autor: %s\n", (humanas + i)->autor);
          printf("Nome da editora: %s\n", (humanas + i)->editora);
          printf("Doado? %c\n", (humanas + i)->doacao);
        } else {
        }

      } else if (strcmp(area, "biologicas") == 0) {
        if (codigo == (biologicas + i)->codigo) {
          printf("Livro encontado!\n");
          printf("Nome da obra: %s\n", (biologicas + i)->livro);
          printf("Nome do autor: %s\n", (biologicas + i)->autor);
          printf("Nome da editora: %s\n", (biologicas + i)->editora);
          printf("Doado? %c\n", (biologicas + i)->doacao);
        } else {
        }
      } else {
        printf("Área inválida!\n");
      }
    }
  }
}

int main(void) {

  int cont = 3;
  tipoInfo *exatas = (tipoInfo *)malloc(cont * sizeof(tipoInfo));
  tipoInfo *humanas = (tipoInfo *)malloc(cont * sizeof(tipoInfo));
  tipoInfo *biologicas = (tipoInfo *)malloc(cont * sizeof(tipoInfo));
  preenche(exatas, humanas, biologicas, cont);
  consulta(exatas, humanas, biologicas, cont);

  return 0;
}